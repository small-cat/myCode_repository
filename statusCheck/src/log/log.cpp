/**************************************************
    > File name: log.cpp
    > Author: wzhenyu
    > mail: 
    > Create Time: 2016-03-27 15:33
****************************************************/
#include <stdio.h>
#include <string.h>
#include "log/log.h"

CLog g_Log;

/***********************************************************
 * 函数名: CLog::CLog()
 * 函数功能: 构造函数
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-27 20:49 
***********************************************************/ 
CLog::CLog()
{
	memset(m_logCfgPath, 0, sizeof(m_logCfgPath));
}

/***********************************************************
 * 函数名: CLog::~CLog()
 * 函数功能: 析构函数
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-27 22:43 
***********************************************************/ 
CLog::~CLog()
{
	Close();
}

/***********************************************************
 * 函数名: CLog::Close()
 * 函数功能: 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-27 22:44 
***********************************************************/ 
void CLog::Close()
{
}

/***********************************************************
 * 函数名: bool CLog::Open
 * 函数功能: 初始化日志管理对象，初始化日志文件路径，日志文件名
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-27 21:51 
***********************************************************/ 
bool CLog::Open()
{
	CConfigManager* config = new CConfigManager();

	char logCfgPath[MAX_PATH] = {0};

	config->GetValue(DOWNCHECK_CONFIG_INI, "log", "logCfgPath", logCfgPath);

	/* 初始化日志路径*/
	if (NULL != logCfgPath)
	{
		sprintf(m_logCfgPath, "%s", logCfgPath);
	}
	
	if (access(m_logCfgPath, F_OK) != 0) //file does not exist
	{
		return false;
	}

	m_logger = Logger::getRoot();
	PropertyConfigurator::doConfigure(LOG4CPLUS_TEXT(m_logCfgPath));

	delete config;
	return true;
}

/***********************************************************
 * 函数名: CLog::FormatSysRunInfo(const char* moduleName, const char* className, const char* funcName, char* logDescript)
 * 函数功能: 格式化日志信息输出，将格式化后的日志信息缓存在 m_sysRunBuf 中，然后写入日志文件中
 * 参数说明: 
 *  logLevel : 日志级别
 *	moduleName : 定义好的模块, decode, configManager, DBManager, dataManager, downcheck
 *	className : 日志信息产生时的类型
 *	funcName : 日志信息产生的函数名
 *	logDescript : 日志信息描述
 *	logstring: 完整的日志信息输出
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-27 21:53 
***********************************************************/ 
void CLog::FormatSysRunInfo(const char* moduleName, const char* className, const char* funcName, char* logDescript, char* logstring)
{
	int n = 0;

	n = sprintf(logstring, "[%s#%s#%s#%s]", moduleName, className, funcName, logDescript);

	if (n >= LOGSTR_MAXLEN) {
		logstring[LOGSTR_MAXLEN - 1] = '\0';
	}
}

/***********************************************************
 * 函数名: void SysRunInfoDump(int	logLevel, const char* moduleName, const char* className, const char* funcName, const char* logDescriptFmt, ...)
 * 函数功能: 输出日志信息到日志文件中
 * 参数说明: 
 * logLevel : 日志级别
 * moduleName : 定义好的模块, decode, configManager, DBManager, dataManager, downcheck
 * className : 日志信息产生时的类型
 * funcName : 日志信息产生的函数名
 * logDescript : 日志信息描述
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-27 22:16 
***********************************************************/ 
void CLog::SysRunInfoDump(int logLevel, const char* moduleName, const char* className, const char* funcName, const char* logDescriptFmt, ...)
{
	char buf[4096] = {0};
	int n = 0;

	va_list ap;
	va_start(ap, logDescriptFmt);
	n = vsnprintf(buf, sizeof(buf)-1, logDescriptFmt, ap);
	va_end(ap);

	if (n >= (int)sizeof (buf)) {
		buf[sizeof (buf) - 1] = '\0';
	}

	/* 格式化输出 */
	char m_sysRunBuf[LOGSTR_MAXLEN];
    memset (m_sysRunBuf, 0, sizeof(m_sysRunBuf));
	FormatSysRunInfo(moduleName, className, funcName, buf, m_sysRunBuf);

	switch (logLevel)
	{
		case 1:
			LOG4CPLUS_TRACE(m_logger, m_sysRunBuf);
			break;
		case 2:
			LOG4CPLUS_DEBUG(m_logger, m_sysRunBuf);
			break;
		case 3:
			LOG4CPLUS_INFO(m_logger, m_sysRunBuf);
			break;
		case 4:
			LOG4CPLUS_WARN(m_logger, m_sysRunBuf);
			break;
		case 5:
			LOG4CPLUS_ERROR(m_logger, m_sysRunBuf);
			break;
		case 6:
			LOG4CPLUS_FATAL(m_logger, m_sysRunBuf);
			break;
		default:
			LOG4CPLUS_TRACE(m_logger, m_sysRunBuf);
			break;
	}
}
