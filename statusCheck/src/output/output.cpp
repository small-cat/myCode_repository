/**************************************************
    > File name: output.cpp
    > Author: wzhenyu
    > mail:
    > Create Time: 2016-04-05 14:55
****************************************************/

#include "output/output.h"

COutPut g_Output;
const static char* OS_STS_DTL[] = {
	"",
	"",
	"单停",
	"",
	"双停"
};

enum {UNKNOWN=-1, VGG=0, VIG, VLTE, VI, VID, VISMS, VIM, VMMS, VIMM};

/***********************************************************
 * 函数名: COutPut::COutPut()
 * 函数功能: 构造函数，初始化 COutPut 对象
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-05 14:57 
***********************************************************/ 
COutPut::COutPut()
{
	Init();
}

/***********************************************************
 * 函数名: 
 * 函数功能: 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-06 16:03 
***********************************************************/ 
void COutPut::Init()
{
	m_fdDealFileName = NULL;
	m_fdExceptionRecord = NULL;

	memset(m_fileNameBuf, 0, sizeof(m_fileNameBuf));
	memset(m_exceptionRecordBuf, 0, sizeof(m_exceptionRecordBuf));

	memset(m_dealFileName, 0, sizeof(m_dealFileName));
	memset(m_exceptionRecordFileName, 0, sizeof(m_exceptionRecordFileName));
	memset(m_outputPath, 0, sizeof(m_outputPath));
}

/***********************************************************
 * 函数名: COutPut::~COutPut()
 * 函数功能: 析构函数
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-05 15:18 
***********************************************************/ 
COutPut::~COutPut()
{
	if (NULL != m_fdDealFileName)
	{
		fclose(m_fdDealFileName);
		m_fdDealFileName = NULL;
	}

	if (NULL != m_fdExceptionRecord)
	{
		fclose(m_fdExceptionRecord);
		m_fdExceptionRecord = NULL;
	}
}

/***********************************************************
 * 函数名: bool COutPut::Open()
 * 函数功能: 初始化，获取输出文件路径，输出文件名等配置信息 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-05 15:34 
***********************************************************/ 
bool COutPut::Open()
{
    DUMPSYSLOG(INFO, "output", "COutPut", "Open", "Get Config start ..., line %d", __LINE__);
	CConfigManager* conf = new CConfigManager();

	char dealFileName[64] = {0};
	char exptFileName[64] = {0};
	char path[MAX_PATH] = {0};

	conf->GetValue(DOWNCHECK_CONFIG_INI, "output", "dealFileName", dealFileName);
	conf->GetValue(DOWNCHECK_CONFIG_INI, "output", "exceptionFileName", exptFileName);
	conf->GetValue(DOWNCHECK_CONFIG_INI, "output", "outputPath", path);

	/* 获取路径参数配置 */
	if (strlen(path) == 0)
	{
		DUMPSYSLOG(ERROR, "output", "COutPut", "Open", "can not get output path, use default, line %d", __LINE__);
		sprintf(m_outputPath, "/var/");
	}
	else
	{
		if (path[strlen(path) - 1] != '/')	/* 路径最后一个字符不是/,添加/ */
		{
			sprintf(m_outputPath, "%s/", path);
		}
		else
		{
			strncpy(m_outputPath, path, strlen(path));
			m_outputPath[strlen(path)] = '\0';
		}
	}

	char* curDate = getCurDate();
	if (strlen(dealFileName) == 0) /* 说明没有进行配置，使用默认参数 */
	{
		DUMPSYSLOG(ERROR, "output", "COutPut", "Open", "can not get dealFileName, use default, line %d", __LINE__);
		sprintf(m_dealFileName, "%sdeal_file_%s.res", m_outputPath, curDate);
	}
	else
	{
		sprintf(m_dealFileName, "%s%s_%s.res", m_outputPath, dealFileName, curDate);
	}

	if (strlen(exptFileName) == 0)
	{
		DUMPSYSLOG(ERROR, "output", "COutPut", "Open", "can not get exceptionFileName, use default, line %d", __LINE__);
		sprintf(m_exceptionRecordFileName, "%sexception_record_%s.res", m_outputPath, curDate);
	}
	else
	{
		sprintf(m_exceptionRecordFileName, "%s%s_%s.res", m_outputPath, exptFileName, curDate);
	}

	free(curDate);

	if (access(m_dealFileName, F_OK) == -1) // file does not exist
	{
		m_fdDealFileName = fopen(m_dealFileName, "w+");
		ERRPRINT(NULL == m_fdDealFileName, return false, 0, "output#COutPut#Open#open file %s failed, line %d", m_dealFileName, __LINE__);

		fclose(m_fdDealFileName);
	}

	if (access(m_exceptionRecordFileName, F_OK) == -1)
	{
		m_fdExceptionRecord = fopen(m_exceptionRecordFileName, "w+");
		ERRPRINT(NULL == m_fdExceptionRecord, return false, 0, "output#COutPut#Open#open file %s failed, line %d", m_exceptionRecordFileName, __LINE__);

		fclose(m_fdExceptionRecord);
	}

	DUMPSYSLOG(TRACE, "output", "COutPut", "Open", "outputPath is [%s], exptRecordFileName is [%s]", m_outputPath, m_exceptionRecordFileName);

	DUMPSYSLOG(INFO, "output", "COutPut", "Open", "Get config end, line %d", __LINE__);
	delete conf;

	return true;
}

/***********************************************************
 * 函数名: void COutPut::FormatExceptionRecordInfo(fileName, fileNum, phoneNum, cdrType, dialOrIncome, startTime, osStsDtl, validDate, expireDate)
 * 函数功能: 格式化输出信息, 输出异常话单记录信息
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-05 15:18 
***********************************************************/ 
void COutPut::FormatExceptionRecordInfo(
	char* fileName, /* 话单文件名 */
	int fileNum,	/* 话单记录在话单文件中所在的行数 */
	char* phoneNum,		/* 号码 */
	int cdrType,	/* 话单记录中对应话单主被叫类型位置的值 */
	const char* dialOrIncome,		/* 主被叫类型，"主叫" "被叫" "呼转" */
	int startTime,	/* 话单记录开始时间 */
	int osStsDtl,	/* 单双停状态 */
	int validDate,	/* 单双停状态生效时间 */
	int expireDate	/* 单双停状态失效时间 */
	)
{
	memset(m_exceptionRecordBuf, 0, sizeof(m_exceptionRecordBuf));

	/* 将 startTime 转换成正常时间 */
	
	char* start_time = my_mktime(startTime);
	char* valid_date = my_mktime(validDate);
	char* expire_date = my_mktime(expireDate);

	char* curtime = getCurTime();
	/* 文件名 行号 号码 主被叫 开始时间 单双停状态 */
	sprintf(m_exceptionRecordBuf, "%s # 文件名:%s 行号:%d 号码:%s 主被叫:%d[%s] 开始时间:%s 单双停状态:%d[%s] 生效时间:%s 失效时间:%s\n",
			curtime, fileName, fileNum, phoneNum, cdrType, dialOrIncome, start_time, osStsDtl, OS_STS_DTL[osStsDtl], valid_date, expire_date);

	free(start_time);
	free(valid_date);
	free(expire_date);
	free(curtime);
}

/***********************************************************
 * 函数名: void COutPut::FormatFileNameInfo(fileName, totalRecordNum, totalExceptionRecordNum)
 * 函数功能: 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-05 15:31 
***********************************************************/ 
void COutPut::FormatFileNameInfo(
	char* fileName,		/* 话单文件名 */
	int totalRecordNum,		/* 话单文件中话单记录总数 */
	int totalValidNum		/* 话单文件中异常话单记录总数 */
	)
{
	memset(m_fileNameBuf, 0, sizeof(m_fileNameBuf));

	/* 获取当前时间 */
	char* curtime = getCurTime();
	sprintf(m_fileNameBuf, "%s # filename:%s, totalRecordNum:%d, validRecordNum:%d\n", curtime, fileName, totalRecordNum, totalValidNum);

	free(curtime);
}

/***********************************************************
 * 函数名: void COutPut::FileNameDump()
 * 函数功能: 将 m_fileNameBuf 中的字符串写入到输出文件中
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-05 17:40 
***********************************************************/ 
void COutPut::FileNameDump(
	char* fileName,		/* 话单文件名 */
	int totalRecordNum,		/* 话单文件中话单记录总数 */
	int totalValidNum	/* 话单文件中正常话单记录总数 */
	)
{
	char * curdate = getCurDate();
	/* 说明输出文件是昨天的，新建一个今天的文件 */
	if (strstr(m_dealFileName, curdate) == NULL)
	{
        ActiveUserDump ();

		Init();
		Open();

        /*
        BUG:
        此处造成的问题是，当时间刷新，新创建文件时，Init 和 Open 这两个接口
        会将所有的变量都重新初始化，但是如果这个是在 ExceptionRecordDump
        函数中进行的，将不会进入这个 条件，那么，ActiveUserDump 将不会
        执行

        解决办法：在 FileNameDump 和 ExceptionRecordDump 中都增加这个条件，
        同时，都使用 ActiveUserDump 输出活跃用户数
        */
	}
	free(curdate);

	FormatFileNameInfo(fileName, totalRecordNum, totalValidNum);

	m_lockFileNameInfo.Lock();
	m_fdDealFileName = fopen(m_dealFileName, "a+");
	ERRPRINT(NULL == m_fdDealFileName, return, 0, "output#COutPut#FileNameDump#open file %s failed, line %d", m_dealFileName, __LINE__);

	fwrite(m_fileNameBuf, strlen(m_fileNameBuf), 1, m_fdDealFileName);
	fclose(m_fdDealFileName);
	m_fdDealFileName = NULL;

	m_lockFileNameInfo.Unlock();
}

/***********************************************************
 * 函数名: void COutPut::ExceptionRecordDump()
 * 函数功能: 将 m_exceptionRecordBuf 中的格式化内容写入到文件中
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-05 17:42 
***********************************************************/ 
void COutPut::ExceptionRecordDump(
	char* fileName, /* 话单文件名 */
	int fileNum,	/* 话单记录在话单文件中所在的行数 */
	char* phoneNum,		/* 号码 */
	int cdrType,	/* 话单记录中对应话单主被叫类型位置的值 */
	const char* dialOrIncome,		/* 主被叫类型，"主叫" "被叫" "呼转" */
	int startTime,	/* 话单记录开始时间 */
	int osStsDtl,	/* 单双停状态 */
	int validDate,	/* 单双停状态生效时间 */
	int expireDate	/* 单双停状态失效时间 */
	)
{
	char * curdate = getCurDate();
	/* 说明输出文件是昨天的，新建一个今天的文件 */
	if (strstr(m_exceptionRecordFileName, curdate) == NULL)
	{
        ActiveUserDump ();
		Init();
		Open();
	}
	free(curdate);

	FormatExceptionRecordInfo(fileName, fileNum, phoneNum, cdrType, dialOrIncome, startTime, osStsDtl, validDate, expireDate);

	m_lockExceptionRecord.Lock();
	m_fdExceptionRecord = fopen(m_exceptionRecordFileName, "a+");
	ERRPRINT(NULL == m_fdExceptionRecord, return, 0, "output#COutPut#ExceptionRecordDump#open file %s failed, line %d", m_exceptionRecordFileName, __LINE__);

	fwrite(m_exceptionRecordBuf, strlen(m_exceptionRecordBuf), 1,  m_fdExceptionRecord);
	fclose(m_fdExceptionRecord);
	m_fdExceptionRecord = NULL;

	m_lockExceptionRecord.Unlock();
}

/***********************************************************
 * 函数名: int COutput::GetIndex(char* filename, const char* servType[])
 * 函数功能: 
 * 参数说明: 
 * 返回值说明: 返回业务对应的值，-1表示没有该业务，unknown
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-07-13 16:48 
***********************************************************/ 
int COutPut::GetIndex(char* filename, const char* servType[])
{
	char serv[32] = {0};
	strcpy(serv, filename);
	char* p = strchr(serv, '2');
	*p = '\0';

	int i = 0;
	while (servType[i] != NULL)
	{
		if (strcmp(servType[i], serv) == 0)
			return i;
		i++;
	}

	return -1;
}

/***********************************************************
 * 函数名: void COutput::FormatExceptionRecordInfo(WriteNode* writenode)
 * 函数功能: 格式化输出字符串，根据不同的业务输出不同的字段 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-07-13 16:43 
***********************************************************/ 
void COutPut::FormatExceptionRecordInfo(WriteNode* writenode)
{
	memset(m_exceptionRecordBuf, 0, sizeof(m_exceptionRecordBuf));

	/* 将 startTime 转换成正常时间 */
	
	char* start_time = my_mktime(writenode->qData->record->startTime);
	char* valid_date = my_mktime(writenode->redisData->validDate);
	char* expire_date = my_mktime(writenode->redisData->expireDate);

	char* curtime = getCurTime();

	sprintf(m_exceptionRecordBuf, "%s # filename:%s, lineNumber:%d, phoneNum:%s, callType:%d, start_time:%s, os_sts_dtl:%d, valid_date:%s, expire_date:%s,",
			curtime, writenode->qData->record->fileName, writenode->qData->record->fileNum, writenode->qData->record->phoneNum,
			writenode->qData->record->cdrType, start_time, writenode->redisData->osStsDtl, valid_date, expire_date);

	DUMPSYSLOG(TRACE, "OutPut", "COutPut", "FormatExceptionRecordInfo", "write buf: %s", m_exceptionRecordBuf);

	/* 需要根据业务输出不同的字段的值 */
	// TODO
	int servType = GetIndex(writenode->qData->record->fileName, recordCallType);
	char tmp[1024] = {0};
	switch(servType)
	{
		case UNKNOWN:
			break;
		case VLTE:
			{
				memset(tmp, 0, sizeof(tmp));
				sprintf(tmp, " APNNI:%s, SGSNADDR:%s, GGSNADDR:%s, upVolume:%ld, downVolume:%ld\n", 
                        ((VLTE_OP*)(writenode->qData->record->optional))->APNNI, 
                        ((VLTE_OP*)(writenode->qData->record->optional))->sgsnAddr, 
                        ((VLTE_OP*)(writenode->qData->record->optional))->ggsnAddr, 
						((VLTE_OP*)(writenode->qData->record->optional))->upVolume, 
                        ((VLTE_OP*)(writenode->qData->record->optional))->downVolume);
				strcat(m_exceptionRecordBuf, tmp);
				break;
			}
		case VIG:
			{
				memset(tmp, 0, sizeof(tmp));
				sprintf(tmp, " APNNI:%s, upVolume:%ld, downVolume:%ld\n", ((VIG_OP*)writenode->qData->record->optional)->APNNI, 
						((VIG_OP*)writenode->qData->record->optional)->upVolume, ((VIG_OP*)writenode->qData->record->optional)->downVolume);
				strcat(m_exceptionRecordBuf, tmp);
				break;
			}
		case VGG:
			{
				memset(tmp, 0, sizeof(tmp));
				sprintf(tmp, " APNNI:%s, upVolume:%ld, downVolume:%ld\n", ((VGG_OP*)writenode->qData->record->optional)->APNNI, 
						((VGG_OP*)writenode->qData->record->optional)->upVolume, ((VGG_OP*)writenode->qData->record->optional)->downVolume);
				strcat(m_exceptionRecordBuf, tmp);
				break;
			}
		case VI:
			{
				memset(tmp, 0, sizeof(tmp));
				sprintf(tmp, " oppNum:%s, serviceType:%d, serviceCode:%d, duartion:%d, UTC_offset:%s\n", 
						((VI_OP*)writenode->qData->record->optional)->oppNum,
						((VI_OP*)writenode->qData->record->optional)->serviceCode, 
						((VI_OP*)writenode->qData->record->optional)->serviceType, 
						((VI_OP*)writenode->qData->record->optional)->duration, 
						((VI_OP*)writenode->qData->record->optional)->UTC_Offset);
				strcat(m_exceptionRecordBuf, tmp);
				break;
			}
		case VID:
			{
				memset(tmp, 0, sizeof(tmp));
				sprintf(tmp, " oppNum:%s, duartion:%d, msc:%s, lac_id:%s, cell_id:%s, partial_id:%s\n", 
                        ((VID_OP*)writenode->qData->record->optional)->oppNum, 
						((VID_OP*)writenode->qData->record->optional)->duration,
                        ((VID_OP*)(writenode->qData->record->optional))->msc, 
                        ((VID_OP*)(writenode->qData->record->optional))->lac_id, 
                        ((VID_OP*)(writenode->qData->record->optional))->cell_id, 
                        ((VID_OP*)(writenode->qData->record->optional))->partial_id);
				strcat(m_exceptionRecordBuf, tmp);
				break;
			}
		case VISMS:
			{
				memset(tmp, 0, sizeof(tmp));
				sprintf(tmp, " oppNum:%s, finishTime:%s\n", ((VISMS_OP*)writenode->qData->record->optional)->oppNum, 
						((VISMS_OP*)writenode->qData->record->optional)->applyTime);
				strcat(m_exceptionRecordBuf, tmp);
				break;
			}
		case VIM:
			{
				memset(tmp, 0, sizeof(tmp));
				sprintf(tmp, " oppNum:%s, applyTime:%s\n", ((VIM_OP*)writenode->qData->record->optional)->oppNum, 
						((VIM_OP*)writenode->qData->record->optional)->applyTime);
				strcat(m_exceptionRecordBuf, tmp);
				break;
			}
		case VMMS:
			{
				memset(tmp, 0, sizeof(tmp));
				sprintf(tmp, " oppNum:%s, receiveTime:%s\n", ((VMMS_OP*)writenode->qData->record->optional)->oppNum, 
						((VMMS_OP*)writenode->qData->record->optional)->receiveTime);
				strcat(m_exceptionRecordBuf, tmp);
				break;
			}
		case VIMM:
			{
				memset(tmp, 0, sizeof(tmp));
				sprintf(tmp, " oppNum:%s, receiveTime:%s\n", ((VIMM_OP*)writenode->qData->record->optional)->oppNum, 
						((VIMM_OP*)writenode->qData->record->optional)->receiveTime);
				strcat(m_exceptionRecordBuf, tmp);

				break;
			}
		default:
			break;
	}
	
	DUMPSYSLOG(TRACE, "OutPut", "COutPut", "FormatExceptionRecordInfo", "write buf: %s", m_exceptionRecordBuf);
	free(start_time);
	free(valid_date);
	free(expire_date);
	free(curtime);
}

/***********************************************************
 * 函数名: void COutPut::ExceptionRecordDump(WriteNode* writenode)
 * 函数功能: 将输出队列中的数据写入到文件中
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-07-11 14:40 
***********************************************************/ 
void COutPut::ExceptionRecordDump(WriteNode* node)
{
	if (!node)
	{
		return;
	}

	char * curdate = getCurDate();
	/* 说明输出文件是昨天的，新建一个今天的文件 */
	if (strstr(m_exceptionRecordFileName, curdate) == NULL)
	{
        /* 每当新创建一个文件时，输出前一年的活跃用户数 */
        DUMPSYSLOG (DEBUG, "output", "COutput", "ExceptionRecordDump", 
                "create new exception file, line %d", __LINE__);

        ActiveUserDump ();
		Init();
		Open();
	}
	free(curdate);

	FormatExceptionRecordInfo(node);

	if (m_lockExceptionRecord.Lock() != 0)
	{
		DUMPSYSLOG(FATAL, "output", "COutput", "ExceptionRecordDump", "Lock failed, line %d", __LINE__);
		exit(EXIT_FAILURE);
	}
	m_fdExceptionRecord = fopen(m_exceptionRecordFileName, "a+");
	ERRPRINT(NULL == m_fdExceptionRecord, return, 0, "output#COutPut#ExceptionRecordDump#open file %s failed, line %d", m_exceptionRecordFileName, __LINE__);

	fwrite(m_exceptionRecordBuf, strlen(m_exceptionRecordBuf), 1,  m_fdExceptionRecord);
	fclose(m_fdExceptionRecord);
	m_fdExceptionRecord = NULL;

	if (m_lockExceptionRecord.Unlock() !=0 )
	{
		DUMPSYSLOG(FATAL, "output", "COutput", "ExceptionRecordDump", "Unlock failed, line %d", __LINE__);
		exit(EXIT_FAILURE);
	}

}

/***********************************************************
 * 函数名: void ActiveUserDump ()
 * 函数功能: 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2017-02-13 11:32 
***********************************************************/ 
void COutPut::ActiveUserDump ()
{
    char identifier[64] = {0};          /* redis lock, 锁是通过rand获取的随机数，最大值有32
                                           位，identifier 至少需要32字节的空间，取2的指数 */

    /* 获取 redis 锁 */
    CRedisManager* redisManager = new CRedisManager();
    if (!redisManager->ConnectRedis ()) {
        /* redis connect failed */
        delete redisManager;
        exit (EXIT_FAILURE);
    }
    redisManager->SelectDb(1);
    if (!redisManager->RequireRedisLock (REDIS_LOCK_NAME, 10)) {
        goto finally;
    }

    /* 如果直接将 identifier = Get(),
     * 后面释放redisReply的时候，变量就被释放了，这里先将变量的值保存下来 */
    memset (identifier, 0, sizeof (identifier));
    strcpy (identifier, redisManager->Get ((char*)REDIS_LOCK_NAME));

    _activeUserDump ();
    redisManager->ReleaseRedisLock (REDIS_LOCK_NAME, identifier);

finally:
    delete redisManager;
}

void COutPut::_activeUserDump ()
{
    char dump_file[128] = {0};
    /* 按天和月 DUMP 数据 */
    time_t mtime = time (NULL);
    struct tm* m_tm = localtime (&mtime);
    if (m_tm->tm_mday == 1) {   /* 如果是某月第一天 */
        /* dump 整月的数据 */
        memset (dump_file, 0, sizeof (dump_file));
        sprintf (dump_file, "%sactive_user_month_%04d%02d.txt", 
                m_outputPath, m_tm->tm_year+1900, m_tm->tm_mon+1);
        _activeUserDumpPerDayOrMonth (ZSETNAME_PER_MONTH, dump_file);
    }

    /* dump 一天的数据 */
    memset (dump_file, 0, sizeof (dump_file));
    sprintf (dump_file, "%sactive_user_day_%04d%02d%02d.txt", 
            m_outputPath, m_tm->tm_year+1900, m_tm->tm_mon+1, m_tm->tm_mday);
    _activeUserDumpPerDayOrMonth (ZSETNAME_PER_DAY, dump_file);
}

/***********************************************************
 * 函数名: void COutPut::_activeUserDumpPerDayOrMonth ()
 * 函数功能: 输出 redis 中每天记录的用户活跃数据信息 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2017-03-08 16:03 
***********************************************************/ 
void COutPut::_activeUserDumpPerDayOrMonth (const char* zsetname, char* dump_file)
{
    CRedisManager* redisManager = new CRedisManager();
    redisReply* reply = NULL;
    int i, count = 0;              /* redis 结果集数量 */
    if (!redisManager->ConnectRedis()) {
        delete redisManager;
        return;
    }

    redisManager->SelectDb(1);
    /* 给文件上锁 */
    if (m_lockActiveUser.Lock() != 0) {
        DUMPSYSLOG (ERROR, "OutPut", "COutPut", "_activeUserDumpPerDay", 
                "lock file failed, line %d", __LINE__);
        exit (EXIT_FAILURE);
    }
    FILE* fd_dump_file= fopen (dump_file, "a+");
    if (redisManager->Zrange (zsetname, 0, -1, 0)) {    /* all info in zset */
        reply = redisManager->GetRedisResult();
        if (reply->type != REDIS_REPLY_ARRAY ||
                reply->type == REDIS_REPLY_ERROR) {
            freeReplyObject (reply);
            reply = NULL;

            delete redisManager;
            return;
        }

        count = reply->elements;
        for (i=0; i<count; i++) {
            if (reply->element[i]->type == REDIS_REPLY_STRING) {
                fwrite (reply->element[i]->str, 1, reply->element[i]->len, 
                        fd_dump_file);
                fwrite ("\n", 1, 1, fd_dump_file);      /* 添加一个换行 */
            }
        }
    }
    fclose (fd_dump_file);

    /* 当 dump 所有的信息之后，从redis中删除 */
    redisManager->Del (zsetname);

    /* Unlock */
    if (m_lockActiveUser.Unlock() != 0) {
        DUMPSYSLOG (ERROR, "OutPut", "COutPut", "_activeUserDumpPerDay", 
                "unlock file failed, line %d", __LINE__);
        exit (EXIT_FAILURE);
    }

    /* Del 中已经将 reply 指向的变量释放了，不能重复释放 */
    delete redisManager;
}
