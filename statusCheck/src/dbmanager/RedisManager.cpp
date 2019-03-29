/**************************************************
    > File name: RedisManager.cpp
    > Author: wzhenyu
    > mail:
    > Create Time: 2016-03-29 19:13
****************************************************/
#include "dbmanager/RedisManager.h"

#include <malloc.h>
#include <stdlib.h>

/***********************************************************
 * 函数名: CRedisManager::CRedisManager()
 * 函数功能: 构造函数, 创建 CRedisManager 对象 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-29 19:15 
***********************************************************/ 
CRedisManager::CRedisManager()
{
	m_pRedisIP = NULL;
	m_nRedisPort = 0;
    m_nAuth = 0;
	m_pRedisReply = NULL;
	m_pRedisContext = NULL;

	InitRedis();
}

/***********************************************************
 * 函数名: CRedisManager::~CRedisManager()
 * 函数功能: 析构函数 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-29 19:16 
***********************************************************/ 
CRedisManager::~CRedisManager()
{
	if (NULL != m_pRedisReply)
	{
		freeReplyObject(m_pRedisReply);
		m_pRedisReply = NULL;
	}
	
	if (NULL != m_pRedisContext)
	{
		redisFree(m_pRedisContext);
		m_pRedisContext = NULL;
	}

	if (NULL != m_pRedisIP)
	{
		free(m_pRedisIP);
		m_pRedisIP = NULL;
	}
}

/***********************************************************
 * 函数名: void CRedisManager::InitRedis()
 * 函数功能: 初始化 CRedisManager 对象，读取配置 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-29 19:22 
***********************************************************/ 
void CRedisManager::InitRedis()
{
	char IP[16] = {0};
    char pass[64] = {0};
	int port = 0;
	int i_length = 0;

	DUMPSYSLOG(INFO, "DBManager", "CRedisManager", "InitRedis", "Redis Manager start, line %d", __LINE__);
	DUMPSYSLOG(INFO, "DBManager", "CRedisManager", "InitRedis", "Get config start, line %d", __LINE__);
	CConfigManager* conf = new CConfigManager();
	conf->GetValue(DOWNCHECK_CONFIG_INI, "DBManager", "redisIp", IP);
	conf->GetValue(DOWNCHECK_CONFIG_INI, "DBManager", "redisPort", port);
    conf->GetValue(DOWNCHECK_CONFIG_INI, "DBManager", "redisPass", pass);

	if (strlen(IP) == 0) /*IP is not NULL, '\0'*/
	{
		strcpy(IP, "localhost");
	}
	i_length = strlen(IP);
	m_pRedisIP = (char*)malloc(sizeof(char)*(i_length + 1));

	if (NULL == m_pRedisIP)
	{
		DUMPSYSLOG(ERROR, "DBManager", "CRedisManager", "InitRedis", "malloc failed, line %d", __LINE__);
		ERRPRINT(1, exit(EXIT_FAILURE), 0, "DBManager#CRedisManager#InitRedis#line %d", __LINE__);
	}

	strncpy(m_pRedisIP, IP, i_length);
	m_pRedisIP[i_length] = '\0';

	DUMPSYSLOG(TRACE, "DBManager", "CRedisManager", "InitRedis", "Redis Ip is [%s]", IP);

	if (0 == port) port = 6379;
	m_nRedisPort = (UINT)port;

    if (strlen (pass) > 0) {
        m_nAuth = 1;
    } else {
        m_nAuth = 0;
    }

	DUMPSYSLOG(TRACE, "DBManager", "CRedisManager", "InitRedis", "Redis port is [%d]", port);
	DUMPSYSLOG(INFO, "DBManager", "CRedisManager", "InitRedis", "Get config end, line %d", __LINE__);
	delete conf;
}

/***********************************************************
 * 函数名: bool CRedisManager::ConnectRedis()
 * 函数功能: 连接 Redis  
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-29 19:58 
***********************************************************/ 
bool CRedisManager::ConnectRedis()
{
	DUMPSYSLOG(INFO, "DBManager", "CRedisManager", "ConnectRedis", "Connect to redis, line %d", __LINE__);
	
	m_pRedisContext = redisConnect(m_pRedisIP, m_nRedisPort);
	if (NULL == m_pRedisContext || m_pRedisContext->err)
	{
		DUMPSYSLOG(ERROR, "DBManager", "CRedisManager", "ConnectRedis", "connect redis failed, error: %s", m_pRedisContext->errstr);

		FreeRedis();
		return false;
	}
	else
		DUMPSYSLOG(INFO, "DBManager", "CRedisManager", "ConnectRedis", "Connect to redis success, line %d", __LINE__);

    /* 是否需要密码授权 */
    if (m_nAuth) {
        char pass[64] = {0};
        CConfigManager * conf = new CConfigManager ();
        conf->GetValue (DOWNCHECK_CONFIG_INI, "DBManager", "redisPass", pass);
        delete conf;

        if (!Auth (pass)) {
            /* 授权未通过 */
            exit (EXIT_FAILURE);
        }
    }
	return true;
}

/***********************************************************
 * 函数名: void CRedisManager::FreeRedis()
 * 函数功能: 释放 redis 连接 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-07 15:51 
***********************************************************/ 
void CRedisManager::FreeRedis()
{
	DUMPSYSLOG(INFO, "dbmanager", "CRedisManager", "FreeRedis", "free redis start, line %d", __LINE__);
	if (NULL != m_pRedisReply)
	{
		freeReplyObject(m_pRedisReply);
		m_pRedisReply = NULL;
	}
	
	if (NULL != m_pRedisContext)
	{
		redisFree(m_pRedisContext);
		m_pRedisContext = NULL;
	}

	DUMPSYSLOG(INFO, "dbmanager", "CRedisManager", "FreeRedis", "free redis end, line %d", __LINE__);
}

/***********************************************************
 * 函数名: redisReply* GetRedisResult()
 * 函数功能: 获取查询 redis 的结果集 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-29 20:23 
***********************************************************/ 
redisReply* CRedisManager::GetRedisResult()
{
	return m_pRedisReply;
}

/***********************************************************
 * 函数名: bool CRedisManager::QueryRedis(const char* statement)
 * 函数功能: 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-29 20:24 
***********************************************************/ 
bool CRedisManager::QueryRedis(const char* statement)
{
	/* memory leak */
	if (m_pRedisReply != NULL)
	{
		freeReplyObject(m_pRedisReply);
		m_pRedisReply = NULL;
	}
	m_pRedisReply = (redisReply*)redisCommand(m_pRedisContext, statement);

	if (m_pRedisReply->type == REDIS_REPLY_NIL
			|| m_pRedisReply->type == REDIS_REPLY_ERROR
			|| ((NULL == m_pRedisReply->str) && (m_pRedisReply->elements == 0)))
	{
		DUMPSYSLOG(DEBUG, "DBManager", "CRedisManager", "QueryRedis", "Query [%s] failed", statement);
		/*ERRPRINT(1, return false, 0, "Query [%s] failed", statement);*/
        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
		return false;
	}

	DUMPSYSLOG(DEBUG, "DBManager", "CRedisManager", "QueryRedis", "Query [%s] success", statement);
	return true;
}

/***********************************************************
 * 函数名: bool CRedisManager::InsertIntoRedis(const char* statement)
 * 函数功能: 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-30 17:44 
***********************************************************/ 
bool CRedisManager::InsertIntoRedis(const char* statement)
{
	if (NULL != m_pRedisReply)
	{
		freeReplyObject(m_pRedisReply);
		m_pRedisReply = NULL;
	}

	m_pRedisReply = (redisReply*)redisCommand(m_pRedisContext, statement);

	if (strcmp(m_pRedisReply->str, "OK") == 0)
	{
		DUMPSYSLOG(DEBUG, "DBManager", "CRedisManager", "InsertIntoRedis", "Insert redis [%s] success", statement);
        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
		return true;
	}
	else
	{
		DUMPSYSLOG(ERROR, "DBManager", "CRedisManager", "InsertIntoRedis", "Insert into redis [%s] failed", statement);
		/*ERRPRINT(1, return false, 0, "Insert into redis [%s] failed", statement);*/
        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
		return false;
	}
}

/***********************************************************
 * 函数名: bool Zadd (const char* zsetname, const char* key, int scores)
 * 函数功能: 在 zset 中插入数据 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2017-02-09 17:02 
***********************************************************/ 
bool CRedisManager::Zadd (const char* zsetname, const char* key, int scores)
{
    if (NULL == m_pRedisContext) {
        return false;
    }

    if (NULL != m_pRedisReply) {
        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
    }

    m_pRedisReply = (redisReply*)redisCommand (m_pRedisContext, 
            "zadd %s %d %s", zsetname, scores, key);

    /* if zadd success, redis return "integer 1" */
    if (m_pRedisReply->integer != 1) {
        DUMPSYSLOG (ERROR, "DBManager", "CRedisManager", "Zadd", 
                "Zadd failed: [Zadd %s %d %s]", zsetname, scores, key);

        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;

        return false;
    } else {
        DUMPSYSLOG (DEBUG, "DBManager", "CRedisManager", "Zadd", 
                "Zadd success: [Zadd %s %d %s]", zsetname, scores, key);
    }
    freeReplyObject (m_pRedisReply);
    m_pRedisReply = NULL;

    return true;
}

/***********************************************************
 * 函数名: bool Zincrby (const char* zsetname, const char* key, int increment)
 * 函数功能: 增加 zset 中某个元素的值，用于计数器使用 
 *     注意：如果 zset 中存在元素 key，该操作增加的是该元素的 scores
 *           否则，将会在 zset 中添加一个新的 key, 并将其 scores 设置为 increment
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2017-02-09 17:22 
***********************************************************/ 
bool CRedisManager::Zincrby (const char* zsetname, const char* key, int increment)
{
    if (NULL == m_pRedisContext) {
        return false;
    }
    char inc_res[8] = {0};
    sprintf (inc_res, "%d", increment);

    if (NULL != m_pRedisReply) {
        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
    }

    m_pRedisReply = (redisReply*) redisCommand (m_pRedisContext, 
            "zincrby %s %d %s", zsetname, increment, key);

    /* Zincrby 返回的是增加后元素的 scores */
    if (m_pRedisReply->type == REDIS_REPLY_ERROR) {
        DUMPSYSLOG (ERROR, "DBManager", "CRedisManager", "Zincrby", 
                "Zincrby failed: [zincrby %s %d %s]", zsetname, increment, key);
        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
        return false;
    } else if (m_pRedisReply->type == REDIS_REPLY_STRING &&
            (strcmp (m_pRedisReply->str, inc_res) > 0)) {
        DUMPSYSLOG (DEBUG, "DBManager", "CRedisManager", "Zincrby", 
                "Zincrby success: [zincrby %s %d %s]", zsetname, increment, key);
    }

    freeReplyObject (m_pRedisReply);
    m_pRedisReply = NULL;
    return true;
}

/***********************************************************
 * 函数名: long long Zcard (const char* zsetname)
 * 函数功能: 统计 zset 元素个数
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2017-02-10 10:53 
***********************************************************/ 
long long CRedisManager::Zcard (const char* zsetname)
{
    long long count = -1;
    if (NULL == m_pRedisContext) {
        return -1;
    }

    if (NULL != m_pRedisReply) {
        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
    }

    m_pRedisReply = (redisReply *)redisCommand (m_pRedisContext, 
            "zcard %s", zsetname);

    /* zcard 返回的是 (interger) num */
    if (m_pRedisReply->type != REDIS_REPLY_INTEGER) {
        DUMPSYSLOG (ERROR, "DBManager", "CRedisManager", "Zcard", 
                "zcard failed: [zcard %s]", zsetname);

        count = -1;
    } else {
        DUMPSYSLOG (DEBUG, "DBManager", "CRedisManager", "Zcard", 
                "zcard success: [zcard %s] is %lld", 
                zsetname, m_pRedisReply->integer);
        count = m_pRedisReply->integer;
    }

    freeReplyObject (m_pRedisReply);
    m_pRedisReply = NULL;
    return count;
}

/***********************************************************
 * 函数名: bool Zrem (const char* zsetname, const char* key)
 * 函数功能: 删除 zset 中的某个元素
 * eg: zset myzset key1
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2017-02-10 11:12 
***********************************************************/ 
bool CRedisManager::Zrem (const char* zsetname, const char* key)
{
    if (NULL == m_pRedisContext) {
        return false;
    }

    if (NULL != m_pRedisReply) {
        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
    }

    m_pRedisReply = (redisReply*) redisCommand (m_pRedisContext, 
            "zrem %s %s", zsetname, key);

    if (m_pRedisReply->type != REDIS_REPLY_INTEGER) {
        DUMPSYSLOG (ERROR, "DBManager", "CRedisManager", "Zrem", 
                "zrem failed: [zrem %s %s]", zsetname, key);

        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
        return false;
    } else if ((m_pRedisReply->type = REDIS_REPLY_INTEGER) &&
            ((int)m_pRedisReply->integer == 1)) {
        DUMPSYSLOG (DEBUG, "DBManager", "CRedisManager", "Zrem", 
                "zrem success: [zrem %s %s]", zsetname, key);
    }

    freeReplyObject (m_pRedisReply);
    m_pRedisReply = NULL;
    return true;
}

/***********************************************************
 * 函数名: bool SelectDb (int dbnum)
 * 函数功能: 选择 redis 数据库 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2017-02-10 11:35 
***********************************************************/ 
bool CRedisManager::SelectDb (int dbnum)
{
    if (NULL == m_pRedisContext) {
    return false;
    }

    if (NULL != m_pRedisReply) {
        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
    }

    m_pRedisReply = (redisReply*)redisCommand (m_pRedisContext, 
            "select %d", dbnum);

    if (m_pRedisReply->type != REDIS_REPLY_STATUS) {
        DUMPSYSLOG (ERROR, "DBManager", "CRedisManager", "SelectDb", 
                "select db failed: [select %d]", dbnum);
        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
        return false;
    } else if ((m_pRedisReply->type == REDIS_REPLY_STATUS) &&
            (strcmp (m_pRedisReply->str, "OK") == 0)) {
        DUMPSYSLOG (DEBUG, "DBManager", "CRedisManager", "SelectDb", 
                "select db success: [select %d]", dbnum);
    }

    freeReplyObject (m_pRedisReply);
    m_pRedisReply = NULL;
    return true;
}

/***********************************************************
 * 函数名: bool Set (char* key, char* value)
 * 函数功能: 创建 redis 字符串对象 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2017-02-10 14:33 
***********************************************************/ 
bool CRedisManager::Set (char* key, char* value)
{
    if (NULL == m_pRedisContext) {
        return false;
    }

    if (NULL != m_pRedisReply) {
        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
    }

    m_pRedisReply = (redisReply *)redisCommand (m_pRedisContext, 
            "set %s %s", key, value);

    if ((m_pRedisReply->type == REDIS_REPLY_STATUS) &&
            (strcmp (m_pRedisReply->str, "OK") == 0)) {
        DUMPSYSLOG (DEBUG, "DBManager", "CRedisManager", "Set", 
                "set success: [set %s %s]", key, value);
    } else {
        DUMPSYSLOG (ERROR, "DBManager", "CRedisManager", "Set", 
                "set failed: [set %s %s]", key, value);

        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
        return false;
    }
    freeReplyObject (m_pRedisReply);
    m_pRedisReply = NULL;

    return true;
}

/***********************************************************
 * 函数名: char* Get (char* key)
 * 函数功能: 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2017-02-10 14:39 
***********************************************************/ 
char* CRedisManager::Get (char* key)
{
    if (NULL == m_pRedisContext) {
        return NULL;
    }

    if (NULL != m_pRedisReply) {
        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
    }

    m_pRedisReply = (redisReply*) redisCommand (m_pRedisContext, 
            "get %s", key);

    if ((m_pRedisReply->type != REDIS_REPLY_STRING) ||
            (m_pRedisReply->type == REDIS_REPLY_NIL)) {
        DUMPSYSLOG (ERROR, "DBManager", "CRedisManager", "Get", 
                "get failed: [get %s]", key);
        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
        return NULL;
    } else if ((m_pRedisReply->type == REDIS_REPLY_STRING) &&
            (m_pRedisReply->str != NULL)) {
        DUMPSYSLOG (DEBUG, "DBManager", "CRedisManager", "Get", 
                "get success: [get %s]", key);
    }

    return m_pRedisReply->str;
}

/***********************************************************
 * 函数名: bool Del (const char* key)
 * 函数功能: 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2017-02-10 16:22 
***********************************************************/ 
bool CRedisManager::Del (const char* key)
{
    if (NULL == m_pRedisContext) {
        return false;
    }

    if (NULL != m_pRedisReply) {
        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
    }

    m_pRedisReply = (redisReply*) redisCommand (m_pRedisContext, 
            "del %s", key);

    /* del 返回 integer 1*/
    if ((m_pRedisReply->type != REDIS_REPLY_INTEGER) &&
            (m_pRedisReply->type != REDIS_REPLY_STATUS &&
             strcmp(m_pRedisReply->str ,"QUEUED") != 0)) {
        DUMPSYSLOG (ERROR, "DBManager", "CRedisManager", "Del", 
                "del failed: [del %s]", key);
        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
        return false;
    } else if ((m_pRedisReply->type == REDIS_REPLY_INTEGER) &&
            (m_pRedisReply->integer == 1)) {
        DUMPSYSLOG (DEBUG, "DBManager", "CRedisManager", "Del", 
                "del success: [del %s]", key);
    }

    freeReplyObject (m_pRedisReply);
    m_pRedisReply = NULL;
    return true;
}

/***********************************************************
 * 函数名: bool Sadd (char* setname, char* value)
 * 函数功能: 插入集合数据 
 * 参数说明: 
 * 返回值说明: type 为 REDIS_REPLY_INTEGER
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2017-02-14 16:52 
***********************************************************/ 
bool CRedisManager::Sadd (char* setname, char* value)
{
    if (NULL == m_pRedisContext) {
        return false;
    }

    if (NULL != m_pRedisReply) {
        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
    }

    m_pRedisReply = (redisReply*) redisCommand (m_pRedisContext, 
            "sadd %s %s", setname, value);

    if (m_pRedisReply->type == REDIS_REPLY_INTEGER) {
        DUMPSYSLOG (DEBUG, "DBManager", "CRedisManager", "Sadd", 
                "sadd success: [sadd %s \"%s\"]", setname, value);
    } else {
        DUMPSYSLOG (ERROR, "DBManager", "CRedisManager", "Sadd", 
                "sadd failed: [sadd %s \"%s\"]", setname, value);
        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
        return false;
    }

    freeReplyObject (m_pRedisReply);
    m_pRedisReply = NULL;
    return true;
}

/***********************************************************
 * 函数名: bool Smembers (char *setname)
 * 函数功能: 查找集合中的所有元素 
 * 参数说明: 
 * 返回值说明: type 为 REDIS_REPLY_ARRAY，即使集合不存在，也返回，但是
 * elements 为 0
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2017-02-14 17:08 
***********************************************************/ 
bool CRedisManager::Smembers (char *setname)
{
    if (NULL == m_pRedisContext) {
        return false;
    }

    if (NULL != m_pRedisReply) {
        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
    }

    m_pRedisReply = (redisReply*) redisCommand (m_pRedisContext, 
            "smembers %s", setname);

    if (m_pRedisReply->type != REDIS_REPLY_ARRAY) {
        DUMPSYSLOG (ERROR, "DBManager", "CRedisManager", "Smembers", 
                "smembers failed: [smembers %s]", setname);

        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
        return false;
    } else if ((m_pRedisReply->type == REDIS_REPLY_ARRAY) &&
            (m_pRedisReply->elements > 0)) {
        DUMPSYSLOG (DEBUG, "DBManager", "CRedisManager", "Smembers", 
                "Smembers success: [smembers %s]", setname);
    }

    return true;
}

/***********************************************************
 * 函数名: 
 * 函数功能: flush db
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2017-03-06 15:49 
***********************************************************/ 
bool CRedisManager::FlushDB (int dbnum)
{
    if (NULL == m_pRedisContext) {
        return false;
    }

    if (NULL != m_pRedisReply) {
        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
    }

    /* 这里使用 redis 提供的事务功能 MULTI EXEC */
    m_pRedisReply = (redisReply*) redisCommand (m_pRedisContext, 
            "MULTI");
    if (m_pRedisReply->type != REDIS_REPLY_STATUS) {
        goto redis_err;
    }
    freeReplyObject (m_pRedisReply);

    /* 在同一个事务中的命令操作，都会加入到操作队列中，返回"QUEUED" */
    m_pRedisReply = (redisReply*) redisCommand (m_pRedisContext, 
            "select %d", dbnum);
    if (m_pRedisReply->type != REDIS_REPLY_STATUS) {
        goto redis_err;
    }
    freeReplyObject (m_pRedisReply);

    m_pRedisReply = (redisReply*) redisCommand (m_pRedisContext, 
            "flushdb");
    if (m_pRedisReply->type != REDIS_REPLY_STATUS) {
        goto redis_err;
    }
    freeReplyObject (m_pRedisReply);

    /* 事务结束，开始处理队列中的所有操作 */
    /* 语法错误，比如命令不存在或者参数不正确，事务执行不成功
     * 运行错误，比如使用集合命令操作哈希，这种错误事务检查不出来，该条命令不能执行成功，但是
     * 其他的能执行成功，事务能够正常结束 */
    m_pRedisReply = (redisReply*) redisCommand (m_pRedisContext, 
            "EXEC");
    if (m_pRedisReply->type == REDIS_REPLY_ERROR) {
        goto redis_err;
    }
    DUMPSYSLOG (DEBUG, "DBManager", "CRedisManager", "FlushDB", 
            "flushdb %d success", dbnum);
    freeReplyObject (m_pRedisReply);
    m_pRedisReply = NULL;
    return true;

redis_err:
    DUMPSYSLOG (DEBUG, "DBManager", "CRedisManager", "FlushDB", 
            "flushdb %d failed", dbnum);
    freeReplyObject (m_pRedisReply);
    m_pRedisReply = NULL;
    return false;
}

/* ****************************设置 redis 简易锁*************************** */

/***********************************************************
 * 函数名: bool RequireRedisLock (const char* lockname, int timeout)
 * 函数功能: 设置 redis 锁，使用setnx(not exist)
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2017-03-07 15:05 
***********************************************************/ 
bool CRedisManager::RequireRedisLock (const char* lockname, int timeout)
{
    int end = (int)time(NULL) + timeout;        /* 截止超时时间 */

    srand ((unsigned int)time(NULL));   /* seed */

    if (NULL == m_pRedisContext) {
        return false;
    }

    if (NULL != m_pRedisReply) {
        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
    }

    while (((int)time(NULL)) < end) {
        m_pRedisReply = (redisReply*) redisCommand (m_pRedisContext, 
                "setnx %s %d", lockname, rand());

        if (m_pRedisReply->type == REDIS_REPLY_ERROR) {
            sleep (1);
            freeReplyObject (m_pRedisReply);
            m_pRedisReply = NULL;
            continue;
        } else if (m_pRedisReply->type == REDIS_REPLY_INTEGER &&
                m_pRedisReply->integer == 0) {
            freeReplyObject (m_pRedisReply);
            m_pRedisReply = NULL;

            DUMPSYSLOG (INFO, "DBManager", "CRedisManager", "RequireRedisLock", 
                    "redis lock existed");
            return false;
        } else if (m_pRedisReply->type == REDIS_REPLY_INTEGER &&
                m_pRedisReply->integer == 1){
            freeReplyObject (m_pRedisReply);
            m_pRedisReply = NULL;
            DUMPSYSLOG (INFO, "DBManager", "CRedisManager", "RequireRedisLock", 
                    "set redis lock success");
            return true;
        }
    }

    DUMPSYSLOG (ERROR, "DBManager", "CRedisManager", "RequireRedisLock", 
            "set redis lock failed, line %d", __LINE__);
    return false;
}

/***********************************************************
 * 函数名: bool ReleaseRedisLock (const char* lockname, char* identifier)
 * 函数功能: release redis lock
 * 参数说明: identifier is lock value 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2017-03-07 15:55 
***********************************************************/ 
bool CRedisManager::ReleaseRedisLock (const char* lockname, char* identifier)
{
    if (NULL == m_pRedisContext) {
        return false;
    }

    if (NULL != m_pRedisReply) {
        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
    }

    /* 使用 watch 监视lock, 一旦lock被修改，在后续的事务中将不会执行 */
    m_pRedisReply = (redisReply*) redisCommand (m_pRedisContext, 
            "watch %s", lockname);
    if (m_pRedisReply->type != REDIS_REPLY_STATUS) {
        DUMPSYSLOG (ERROR, "DBManager", "CRedisManager", "ReleaseRedisLock", 
                "redis watch %s failed", lockname);
        goto lock_err;
    }
    freeReplyObject (m_pRedisReply);
    m_pRedisReply = NULL;

    if (strcmp (identifier, Get ((char*)lockname)) != 0) {
        DUMPSYSLOG (FATAL, "DBManager", "CRedisManager", "ReleaseRedisLock", 
                "redis lock had been modified");
        goto lock_err;
    }

    /* 获取lock 就是 identifier */
    /* 使用事务释放锁 */
    freeReplyObject (m_pRedisReply);    /* 上面 Get 需要释放 */

    /* 开始事务 */
    m_pRedisReply = (redisReply*) redisCommand (m_pRedisContext, 
            "MULTI");
    if (m_pRedisReply->type != REDIS_REPLY_STATUS) {
        goto lock_err;
    }
    freeReplyObject (m_pRedisReply);
    m_pRedisReply = NULL;

    /* delete lock */
    Del (lockname);

    /* 事务开始执行 */
    m_pRedisReply = (redisReply*) redisCommand (m_pRedisContext, 
            "EXEC");
    if (m_pRedisReply->type != REDIS_REPLY_STATUS) {
        goto lock_err;
    }
    freeReplyObject (m_pRedisReply);

    /* 释放所有 WATCH 变量 */
    m_pRedisReply = (redisReply*) redisCommand (m_pRedisContext, 
            "UNWATCH");
    freeReplyObject (m_pRedisReply);
    m_pRedisReply = NULL;

    return true;

lock_err:
    freeReplyObject (m_pRedisReply);
    m_pRedisReply = NULL;
    return false;
}

/***********************************************************
 * 函数名: bool Watch (char* key)
 * 函数功能: 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2017-03-08 14:26 
***********************************************************/ 
bool CRedisManager::Watch (char* key)
{
    if (NULL == m_pRedisContext) {
        return false;
    }

    if (NULL != m_pRedisReply) {
        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
    }

    m_pRedisReply = (redisReply*) redisCommand (m_pRedisContext, 
            "WATCH %s", key);
    if (m_pRedisReply->type != REDIS_REPLY_STATUS || 
            m_pRedisReply->type == REDIS_REPLY_ERROR) {
        DUMPSYSLOG (ERROR, "DBManager", "CRedisManager", "Watch", 
                "watch %s failed", key);
        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
        return false;
    }

    DUMPSYSLOG (DEBUG, "DBManager", "CRedisManager", "Watch", 
            "watch %s success", key);
    freeReplyObject (m_pRedisReply);
    m_pRedisReply = NULL;

    return true;
}

/***********************************************************
 * 函数名: bool UnWatch ()
 * 函数功能: 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2017-03-08 14:32 
***********************************************************/ 
bool CRedisManager::UnWatch ()
{
    if (NULL == m_pRedisContext) {
        return false;
    }

    if (NULL != m_pRedisReply) {
        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
    }

    m_pRedisReply = (redisReply*) redisCommand (m_pRedisContext, 
            "UNWATCH");

    if (m_pRedisReply->type != REDIS_REPLY_STATUS ||
            m_pRedisReply->type == REDIS_REPLY_ERROR) {
        DUMPSYSLOG (ERROR, "DBManager", "CRedisManager", "UnWatch", 
                "unwatch failed");
        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
        return false;
    }

    DUMPSYSLOG (DEBUG, "DBManager", "CRedisManager", "UnWatch", 
            "unwatch success");
    freeReplyObject (m_pRedisReply);
    m_pRedisReply = NULL;
    return true;
}

/***********************************************************
 * 函数名: bool Zrange (const char* zsetname, int start, int end, int flag)
 * 函数功能: zrange zsetname start end [withscores]
 * 参数说明: flag 为 0, 只取元素值，不需要分数
 * flag 为 1，需要打印分数
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2017-03-08 17:39 
***********************************************************/ 
bool CRedisManager::Zrange (const char* zsetname, int start, int end, int flag)
{
    if (NULL == m_pRedisContext) {
        return false;
    }

    if (NULL != m_pRedisReply) {
        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
    }

    if (flag) {
        m_pRedisReply = (redisReply*) redisCommand (m_pRedisContext, 
                "ZRANGE %s %d %d withscores", zsetname, start, end);
    } else {
        m_pRedisReply = (redisReply*) redisCommand (m_pRedisContext, 
                "ZRANGE %s %d %d", zsetname, start, end); 
    }

    if (m_pRedisReply->type != REDIS_REPLY_ARRAY ||
            m_pRedisReply->type == REDIS_REPLY_ERROR) {
        DUMPSYSLOG (ERROR, "DBManager", "CRedisManager", "Zrange", 
                "zrange failed, line %d", __LINE__);

        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
        return false;
    }

    DUMPSYSLOG (INFO, "DBManager", "CRedisManager", "Zrange", 
            "Zrange success");
    return true;
}

bool CRedisManager::Auth (char* password)
{
    if (NULL == m_pRedisContext) {
        return false;
    }

    if (NULL != m_pRedisReply) {
        freeReplyObject (m_pRedisReply);
        m_pRedisReply = NULL;
    }

    m_pRedisReply = (redisReply *) redisCommand (m_pRedisContext, 
            "AUTH %s", password);

    if (m_pRedisReply->type == REDIS_REPLY_ERROR) {
        DUMPSYSLOG (INFO, "DBManager", "CRedisManager", "Auth", 
                "Redis Authentication Failed.");

        return false;
    }

    DUMPSYSLOG (INFO, "DBManager", "CRedisManager", "Auth", 
            "AUTH %s success", password);
    freeReplyObject (m_pRedisReply);
    m_pRedisReply = NULL;

    return true;
}
