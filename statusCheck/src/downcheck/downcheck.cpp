/**************************************************
    > File name: downcheck.cpp
    > Author: wzhenyu
    > mail: 
    > Create Time: 2016-04-01 15:20
****************************************************/

#include "downcheck/downcheck.h"

typedef enum {VGG=0, VI=3, VID=4, VMMS=7, VIMM=8}ServType;

static const char* INCOME_OR_DIAL[4] = 
{
	"主叫",
	"被叫",
	"呼转",
	"unknown"
};

/*
// 用于 redis 查询语句的生成 
const char* columns[] = {
	"phoneNumber",
	"osStsDtl",
	"validDate",
	"expireDate"
};
*/

/***********************************************************
 * 函数名: CDownCheck::CDownCheck()
 * 函数功能: 不带参数的构造函数,初始化成员变量
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-01 15:28 
***********************************************************/ 
CDownCheck::CDownCheck()
{
	m_nTotalRecordNum = 0;
	m_nTotalExceptionRecordNum = 0;
	m_pRedisManager = new CRedisManager();

	if (!m_pRedisManager->ConnectRedis())
	{
		/* Redis 连接失败 */
		delete m_pRedisManager;
		exit(EXIT_FAILURE);
	}

	m_nRedisResultIndex = -1;

	m_nCallType = 3;	/* 对应数组 INCOME_OR_DIAL 中的 Unknow 的下标 */
    redisResult = NULL;
}

/***********************************************************
 * 函数名: CDownCheck::~CDownCheck()
 * 函数功能: 析构函数 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-01 15:28 
***********************************************************/ 
CDownCheck::~CDownCheck()
{
	m_nTotalRecordNum = 0;
	m_nTotalExceptionRecordNum = 0;
	m_nRedisResultIndex = 0;

	if (NULL != m_pRedisManager)
	{
		delete m_pRedisManager;
		m_pRedisManager = NULL;
	}

    if (NULL != redisResult) {
        free (redisResult);
        redisResult = NULL;
    }
}

/***********************************************************
 * 函数名: void AddRedisResult(char* phone, redisReply* reply)
 * 函数功能: 将查询出的redis 结果集放到 redisResult数组中，然后与话单进行比较
 * 参数说明: redis 结果集, 结构如下
 * int type
 * int integer
 * int len -- str的长度
 * char* str -- 当结果集只有一个结果时，保存在str 中
 * int elements -- 结果集不止一个元素时，str为NULL，elements为结果的个数
 * redisReply* element -- 多个元素的数组
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-02 12:51 
 * TODO: 参数 phone 是可以不需要的，应该在 common/forString.h 中添加一个借口
 * getStrFromString，此处省略，因为懒
***********************************************************/ 
void CDownCheck::AddRedisResult(char* phone, redisReply* reply)
{
    /* reply->type 是 REDIS_REPLY_ARRAY，因为是从 set 中查找，
     * 但是结果可能为空 */
    unsigned int i = 0;
	if ( reply->type == REDIS_REPLY_NIL
			|| reply->type == REDIS_REPLY_ERROR
			|| ((reply->type == REDIS_REPLY_ARRAY) && 
                (NULL == reply->str) && 
                (reply->elements == 0)))
	{
		/* 说明redis查询的结果为空 */
		return;
	}
	else
	{
        m_nRedisResultIndex++;

        if (m_nRedisResultIndex > 0) { /* 说明里面有数据
                                 此处应该是单停状态的数据 */
            m_nRedisResultIndex--;  /* 因为 m_nRedisResultIndex 自增了两次 */

            /* realloc 调用的注意事项，因为 m_nRedisResultIndex 自增两次，
             * 导致在后续释放时，出现段错误 */

            Data * new_ptr = (Data*)realloc (redisResult, sizeof (Data) * (m_nRedisResultIndex + reply->elements));
            ERRPRINT (NULL == new_ptr, exit (EXIT_FAILURE), 0, 
                    "downcheck#CDownCheck#AddRedisResult#realloc failed, line %d", 
                    __LINE__);

            redisResult = new_ptr;
            new_ptr = NULL;

        } else if (m_nRedisResultIndex == 0) {
            /* 说明之前没有数据 */
            redisResult = (Data*)malloc (sizeof (Data) * (reply->elements));
            ERRPRINT (NULL == redisResult, exit (EXIT_FAILURE), 0, 
                    "downcheck#CDownCheck#AddRedisResult#malloc failed, line %d", 
                    __LINE__);
        }

        for (i=0; i<reply->elements; i++) {
            redisResult[m_nRedisResultIndex].validDate = 
                getIntFromString (reply->element[i]->str, "VALID");
            redisResult[m_nRedisResultIndex].expireDate = 
                getIntFromString (reply->element[i]->str, "EXPIRE");
            redisResult[m_nRedisResultIndex].osStsDtl = 
                getIntFromString (reply->element[i]->str, "STS");
            strcpy(redisResult[m_nRedisResultIndex].phoneNum, 
                    phone);

            m_nRedisResultIndex++;
        }
    }
}

/***********************************************************
 * 函数名: bool CDownCheck::QueryRedisByRecord(NodeRecord* record)
 * 函数功能: 通过话单记录的手机号码，在redis 中搜索号码相关的单双停状态数据, 结果保存在 _DATA_ 结构体数组
 *			 redisResult[2] 中
 * 参数说明: 在公共链表空间中获取的话单节点
 * 返回值说明: 查找成功返回true，失败返回false
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-01 15:28 
***********************************************************/ 
bool CDownCheck::QueryRedisByRecord(NodeRecord* record)
{
	char statement[128]; /* redis 查询语句 */
	char phoneNumber[16] = {0};
	memset(statement, 0, sizeof(statement));

    m_pRedisManager->SelectDb (0);  //用户信息存放在 0 号 数据库

	if (NULL == record)
	{
		DUMPSYSLOG(ERROR, "downcheck", "CDownCheck", "QueryRedisByRecord", "record is null, line %d", __LINE__);
		ERRPRINT(1, return false, 0, "downcheck#CDownCheck#QueryRedisRecord# record is null, line %d", __LINE__);
	}
	int callType = GetServiceCallType(record);
	if (-1 == callType)
	{
		return false;
	}
	else
	{
		m_nCallType = callType;
		/* 彩信是依赖GPRS的，不论是单停还是双停，都不能接收和发送彩信，所以将彩信与GPRS同样处理
		 * 都作为主叫处理, 但是原有的主被叫仍记录，仅仅是当做主叫处理 */
		int idx = GetIndex(record->fileName, recordCallType);

        /* 呼转作为主叫处理 */
        if (VID == idx && callType == REDIRECT_CALL) {
            callType = DIAL_CALL;
        }

		/* 如果是 VI 或者 VGG 业务，获取的不是号码，是 IMSI号，需要先将 根据IMSI号 找到号码
		 * 如果没有找到号码，说明该话单对应的号码没有单双停记录，话单是正常话单 */
		if (idx==VGG || idx==VI)
		{
			if (!m_pRedisManager->Get (record->phoneNum))
				return false;

			redisReply* m_pReply = m_pRedisManager->GetRedisResult();
			if ( m_pReply->type == REDIS_REPLY_NIL
					|| m_pReply->type == REDIS_REPLY_ERROR
					|| ((NULL == m_pReply->str) && (m_pReply->elements == 0)))
			{   
				/* 说明redis查询的结果为空 */
				return true;
			} 
			else
			{
				if (m_pReply->type == REDIS_REPLY_STRING)
				{
					strncpy(phoneNumber, m_pReply->str, sizeof (phoneNumber) - 1);
					phoneNumber[sizeof (phoneNumber) - 1] = '\0';
				}
			}
			m_pReply = NULL;
		}
		else	/* 不是 VI 或者 VGG业务 */
		{
			strncpy(phoneNumber, record->phoneNum, sizeof (phoneNumber) - 1);
			phoneNumber[sizeof (phoneNumber) - 1] = '\0';
		}

		/* 被叫，以 号码+单停状态为 KEY 在 redis 中查询*/
		/* 2-单停 4-双停 */
		/* redis 中保存4个数据, phoneNum, osStsDtl, validDate, expireDate */
        char setname[32] = {0};
		if (callType == INCOME_CALL)
		{
            /* 从 set 中查询时间, smembers 17052482342:4 */
            sprintf (setname, "%s:%d", phoneNumber, DOUBLE_STOP);
            if (!m_pRedisManager->Smembers (setname)) {
                /* 说明 redis 中不存在记录，话单是正常的 */
                return true;
            }

			/* TODO */
			/* 将查询出的数据添加到 _DATA_ 结构体的 redisResult 数组中 */
			AddRedisResult(phoneNumber, 
                    m_pRedisManager->GetRedisResult());
		}
		else	/* 主叫(呼转作为主叫处理)，分别以号码+单停 和 号码+双停 作为 KEY 查询 */
		{
			/* 单停 */
            memset (setname, 0, sizeof (setname));
            sprintf (setname, "%s:%d", phoneNumber, SINGLE_STOP);
			m_pRedisManager->Smembers (setname);
			AddRedisResult(phoneNumber, 
                    m_pRedisManager->GetRedisResult());

			/* 双停 */
            memset (setname, 0, sizeof (setname));
            sprintf (setname, "%s:%d", phoneNumber, DOUBLE_STOP);
			m_pRedisManager->Smembers (setname);
			AddRedisResult(phoneNumber, 
                    m_pRedisManager->GetRedisResult());
		}
	}
	return true;
}

/***********************************************************
 * 函数名: int CDownCheck::GetIndex(char* filename, char* arr[])
 * 函数功能: 根据文件名前缀，判断话单文件的业务类型，在 recordCallType数组中
 *			 的下标索引
 * 参数说明: 
 *			filename: 话单文件名
 *			arr[]: 字符串数组
 * 返回值说明: 返回filename 前缀在字符串数组中的索引, -1 表示不存在
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-01 19:55 
***********************************************************/ 
int CDownCheck::GetIndex(char* filename, const char* arr[])
{
	/* 话单文件名=前缀 + 时间， 时间都是2016，即第一个数字是2 */
	char pre[32] = {0};
	strncpy(pre, filename, strlen(filename));
	pre[strlen(filename)] = '\0';

	char* tmp = strchr(pre, '2');
	*tmp = '\0';

	int i = 0;
	while (recordCallType[i] != NULL)
	{
		if (strcmp(pre, recordCallType[i]) == 0)
			return i;
		i++;
	}
	return -1;
}

/***********************************************************
 * 函数名: int CDownCheck::GetServiceCallType(NodeRecord* record)
 * 函数功能: 根据业务类型和cdrType判断话单记录的主被叫类型 
 * 参数说明: 话单节点
 * 返回值说明: 返回话单主被叫类型，DIAL_CALL主叫，INCOME_CALL被叫, REDIRECT_CALL呼转，-1 表示失败
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-01 19:26 
***********************************************************/ 
int CDownCheck::GetServiceCallType(NodeRecord* record)
{
	int index = GetIndex(record->fileName, recordCallType);
	int callType = -1;
	if (-1 == index)
	{
		DUMPSYSLOG(ERROR, "downcheck", "CDownCheck", "GetServiceCallType", "can not recognize %s", record->fileName);
		ERRPRINT(1, return -1, 0, "downcheck#CDownCheck#GetServiceCallType# can not recognize %s, line %d",
				record->fileName, __LINE__);
	}

	/* 在 recordCallType 数组中，可以根据下标分类，0,1,2 为GPRS，3,4 为GSM, 5,6 为短信, 7,8 为彩信 */
	int type[4] = {-1, DIAL_CALL, INCOME_CALL, REDIRECT_CALL};
	switch (index)
	{
		/* GPRS都作为主叫 */
		case 0:
		case 1:
		case 2:
			callType = DIAL_CALL;
			break;

		/* GSM 01主叫， 02被叫，03呼转 */
		case 3:
		case 4:
			if ((record->cdrType < 4) && (type[record->cdrType] != -1))
			{
				callType = type[record->cdrType];
			}
			else
			{
				goto ERR;
			}
			break;

		/*国内SMS: 00主叫，01被叫; 国际短信: 21主叫, 28被叫*/
		case 5:
			if (record->cdrType == 0)
			{
				callType = DIAL_CALL;
			}
			else if (record->cdrType == 1)
			{
				callType = INCOME_CALL;
			}
			else
			{
				goto ERR;
			}
			break;
		case 6:
			if (record->cdrType == 21)
			{
				callType = DIAL_CALL;
			}
			else if (record->cdrType == 28)
			{
				callType = INCOME_CALL;
			}
			else
			{
				goto ERR;
			}
			break;

		/* 国内/国际彩信， 00主叫， 03被叫 */
		case 7:
		case 8:
			if (record->cdrType == 0)
			{
				callType = DIAL_CALL;
			}
			else if (record->cdrType == 3)
			{
				callType = INCOME_CALL;
			}
			else
			{
				goto ERR;
			}
			break;
		default:
			callType = -1;
			break;
	}
	DUMPSYSLOG(DEBUG, "downcheck", "CDownCheck", "GetServiceCallType", "filename is [%s], Service is [%s], "
			"cdrType is [%d], callType:[%s]", record->fileName, recordCallType[index], record->cdrType, INCOME_OR_DIAL[callType%10]);
	return callType;

ERR:
	DUMPSYSLOG(ERROR, "downcheck", "CDownCheck", "GetServiceCallType",
			"can not found service call type, Service is [%s], cdrType is [%d], callType:[%s]", 
			recordCallType[index], record->cdrType, INCOME_OR_DIAL[callType % 10]);

	ERRPRINT(1, return callType, 0, "downcheck#CDownCheck#GetServiceCalType#" 
			"can not found service call type, Service is [%s], cdrType is [%d], callType[%s]", 
			recordCallType[index], record->cdrType, INCOME_OR_DIAL[callType % 10]);
}

/***********************************************************
 * 函数名: bool CDownCheck::RecordDownCheck(NodeRecord* record)
 * 函数功能: 判断话单是否是异常话单，如果是，需要将异常话单输出 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-02 13:21 
***********************************************************/ 
bool CDownCheck::RecordDownCheck(QueueData* qData)
{
	if (NULL == qData)
		return false;
	NodeRecord* record = qData->record;
	bool bflag = false;
    int callType = m_nCallType;
    int idx = -1;

	if (record->cdrType == -1) // 表示当前节点是话单文件的最后一个节点的标识, 现在不需要这种节点，先过滤，后续解码不在产生这种节点
	{
		memset(redisResult, 0, sizeof(Data)*m_nRedisResultIndex);
		m_nRedisResultIndex = -1;
		return false;
	}

	QueryRedisByRecord(record);
	if (-1 == m_nRedisResultIndex) /* 表示redis中没有对应号码的记录，话单是正常话单 */
	{
//		m_nTotalRecordNum += 1;

#ifdef DEBUG_TEST
		printf("record is normal: filename:[%s]\t phoneNum:[%s]\t filenum:[%d]\t cdrType:[%d]]\t callType:[%s]\n", record->fileName, record->phoneNum, record->fileNum, record->cdrType, INCOME_OR_DIAL[m_nCallType % 10]);
#endif
        bflag = false;
	}
	else
	{
		int i = 0;
		for(; i<m_nRedisResultIndex; i++)
		{
			if (((int)record->startTime >= redisResult[i].validDate)
					&& ((int)record->startTime < redisResult[i].expireDate))
			{
				/* 只有当是异常话单时，才输出true, 将记录加入到输出队列中，否则输出FALSE，并将话单阶段释放 */

				DUMPSYSLOG(TRACE, "DownCheck", "CDownCheck", "RecordDownCheck", "record is unormal, filename:%s, phoneNum:%s, fileNum:%d, callType:%s, startTime:%ld, validDate:%ld, expireDate:%ld", 
						record->fileName, record->phoneNum, record->fileNum,
						INCOME_OR_DIAL[m_nCallType % 10], record->startTime,
						redisResult[i].validDate, redisResult[i].expireDate);

				g_pOutputManager->AddData(qData, redisResult[i]);
				bflag = true;

				/* TODO(wuzy): 当数据同时命中单双停时，会在output中连续插入两个节点，
                 * 但是当其中一个释放时，另一个就变成了野指针 */
				break;
			}
		}

        /* 释放 */
		memset(redisResult, 0, sizeof(Data)*m_nRedisResultIndex);
        free (redisResult);
        redisResult = NULL;
		m_nRedisResultIndex = -1;
    }

    if (!bflag) {
        /* 话单正常 */
        DUMPSYSLOG(TRACE, "DownCheck", "CDownCheck", "RecordDownCheck", "record is normal, filename:%s, phoneNum:%s, fileNum:%d, callType:%s, startTime:%ld", record->fileName, record->phoneNum, record->fileNum, INCOME_OR_DIAL[m_nCallType % 10], record->startTime);

        /* 
         * 语音话单(不分主被叫), 主叫短信, 主叫彩信, 流量话单统计活跃用户数
         */
        idx = GetIndex (record->fileName, recordCallType);
        if (idx==VID) {
            callType = DIAL_CALL;
        }

        if (callType == DIAL_CALL) {
            UpdateCount (record);
        }
    }

    return bflag;
}

/***********************************************************
 * 函数名: bool UpdateCount (NodeRecord* record)
 * 函数功能: 更新计数器
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2017-02-10 15:18 
***********************************************************/ 
bool CDownCheck::UpdateCount (NodeRecord* record)
{
    if (record == NULL) {
        return false;
    }
    char* phone_num = NULL;
    int service_idx = -1;       /* 获取业务类型 */
    char key[64] = {0};

    service_idx = GetIndex (record->fileName, recordCallType);

    /* VGG 和 VI 获取的是 IMSI，不是手机号码，需要根据 IMSI
     * get 号码 
     * */
    if (VGG == service_idx || VI == service_idx) {
        m_pRedisManager->SelectDb (0);  //用户信息存放在 0 号 数据库
        phone_num = m_pRedisManager->Get (record->phoneNum);

        if (NULL == phone_num) {
            return false;
        }
    } else {
        phone_num = record->phoneNum;
    }

    /* 同时更新日和月计数器 */
    sprintf (key, "%s:%s", phone_num, recordCallType[service_idx]);

    /* 这里的 0 和 1 号数据库不能直接写数字，有点 magic ,需要增加可读性 */
    m_pRedisManager->SelectDb(1);   //计数器存放在 1 号数据库
    if (!m_pRedisManager->Zincrby (ZSETNAME_PER_DAY, key, 1)) {
        return false;
    }

    if (!m_pRedisManager->Zincrby (ZSETNAME_PER_MONTH, key, 1)) {
        return false;
    }

    return true;
}
