/**************************************************
    > File name: DBManager.cpp
    > Author: wzhenyu
    > mail:
    > Create Time: 2016-03-28 14:44
****************************************************/

#include "dbmanager/DBManager.h"
#include <stdlib.h>

/***********************************************************
 * 函数名: CDBManager::CDBManager()
 * 函数功能: 构造函数
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-28 15:12 
***********************************************************/ 
CDBManager::CDBManager()
{
	m_mysqlRes = NULL;

	m_DBHost = NULL;
	m_DBUserName = NULL;
	m_DBPassWord = NULL;
	m_DBName = NULL;
	m_DBPort = 0;

	InitDB();
}

/***********************************************************
 * 函数名: CDBManager::~CDBManager()
 * 函数功能: 析构函数
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-28 15:15 
***********************************************************/ 
CDBManager::~CDBManager()
{
	if (NULL != m_mysqlRes)
	{
		mysql_free_result(m_mysqlRes);
		m_mysqlRes = NULL;
	}

	mysql_close(&m_mysqlHandle);

	if (NULL != m_DBHost)
	{
		free(m_DBHost);
		m_DBHost = NULL;
	}

	if (NULL != m_DBUserName)
	{
		free(m_DBUserName);
		m_DBUserName = NULL;
	}

	if (NULL != m_DBPassWord)
	{
		free(m_DBPassWord);
		m_DBPassWord = NULL;
	}

	if (NULL != m_DBName)
	{
		free(m_DBName);
		m_DBName = NULL;
	}
}

/***********************************************************
 * 函数名: CDBManager::InitDB()
 * 函数功能: 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-28 15:27 
***********************************************************/ 
void CDBManager::InitDB()
{
	char host[32] = {0};
	char username[32] = {0};
	char password[32] = {0};
	char dbname[32] = {0};
	int port = 0;

	/* 临时变量 */
	int i_length = 0;

	DUMPSYSLOG(INFO, "DBManager", "CDBManager", "InitDB", "DB Manager Start, line %d", __LINE__);
	DUMPSYSLOG(INFO, "DBManager", "CDBManager", "InitDB", "Get Config Start, line %d", __LINE__);

	/* 获取配置参数 */
	CConfigManager* conf = new CConfigManager();
	conf->GetValue(DOWNCHECK_CONFIG_INI, "DBManager", "dbhost", host);
	conf->GetValue(DOWNCHECK_CONFIG_INI, "DBManager", "dbusername", username);
	conf->GetValue(DOWNCHECK_CONFIG_INI, "DBManager", "dbpassword", password);
	conf->GetValue(DOWNCHECK_CONFIG_INI, "DBManager", "dbname", dbname);
	conf->GetValue(DOWNCHECK_CONFIG_INI, "DBManager", "dbport", port);

	/* Get host start */
	if (strlen(host) == 0) /* host的值可能是 '\0' */
	{
		DUMPSYSLOG(DEBUG, "DBManager", "CDBManager", "InitDB", "can not get host value, use default [localhost], line %d", __LINE__);
		int length = strlen("localhost") + 1;
		m_DBHost = (char*)malloc(sizeof(char)*length);
		ERRPRINT(m_DBHost==NULL, goto ERR1, 0, "DBManager#CDBManager#InitDB#malloc failed, line %d", __LINE__);
		DUMPSYSLOG(ERROR, "DBManager", "CDBManager", "InitDB", "malloc failed, line %d", __LINE__);

		strncpy(m_DBHost, "localhost", length-1);
		m_DBHost[length-1] = '\0';
	}
	else
	{	
		int length = strlen(host) + 1;
		m_DBHost = (char*)malloc(sizeof(char)*length);

		if (NULL == m_DBHost) 
		{
			DUMPSYSLOG(ERROR, "DBManager", "CDBManager", "InitDB", "malloc failed. line %d", __LINE__);
			ERRPRINT(m_DBHost==NULL, goto ERR1, 0, "DBManager#CDBManager#InitDB#malloc failed, line %d", __LINE__);
		}

		strncpy(m_DBHost, host, length-1);
		m_DBHost[length-1] = '\0';

		DUMPSYSLOG(DEBUG, "DBManager", "CDBManager", "InitDB", "host is [%s]", host);
	}
	/* Get host end */

	/* Get username start */
	ERRPRINT(strlen(username) == 0, goto ERR2, 0, "DBManager#CDBManager#InitDB#username can not be null, line %d", __LINE__);
	i_length = strlen(username);	
	m_DBUserName = (char*)malloc(sizeof(char)*(i_length + 1));

	if (NULL == m_DBUserName)
	{
		DUMPSYSLOG(ERROR, "DBManager", "CDBManager", "InitDB", "malloc failed. line %d", __LINE__);
		ERRPRINT(NULL==m_DBUserName, goto ERR2, 0, "DBManager#CDBManager#InitDB#malloc failed, line %d", __LINE__);
	}

	strncpy(m_DBUserName, username, i_length);
	m_DBUserName[i_length] = '\0';

	DUMPSYSLOG(DEBUG, "DBManager", "CDBManager", "InitDB", "username is [%s]", username);
	/* Get username end */

	/* Get password start */
	if (strlen(password) == 0)
	{
		m_DBPassWord = NULL;
		DUMPSYSLOG(DEBUG, "DBManager", "CDBManager", "InitDB", "password is [NULL], line %d", __LINE__);
	}
	else
	{
		i_length = strlen(password);
		m_DBPassWord = (char*)malloc(sizeof(char)*(i_length + 1));

		if (NULL == m_DBPassWord)
		{
			DUMPSYSLOG(ERROR, "DBManager", "CDBManager", "InitDB", "malloc failed. line %d", __LINE__);
			ERRPRINT(NULL==m_DBPassWord, goto ERR3, 0, "DBManager#CDBManager#InitDB#malloc failed, line %d", __LINE__);
		}
		strncpy(m_DBPassWord, password, i_length);
		m_DBPassWord[i_length] = '\0';

		DUMPSYSLOG(DEBUG, "DBManager", "CDBManager", "InitDB", "password is [%s]", password);
	}
	/* Get password end */

	/* Get db name start */
	if (strlen(dbname) == 0)
	{
		m_DBName = NULL;
		DUMPSYSLOG(DEBUG, "DBManager", "CDBManager", "InitDB", "password is [NULL], line %d", __LINE__);
	}
	else
	{
		i_length = strlen(dbname);
		m_DBName = (char*)malloc(sizeof(char)*(i_length + 1));

		if (NULL == m_DBName)
		{
			DUMPSYSLOG(ERROR, "DBManager", "CDBManager", "InitDB", "malloc failed. line %d", __LINE__);
			ERRPRINT(NULL==m_DBName, goto ERR4, 0, "DBManager#CDBManager#InitDB#malloc failed, line %d", __LINE__);
		}
		strncpy(m_DBName, dbname, i_length);
		m_DBName[i_length] = '\0';

		DUMPSYSLOG(DEBUG, "DBManager", "CDBManager", "InitDB", "dbname is [%s]", dbname);
	}
	/* Get db name end */

	/* Get port start */
	m_DBPort = (UINT)port;
	/* Get port end */

	delete conf;
	/* 初始化数据库句柄 */
	mysql_init(&m_mysqlHandle);

	DUMPSYSLOG(INFO, "DBManager", "CDBManager", "InitDB", "Get Config End, line %d", __LINE__);
	return;

ERR4:
	if (NULL != m_DBPassWord)
	{
		free(m_DBPassWord);
		m_DBPassWord = NULL;
	}
ERR3:
	if (NULL != m_DBUserName)
	{
		free(m_DBUserName);
		m_DBUserName = NULL;
	}
ERR2:
	if (NULL != m_DBHost)
	{
		free(m_DBHost);
		m_DBHost = NULL;
	}
ERR1:
	exit(EXIT_FAILURE);
}

/***********************************************************
 * 函数名: bool ConnectDB()
 * 函数功能: 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-28 15:17 
***********************************************************/ 
bool CDBManager::ConnectDB()
{
	DUMPSYSLOG(INFO, "DBManager", "CDBManager", "ConnectDB", "Connect to MySql, line %d", __LINE__);
	if (!mysql_real_connect(&m_mysqlHandle, m_DBHost, m_DBUserName, m_DBPassWord, m_DBName, m_DBPort, NULL, 0))
	{
		DUMPSYSLOG(ERROR, "DBManager", "CDBManager", "ConnectDB", "Failed to connect to mysql, errno: %u, error: %s", mysql_errno(&m_mysqlHandle), mysql_error(&m_mysqlHandle));
		ERRPRINT(1, return false, 0, "DBManager#CDBManager#ConnectDB#Failed to connect to mysql, Error %u : %s, line %d", mysql_errno(&m_mysqlHandle), mysql_error(&m_mysqlHandle), __LINE__);
	}

	return true;
}

/***********************************************************
 * 函数名: bool CDBManager::QueryDB(const char* statement)
 * 函数功能: 查询数据库 select 
 * 参数说明: 查询 SQL 语句
 * 返回值说明: 返回结果集
 * 涉及到的表: CD.CM_RES_LIFECYCLE, CD.CM_RES_IDENTITY
 * sql 语句样例:
 * SELECT t2.identity,t1.resource_id,t1.so_date,UNIX_TIMESTAMP(t1.valid_date) valid_date,UNIX_TIMESTAMP(t1.expire_date) expire_date,t1.os_sts_dtl FROM cm_res_lifecycle_0 t1 JOIN cm_res_identity_0 t2 ON t1.resource_id = t2.resource_id AND t1.os_sts_dtl IN (2,4) ORDER BY t1.so_date;
 *
 * 作者: wzhenyu 
 * 时间: 2016-03-28 19:18 
***********************************************************/ 
bool CDBManager::QueryDB(const char* statement)
{
	int flag = mysql_real_query(&m_mysqlHandle, statement, (unsigned long)strlen(statement));
	/* 0表示成功，非0表示出错 */
	if (flag)
	{
		DUMPSYSLOG(ERROR, "DBManager", "CDBManager", "QueryDB", "Query [%s] failed, errno: %u, error: %s", statement, mysql_errno(&m_mysqlHandle), mysql_error(&m_mysqlHandle));

		ERRPRINT(1, return false, 0, "BDManager#CDBManager#QueryDB#Query failed, errno : %u, error: %s", mysql_errno(&m_mysqlHandle), mysql_error(&m_mysqlHandle));
	}
	DUMPSYSLOG(DEBUG, "DBManager", "CDBManager", "QueryDB", "Query [%s] success", statement);

    if (m_mysqlRes != NULL) {
        mysql_free_result (m_mysqlRes);
        m_mysqlRes = NULL;
    }
	m_mysqlRes = mysql_store_result(&m_mysqlHandle);

	if (NULL == m_mysqlRes)
	{
		if (mysql_field_count(&m_mysqlHandle) == 0)
		{
			DUMPSYSLOG(INFO, "DBManager", "CDBManager", "QueryDB", "Sql is not select, line %d", __LINE__);
			ERRPRINT(1, return false, 0, "DBManager#CDBManager#QueryDB#Sql is not select, line %d", __LINE__);
		}
		else
		{
			DUMPSYSLOG(ERROR, "DBManager", "CDBManager", "QueryDB", "Query [%s] failed, errno: %u, error: %s", statement, mysql_errno(&m_mysqlHandle), mysql_error(&m_mysqlHandle));

			ERRPRINT(1, return false, 0, "BDManager#CDBManager#QueryDB#Query failed, errno : %u, error: %s", mysql_errno(&m_mysqlHandle), mysql_error(&m_mysqlHandle));
		}
	}

	return true;
}

bool CDBManager::SetTimeZone(const char* time_zone)
{
    char stat[64] = {0};
    sprintf (stat, "set time_zone = \"%s\";", time_zone);

    int flag = mysql_real_query (&m_mysqlHandle, stat, (unsigned long)strlen (stat));
    if (flag) {
        DUMPSYSLOG(ERROR, "DBManager", "CDBManager", "QueryDB", "Query [%s] failed, errno: %u, error: %s", stat, mysql_errno(&m_mysqlHandle), mysql_error(&m_mysqlHandle));
        ERRPRINT(1, return false, 0, "BDManager#CDBManager#SetTimeZone#Query failed, errno : %u, error: %s", mysql_errno(&m_mysqlHandle), mysql_error(&m_mysqlHandle));
    }

    return true;
}

/***********************************************************
 * 函数名: CDBManager::GetResult()
 * 函数功能: 获取结果集
 * 参数说明: 
 * 返回值说明: 返回查询结果集
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-28 20:15 
***********************************************************/ 
MYSQL_RES* CDBManager::GetResult()
{
	return m_mysqlRes;
}
