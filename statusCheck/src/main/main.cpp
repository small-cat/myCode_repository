/**************************************************
    > File name: main.cpp
    > Author:
    > mail:
    > Create Time: 2016-04-07 16:57
****************************************************/
#include "common/error.h"
#include "common/myTime.h"
#include "common/formatString.h"
#include "config/ConfigManager.h"
#include "datamanager/datamanager.h"
#include "dbmanager/DBManager.h"
#include "dbmanager/RedisManager.h"
#include "decode/decode.h"
#include "downcheck/downcheck.h"
#include "log/log.h"
#include "global/globaldef.h"
#include "output/output.h"
#include "decode/factorydecode.h"
#include "output/output_manager.h"
#include "common/filelock.h"
#include "datamanager/optioncode.h"

#include <pthread.h>
#include <unistd.h>
#include <signal.h>

#define THREADNUM 3		/* 一个解码，一个处理, 一些写文件 */
#define CM_RES_TABLE_NUM 10 /* cm_res_identity 和 cm_res_lifecycle 各分10张表 */

const char* recordCallType[10] = { 
	"VGG",  /* GPRS漫游 */
	"VIG",  /* 国内GPRS */
	"VLTE", /* 国内LTE */
	"VI",   /* GSM漫游 */
	"VID",  /* 国内VID */
	"VISMS",    /* 国内SMS */
	"VIM",  /* 国际SMS */
	"VMMS", /* 国内MMS */
	"VIMM", /* 国际MMS */
	NULL
};


typedef struct _THREAD_HANDLE_
{
	pthread_t thread_id;	/* 线程id，可以通过 pthread_self()获取，这不一定是一个数，可能是一个结构体 */
	int thread_idx;			/* 线程序号 */
	int status;				/* 线程状态，CMDSTART, CMDSTOP */
}ThreadHandle;				/* 线程句柄结构 */

ThreadHandle threadHandle[THREADNUM];
int g_nRedisRefreshTime = 0;	/* 记录 redis 刷新的时间 */

#ifdef DEBUG_TEST
const static char* CMDSTATUS[2] = {
	"CMDSTOP",
	"CMDSTART"
};
#endif

/***********************************************************
 * 函数名: void Version()
 * 函数功能: 显示程序版本信息
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-08 11:02 
***********************************************************/ 
void Version()
{
#ifdef _VERSION_
#define _AXS(x) #x
#define _ASX(x) _AXS(x)
	FPRINTF(2, "%s\n", _ASX(_VERSION_));
#endif
}

/***********************************************************
 * 函数名: void HelpInfo()
 * 函数功能: 显示帮助信息
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-08 11:02 
***********************************************************/ 
void HelpInfo()
{
	PRINTF(1, "\033[1mUsage:\033[0m\n\n");
	PRINTF(1, "./downcheck\t\texecute and start program\n\n");

	PRINTF(1, "\033[1mOther options :\033[0m\n");
	PRINTF(1, "\t-h\t\tdisplay the help information\n");
	PRINTF(1, "\t-v\t\tshow the version number\n");
	PRINTF(1, "\t-t\t\trun program in debug mode\n");
	PRINTF(1, "\t-d\t\tdecode only\n");
	PRINTF(1, "\t-s\t\tstop and exit\n");
}

/***********************************************************
 * 函数名: void WritePid(pid_t pid)
 * 函数功能: 将进程的 pid 写入文件中，文件通过配置文件进行配置 
 * 参数说明: 进程的pid
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-15 09:52 
***********************************************************/ 
void WritePid(pid_t pid)
{
	char mpid[16] = {0};
	sprintf(mpid, "%d", pid);
	char pidfile[256] = {0};

	CConfigManager * conf = new CConfigManager();
	conf->GetValue(DOWNCHECK_CONFIG_INI, "main", "pidfile", pidfile);
	delete conf;

	if (strlen(pidfile) == 0) /* 配置文件中没有配置 */
	{
		sprintf(pidfile, "%s", "/var/downcheck/pidfile.txt");
	}

	DUMPSYSLOG(DEBUG, "main", "main", "WritePid", "pidfile is [%s]", pidfile);

    /* the file is created if it does not exist 
     * but file can not be truncated if existed */
    FILE * fp = fopen(pidfile, "a+");   
    if (NULL == fp)
    {
        DUMPSYSLOG(ERROR, "main", "main", "WritePid", "open pidfile failed, line %d", __LINE__);
        ERRPRINT(1, return, 0, "main#main#WritePid# line %d", __LINE__);
    }

    /* add write lock for pidfile, so other prog can not add any lock, 
     * and prevent user to start another instance */
    if (is_write_lockable (fileno(fp), 0, SEEK_SET, 0)) {
        fclose (fp);
        /* open file and truncated */
        fp = fopen (pidfile, "w+");

        if (write_lock (fileno(fp), 0, SEEK_SET, 0) < 0) {
		    DUMPSYSLOG(ERROR, "main", "main", "WritePid", 
                    "write_lock failed, line %d", __LINE__);
            ERRPRINT (1, return, 0, "main#main#WritePid#write_lock failed,"
                    "line %d", __LINE__);
        }
        fwrite(mpid, strlen(mpid), 1, fp);
        fflush (fp);    /* 数据写入缓冲区，如果被kill, 数据将不会被写入 pid文件中 */
    } else {
        DUMPSYSLOG (ERROR, "main", "main", "WritePid", 
                "program has been started, line %d", __LINE__);
        ERRPRINT(1, exit (EXIT_FAILURE), 0, "main#main#WritePid# Program has been started, line %d", __LINE__);
    }

    /* 任意 fd 被释放，该文件上的记录锁都会被释放 */
//	fclose(fp);
}

void createSql(char* statement, int tablenum)
{
	sprintf(statement, "select iden.rel_identity,UNIX_TIMESTAMP(cycle.valid_date) validDate,"
            "UNIX_TIMESTAMP(cycle.expire_date) expireDate,cycle.os_sts_dtl osStsDtl,"
            "iden.identity from cm_res_identity_%d iden left join "
            "cm_res_lifecycle_%d cycle "
			"on iden.resource_id = cycle.resource_id "
			"where cycle.os_sts_dtl between 2 and 4;", tablenum, tablenum);
}

/***********************************************************
 * 函数名: void RefreshRedis()
 * 函数功能: 将数据从MySQL 中刷新到 redis 中
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-08 11:02 
***********************************************************/ 
void RefreshRedis()
{
    /* 获取配置文件参数，是否需要刷新 redis */
    int redisRefresh = 0;
    int dbnum = 0;  /* 用户信息存放的数据库编号，redis数据库 */
    CConfigManager * conf = new CConfigManager();
    conf->GetValue (DOWNCHECK_CONFIG_INI, "DBManager", "redisRefresh", 
            redisRefresh);
    conf->GetValue (DOWNCHECK_CONFIG_INI, "DBManager", "DBNumForUserInfo", 
            dbnum);
    delete conf;

    if (0 == redisRefresh) {
        DUMPSYSLOG (INFO, "main", "main", "RefreshRedis", 
                "redisRefresh = %d, does not need to refresh.", redisRefresh);
        return;
    }

	DUMPSYSLOG(INFO, "main", "main", "RefreshRedis", "Refresh redis start, line %d", __LINE__);
	
	CDBManager * dbmanager = new CDBManager();
	if (!dbmanager->ConnectDB())
	{
		delete dbmanager;
		DUMPSYSLOG(INFO, "main", "main", "RefreshRedis", "Refresh redis failed, line %d", __LINE__);
		exit(EXIT_FAILURE);
	}

	CRedisManager * redisManager = new CRedisManager();
	if (!redisManager->ConnectRedis())
	{
		delete dbmanager;
		delete redisManager;
		DUMPSYSLOG(INFO, "main", "main", "RefreshRedis", "Refresh redis failed, line %d", __LINE__);
		exit(EXIT_FAILURE);
	}
    redisManager->SelectDb (dbnum); //用户信息放在 0 号数据库

	/* Start by wuzy2016-04-14 10:23 */

	/* 设计sql语句 by sort */
	/* imsi validDate expireDate osStsDtl phoneNum */
	/* 因为 VI VGG 业务号码可能为空，需要以imsi 为准，所以建立一个 imsi 到 phoneNum 的映射关系 */
	
    /* 由处理历史话单引入的 BUG:
     * 用户数据现在插入的是 redis 集合set中，当用户数据valid是3号，expire是
     * 2099的时候，正常刷入redis，但是，当用户信息更新后，由停机状体复机时，
     * 比如6号复机，那么之前的停机状态将变成0，即expire 变成6号，但是，此时
     * 并不会修改 redis 集合中的值，而是插入一条新的数据，这就导致更新之后
     * 的数据与之前的老数据都在，造成数据处理错误。
     *
     * 解决办法：
     * 每次重新刷新 redis 数据时，都将删除所有原来的数据，也就是 flushdb，
     * 清空 redis 存放用户信息的数据库，重新插入用户数据
     * */
    redisManager->FlushDB(dbnum);

    int tablenum = 0;
    while (tablenum < CM_RES_TABLE_NUM) { 
        char sqlstmt[3072] = {0};
        createSql(sqlstmt, tablenum);

        tablenum = tablenum + 1;    // cm_res_identity 和 cm_res_lifecycle
                                    // 是按照0-9分表的

        /* set time zone for current session to CST (China Standard Time)*/
        if (!dbmanager->SetTimeZone(CST)) {
            delete dbmanager;
            delete redisManager;
            DUMPSYSLOG(INFO, "main", "main", "RefreshRedis", "Refresh redis failed, line %d", __LINE__);
            exit(EXIT_FAILURE);
        }

        if (!dbmanager->QueryDB(sqlstmt))
        {
            delete dbmanager;
            delete redisManager;
            DUMPSYSLOG(INFO, "main", "main", "RefreshRedis", "Refresh redis failed, line %d", __LINE__);
            exit(EXIT_FAILURE);
        }

        MYSQL_RES * res = dbmanager->GetResult();
        MYSQL_ROW row;
        unsigned long * lengths = NULL;

        struct _DATA_ mData;
        char set_key[64] = {0};
        char set_value[128] = {0};
        char buf[128] = {0};
        while ((row = mysql_fetch_row(res)) != NULL)
        {
            lengths = mysql_fetch_lengths(res); /* 当前行每一个字段的长度 */
            strncpy(mData.imsi, row[0], lengths[0]);
            mData.imsi[lengths[0]] = '\0';

            mData.validDate = atoi(row[1]);
            mData.expireDate = atoi(row[2]);

            /* mysql 的 UNIX_TIMESTAMP() 只能表示2037年的描述，这是因为INT类型的表示范围所致
             * 数据库中 expire_date 有 2099年，这个函数返回值会溢出，返回0，所以将expire_date 为0的值设置为
             * 2037-12-31 00:00:00 这个时间的秒数，作为最大秒数 MAXDATETIME */
            if (mData.expireDate == 0)
            {
                mData.expireDate = MAXDATETIME;
            }

            mData.osStsDtl = atoi(row[3]);
            strncpy(mData.phoneNum, row[4], lengths[4]);
            mData.phoneNum[lengths[4]] = '\0';

            sprintf (set_key, "%s:%d", mData.phoneNum, mData.osStsDtl);

            /* value 以json的格式 [{phoneNum:XX}, {osStsDtl:XX}, 
             * {valid:XX},{expire:XX}] */
            /*
               formatRedisSetString (set_value, mData.phoneNum, mData.osStsDtl, 
               mData.validDate, mData.expireDate);
               */
            sprintf (set_value, "[{PHONE:%s}, {STS:%d}, {VALID:%d}, {EXPIRE:%d}]", 
                    mData.phoneNum, mData.osStsDtl, mData.validDate, mData.expireDate);
            redisManager->Sadd (set_key, set_value);
            memset (set_key, 0, sizeof (set_key));
            memset (set_value, 0, sizeof (set_value));

            /* set imsi phone */
            memset (buf, 0, sizeof (buf));
            sprintf(buf, "%s %s %s", SET, mData.imsi, mData.phoneNum);
            redisManager->InsertIntoRedis(buf);
            memset(buf, 0, sizeof(buf));
        }
    } 
    
	DUMPSYSLOG(INFO, "main", "main", "RefreshRedis", "RefreshRedis success, line %d", __LINE__);

	delete dbmanager;
	delete redisManager;
}

/***********************************************************
 * 函数名: void sig_alarm(int signo)
 * 函数功能: 捕捉 SIGALRM 信号时的注册函数，暂时不做操作
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-13 09:34 
***********************************************************/ 
void sig_alarm(int signo)
{
	/* TODO */
}

/***********************************************************
 * 函数名: UINT mysleep(UINT nsecs)
 * 函数功能: 睡眠 nsecs 秒 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-13 09:35 
***********************************************************/ 
UINT mysleep(UINT nsecs)
{
	struct sigaction newact, oldact;
	sigset_t newset, oldset, suspset;
	UINT unslept;

	/* 注册捕捉 SIGALRM 信号 */
	newact.sa_handler = sig_alarm;
	newact.sa_flags = 0;
	sigemptyset(&newact.sa_mask);
	sigaction(SIGALRM, &newact, &oldact);

	/* 设置SIGALRM 为 BLOCK */
	sigemptyset(&newset);
	sigaddset(&newset, SIGALRM);
	sigprocmask(SIG_BLOCK, &newset, &oldset);

	alarm(nsecs);

	/* 在捕获到 SIGALRM 信号时，解除SGIALRM信号的屏蔽 */
	suspset = oldset;
	sigdelset(&suspset, SIGALRM);
	sigsuspend(&suspset);

	/* 解除闹钟 */
	unslept = alarm(0);

	/* 恢复原状 */
	sigaction(SIGALRM, &oldact, NULL);
	sigprocmask(SIG_SETMASK, &oldset, NULL);

	return unslept;
}

/***********************************************************
 * 函数名: void* DecodeFileFunc(void * param)
 * 函数功能: 线程函数，读取话单文件
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-08 11:03 
***********************************************************/ 
void* DecodeFileFunc(void* param)
{
	ThreadHandle* thread_handler = (ThreadHandle*)param;

	thread_handler->thread_id = pthread_self();
	thread_handler->status = CMDSTART;

	DUMPSYSLOG(INFO, "main", "main", "DecodeFileFunc", "thread[%lu] DecodeFileFunc start.", thread_handler->thread_id);

	PRINTF(1, "DecodeFileFunc start...\n");
	CFactoryDecode * factoryDecode = new CFactoryDecode(g_pManager);

	int time_per = 0;
	CConfigManager * conf = new CConfigManager();
	conf->GetValue(DOWNCHECK_CONFIG_INI, "decode", "scanDirPerTime", time_per);
	delete conf;


	while (thread_handler->status == CMDSTART)
	{
		factoryDecode->startWork();
//		mysleep(time_per);
        sleep (time_per);
	}

	if (thread_handler->status == CMDSTOP)
	{
		PRINTF(1, "exit DecodeFileFunc...\n");
		DUMPSYSLOG(INFO, "main", "main", "DecodeFileFunc", "thread[%lu] DecodeFileFunc exit.", thread_handler->thread_id);

		delete factoryDecode;
		pthread_exit(NULL);
		return NULL;
	}

	delete factoryDecode;
	return NULL;
}

/***********************************************************
 * 函数名: void * DownCheckFunc(void* param)
 * 函数功能: 线程函数，业务处理
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-08 11:03 
***********************************************************/ 
void * DownCheckFunc(void* param)
{
#ifdef DEBUG_TEST
	mysleep(30);
#endif
	ThreadHandle* thread_handler = (ThreadHandle*)param;

	thread_handler->thread_id = pthread_self();
	thread_handler->status = CMDSTART;

	DUMPSYSLOG(INFO, "main", "main", "DownCheckFunc", "thread[%lu] DownCheckFunc start", thread_handler->thread_id);

	PRINTF(1, "DownCheckFunc Start...\n");

	QueueData* Qnode= NULL;
	CDownCheck * downcheck = new CDownCheck();
	while (thread_handler->status == CMDSTART)
	{
		/* 判断是否需要刷新 redis */
		int refresh_time = 0;
		CConfigManager * conf = new CConfigManager();
		conf->GetValue(DOWNCHECK_CONFIG_INI, "dbmanager", "refreshTime", refresh_time);
		delete conf;

		char* curtime = getCurTime2();
		int oldtime = getUnixTime(curtime);
		free(curtime);

		DUMPSYSLOG(DEBUG, "main", "main", "DownCheckFunc", "line :[%d], oldtime :[%d], refresh_time :[%d], g_nRedisRefreshTime:[%d], oldtime+refresh_time:[%d]",
				__LINE__, oldtime, refresh_time, g_nRedisRefreshTime, oldtime+refresh_time);

		if (oldtime >= g_nRedisRefreshTime)
		{
			RefreshRedis();
			
			/* 刷新 redis 需要一段时间，刷新完后更新 g_nRedisRefreshTime 的值 */
			char* mcurtime = getCurTime2();
			int moldtime = getUnixTime(mcurtime);
			free(mcurtime);

			g_nRedisRefreshTime = moldtime + refresh_time;
			DUMPSYSLOG(DEBUG, "main", "main", "DownCheckFunc", "line :[%d], oldtime :[%d], refresh_time :[%d], g_nRedisRefreshTime update to [%d]",
					__LINE__, oldtime, refresh_time, g_nRedisRefreshTime);
		}

		Qnode = g_pManager->GetData();

		if (!downcheck->RecordDownCheck(Qnode))		/* 业务处理 */
		{
            /* 表示是正常话单 */
			g_pManager->FreeQueueData(Qnode);
			Qnode = NULL;
		}
	}

	if (thread_handler->status == CMDSTOP)
	{
		PRINTF(1, "exit DownCheckFunc");

		DUMPSYSLOG(INFO, "main", "main", "DownCheckFunc", "thread[%lu] DownCheckFunc exit", thread_handler->thread_id);

		delete downcheck;
		pthread_exit(NULL);
	}

	delete downcheck;
	return NULL;
}

/***********************************************************
 * 函数名: void * OutputFunc(void * param)
 * 函数功能: 写线程，用于输出
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-07-15 16:32 
***********************************************************/ 
void * OutputFunc(void * param)
{
	/* TODO */
	ThreadHandle * handler = (ThreadHandle*)param;
	handler->thread_id = pthread_self();
	handler->status = CMDSTART;

	DUMPSYSLOG(INFO, "main", "main", "OutputFunc", "Output thread start.");
	PRINTF(1, "OutputFunc Start...\n");

	WriteNode* wnode = NULL;

	while (handler->status == CMDSTART)
	{
		wnode = g_pOutputManager->GetData();
		DUMPOUTPUT_EXCEPTION(wnode);
		g_pOutputManager->FreeNode(wnode);
		wnode = NULL;
	}

	if (handler->status == CMDSTOP)
	{
		DUMPSYSLOG(INFO, "main", "main", "OutputFunc", "Output thread exit.");
		PRINTF(1, "OutputFunc exit...\n");
		pthread_exit(NULL);
	}
	PRINTF(1, "OutputFunc exit...\n");
	return NULL;
}

void * OutputFuncTest()
{
	/* TODO */
	DUMPSYSLOG(INFO, "main", "main", "OutputFuncTest", "OutputFuncTest start.");
	PRINTF(1, "OutputFuncTest Start...\n");

	WriteNode* wnode = NULL;
	while (!g_pOutputManager->IsEmpty())
	{
		wnode = g_pOutputManager->GetData();
		DUMPOUTPUT_EXCEPTION(wnode);
		g_pOutputManager->FreeNode(wnode);
		wnode = NULL;
	}
    DUMPOUTPUT_ACTIVE_USER_COUNT();

	DUMPSYSLOG(INFO, "main", "main", "OutputFuncTest", "OutputFuncTest exit.");
	PRINTF(1, "OutputFuncTest exit...\n");
	return NULL;
}

/***********************************************************
 * 函数名: void MainFuncExit()
 * 函数功能: 控制主函数退出，通过 pidfile 读取主进程的 pid，然后向主进程发送 SIGKILL 信号，终止进程
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-08 15:32 
***********************************************************/ 
void MainFuncExit()
{
	char pidbuf[12] = {0};
	char pidfile[64] = {0};
	int res = 0;

	CConfigManager * conf = new CConfigManager();
	conf->GetValue(DOWNCHECK_CONFIG_INI, "main", "pidfile", pidfile);
	delete conf;

	if (strlen(pidfile) == 0)
	{
		sprintf(pidfile, "%s", "/var/downcheck/pidfile.txt");
	}

	/* 从 pidfile 中读取进程 pid */
	FILE * fp = fopen(pidfile, "r");

    if (NULL == fp) {
        fprintf (stderr, "%s does not exist.\n", pidfile);
        exit (EXIT_SUCCESS);
    }

	fread(pidbuf, sizeof(pidbuf), 1, fp);
	fclose(fp);

    if (strlen (pidbuf) == 0) {
        fprintf (stderr, "pidfile is empty, please check it out\n");
        exit (EXIT_SUCCESS);
    }

	res = kill(atoi(pidbuf), SIGKILL);
	ERRPRINT(0 != res, return, 0, "main#main#MainFuncExit# kill [%s] failed, line %d", pidbuf, __LINE__);
}

void* DecodeFileFuncTest()
{
	DUMPSYSLOG(INFO, "main", "main", "DecodeFileFuncTest", "DecodeFileFuncTest start, line %d", __LINE__);
	PRINTF(1, "DecodeFileFuncTest...\n");

	CFactoryDecode * factoryDecode = new CFactoryDecode(g_pManager);
	factoryDecode->startWork();

	DUMPSYSLOG(INFO, "main", "main", "DecodeFileFuncTest", "DecodeFileFuncTest end, line %d", __LINE__);

    // this delete will cause dead lock, see the destroy function
	/*delete factoryDecode;*/
	return NULL;
}

void * DownCheckFuncTest()
{
	DUMPSYSLOG(INFO, "main", "main", "DownCheckFuncTest", "DownCheckFuncTest start, line %d", __LINE__);

	RefreshRedis();

	PRINTF(1, "DownCheckFuncTest...\n");

	QueueData* Qnode = NULL;
	CDownCheck * downcheck = new CDownCheck();
	while (!g_pManager->IsEmpty())
	{
		Qnode = g_pManager->GetData();

		if (!downcheck->RecordDownCheck(Qnode))		/* 业务处理 */
		{
			g_pManager->FreeQueueData(Qnode);
			Qnode = NULL;
		}
	}

	DUMPSYSLOG(INFO, "main", "main", "DownCheckFuncTest", 
            "DownCheckFuncTest end, line %d", __LINE__);
	delete downcheck;
	return NULL;
}

/************************************************************************* 
 * * FUNCTION NAME: DecodeOnly
 * * DESCRIPTION: testing mode, decode and output all the records without
 * * downcheck
 * * ARGS: 
 * * RETURN VALUE: 
 * * AUTHOR: Jona
 * * CREATE TIME: 2018-03-10 10:19 
*************************************************************************/ 
void* DecodeOnly () 
{
    DUMPSYSLOG (INFO, "main", "main", "DecodeOnly", "DecodeOnly start, line %d",
            __LINE__);

    QueueData *Qnode = NULL;

    /*
     * define redisData of type Data, to fill as a arg when call 
     * g_pOutputManager->AddData
     */
    Data redisData;
    strcpy (redisData.imsi, "46xxxx");
    redisData.osStsDtl = -1;
    redisData.validDate = 0;
    redisData.expireDate = 0;
    strcpy (redisData.phoneNum, "1705XXXXXXX");

    while (!g_pManager->IsEmpty ()) {
        Qnode = g_pManager->GetData ();
        g_pOutputManager->AddData (Qnode, redisData);
    }
    DUMPSYSLOG (INFO, "main", "main", "DecodeOnly", "DecodeOnly end, line %d",
            __LINE__);

    return NULL;
}

void daemonize ()
{
    /*
     * 1. 创建子进程，父进程退出，子进程称为孤儿进程
     * 2. 设置 setsid(), 创建新的 session, 摆脱父进程的影响
     * 3. 设置掩码, umask(0), 参数 0 表示清空原属性
     * 4. 再次 fork，退出父进程，能够保证子进程不是新 session 的首进程
     * 5. 设置信号处理，忽略信号 SIGHLD
     * 6. 设置工作路径 /tmp 或者其他目录, 这里目录设置为 bin 目录
     * 7. 关闭所有打开的文件
     */
    int daemonize = 0;
    pid_t pid;
    int fd;
    int i;
    struct sigaction act;
    CConfigManager * config = NULL;
    char path[256] = {0};

    CConfigManager *conf = new CConfigManager();
    conf->GetValue (DOWNCHECK_CONFIG_INI, "main", "daemonize", daemonize);
    delete conf;

    if (!daemonize)  {   /* 0:非守护进程模式 1:守护进程模式 */
        /* 此处不能使用 DUMPSYSLOG，因为 g_Log 还没初始化 */
        return;
    }

    if ((pid = fork()) > 0) {
        /* parent process exit */
        exit (EXIT_SUCCESS);
    } else if (pid < 0) {
        /* error occured */
        ERRPRINT (1, exit (EXIT_FAILURE), 0, "main#daemonize#fork error, %d", __LINE__);
    } 

    /* child process */
    setsid ();  /* create a new session, and now the process is session leader */

    /* SIGCHLD 并不是必须处理的，但是对于服务器程序来说，当生成子进程处理
     * 请求时，如果父进程不等待子进程结束，子进程将成为僵尸进程从而占用系
     * 统资源。如果父进程等待子进程退出将增加父进程的负担，影响服务器系统
     * 的并发性，在 Linux 下了简单的将信号设置为 SIG_IGN
     * 1. signal (SIGCHLD, SIG_IGN) // SIG_DEF is default
     * 2. sigaction (), 注意，struct sigaction act结构中，
     * act.sa_flags = SA_NOCLDWAIT, 这个选项，当信号是 SIGCHLD 时，子进程 
     * 退出，不会创建僵尸进程 (zombie)*/
    act.sa_handler = SIG_IGN;
    act.sa_flags = SA_NOCLDWAIT;
    sigemptyset (&act.sa_mask);

    if (sigaction (SIGCHLD, &act, NULL) < 0) {
        ERRPRINT (1, exit(EXIT_FAILURE), 0, "main#daemonize#sigaction error, %d", __LINE__);
    }

    if ((pid = fork()) > 0) {
        /* parent process exit, make sure child process is not leader prog */
        exit (EXIT_SUCCESS);
    } else if (pid < 0) {
        ERRPRINT (1, exit (EXIT_FAILURE), 0, "main#daemonize#fork error, %d", __LINE__);
    }

    /* child process, this is not neccesary.  */
    config = new CConfigManager();
    config->GetValue (DOWNCHECK_CONFIG_INI, "main", "pidfile", path);
    delete config;

    if (strlen (path) == 0) {
        sprintf (path, "/");
    } else {
        char* tmp = strrchr (path, '/');
        *tmp = '\0';
    }

    /* change work directory */
    ERRPRINT (chdir(path)<0, exit (EXIT_FAILURE), 0, "main#daemonize#chdir failed, %d", __LINE__);

    /* close all the open file descriptors */
    fd = open ("/dev/null", O_RDWR);
    ERRPRINT (fd<0, exit(EXIT_FAILURE), 0, "main#daemonize#open file error, %d", __LINE__);

    dup2 (fd, STDIN_FILENO);
    dup2 (fd, STDOUT_FILENO);
    dup2 (fd, STDERR_FILENO);
    close (fd);

    for (i=0; i<getdtablesize(); i++) {
        close (i);
    }
}

int main(int argc, char* argv[])
{
#ifdef DEBUG_TEST
	PRINTF(1, "main func start...\n");
#endif

	/*
	g_Log.Open();
	g_Output.Open();
	g_pManager = new CDataManager();
	g_pManager->InitDataManager();
	*/

	/* 申明变量 */
	pthread_t thread1 = 0, thread2 = 0, thread3 = 0;
	int res = 0;
	int nflag = 1;	/* 判断是否有线程退出 */
	sigset_t sigmask;

	sigemptyset(&sigmask);
	sigaddset(&sigmask, SIGALRM);
	pthread_sigmask(SIG_SETMASK, &sigmask, NULL);

	/* 初始化 */
	int i = 0;
	for(; i<THREADNUM; i++)
	{
		threadHandle[i].thread_id = 0;
		threadHandle[i].thread_idx = i;
		threadHandle[i].status = CMDNORMAL;
	}

	char ch = 0;
	if (1 == argc)
	{
        daemonize ();   // 后台进程
		g_Log.Open();
		g_Output.Open();
		g_pManager = new CDataManager();
		g_pManager->InitDataManager();

		g_pOutputManager = new COutputManager();
		g_pOutputManager->InitOutputManager();

		/* 注册kill信号，使程序安全退出 */
		/* 初始化，刷新redis， 同时获取当前系统时间，定时更新redis */
		/* 写一个定时器，定时读取指定目录中的话单文件 */

		char* curtime=getCurTime2();
		int oldtime = getUnixTime(curtime);
		free(curtime);

		g_nRedisRefreshTime = oldtime;	// 初始化，如果当前时间大于 g_nRedisRefreshTime，需要刷新 redis */
		DUMPSYSLOG(DEBUG, "main", "main", "main()", "line :[%d], oldtime :[%d],  g_nRedisRefreshTime :[%d]", __LINE__, oldtime, g_nRedisRefreshTime);

		/* 将主进程的 pid 写入到文件中, 使用 -s 命令时通过向进程发送 SIGKILL 信号停止进程 */
		pid_t pid = getpid();
		WritePid(pid);

		/*RefreshRedis();*/
		res = pthread_create(&thread1, NULL, DecodeFileFunc, (void*)&threadHandle[0]); /* 读取话单目录 */
		ERRPRINT(res != 0, goto sys_exit1, 0, "main#thread_create failed, line %d", __LINE__);

		res = pthread_create(&thread2, NULL, DownCheckFunc, (void*)&threadHandle[1]); /* 业务处理 */
		ERRPRINT(res != 0, goto sys_exit2, 0, "main#thread_create failed, line %d", __LINE__);

		res = pthread_create(&thread3, NULL, OutputFunc, (void*)&threadHandle[2]);	/* 写线程 */
		ERRPRINT(res != 0, goto sys_exit3, 0, "main#thread_create failed, line %d", __LINE__);
	}
	else
	{
		/* 解析控制台参数 */
		while ((ch = getopt(argc, argv, "thvsd")) != -1)
		{
			switch(ch)
			{
				case 'h':
					HelpInfo();
					goto sys_exit;
					break;
				case 'v':
					Version();
					goto sys_exit;
					break;
				case 's':
					/* stop and exit */
					MainFuncExit();
					goto sys_exit;
					break;
				case 't':
					g_Log.Open();
					g_Output.Open();
					g_pManager = new CDataManager();
					g_pManager->InitDataManager();
					g_pOutputManager = new COutputManager();
					g_pOutputManager->InitOutputManager();

					DecodeFileFuncTest();
					DownCheckFuncTest();
					OutputFuncTest();
					goto sys_exit;
					break;
                case 'd':	/* decode only, and output */
                    g_Log.Open ();
                    g_Output.Open ();
                    g_pManager = new CDataManager ();
                    g_pManager->InitDataManager ();
                    g_pOutputManager = new COutputManager ();
                    g_pOutputManager->InitOutputManager ();

                    DecodeFileFuncTest ();
                    DecodeOnly ();
                    OutputFuncTest ();
                    goto sys_exit;
                    break;
                default:
					FPRINTF(2, "Try '%s -h' for more information\n", argv[0]);

					goto sys_exit;
					break;
			}
		}
	}

	while (nflag)
	{
		i = 0;
		for (; i<THREADNUM; i++)
		{
			if (threadHandle[i].status == CMDSTOP)
			{
				nflag = 0;
			}
		}
        sleep (5);
	}

sys_exit:
	for (i=0; i<THREADNUM; i++)
	{
		if (threadHandle[i].thread_id != 0)
		{
			pthread_join(threadHandle[i].thread_id, NULL);
			threadHandle[i].thread_id = 0;
		}
	}

	/* 此处如果执行 -s, 没有初始化g_Log对象，会产生段错误 */
	/*DUMPSYSLOG(INFO, "main", "main", "main", "program exit, line %d", __LINE__);*/

#ifdef DEBUG_TEST
	PRINTF(1, "main func exit...\n");
#endif

#ifdef DEBUG_TEST
	for (i=0; i<THREADNUM; i++)
	{
		if (threadHandle[i].thread_id != 0)
		{
			FPRINTF(2, "thread_idx = %d, thread_id = %lu, thread_status = %s\n", threadHandle[i].thread_idx, threadHandle[i].thread_id, CMDSTATUS[threadHandle[i].status]);
		}
	}
#endif
	delete g_pManager;
	delete g_pOutputManager;
	return 0;

sys_exit3:
	if (thread3)
	{
		pthread_join(thread3, NULL);
	}

sys_exit2:
	if (thread2)
	{
		pthread_join(thread2, NULL);
	}

sys_exit1:
	if (thread1)
	{
		pthread_join(thread1, NULL);
	}

#ifdef DEBUG_TEST
	PRINTF(1, "main func exit...\n");
#endif
	DUMPSYSLOG(INFO, "main", "main", "main", "program exit, line %d", __LINE__);
	delete g_pManager;
	delete g_pOutputManager;
    return 0;
}

