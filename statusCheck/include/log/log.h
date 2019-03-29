/*=========================================================
*	File name	：	LOG.H
*	Description	：	
*
*	Modify  	：	
*=========================================================*/
#ifndef __LOG_H
#define __LOG_H

#include <stdio.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
#include <memory.h>
#include "common/lock.h"
#include "global/globaldef.h"
#include "config/ConfigManager.h"
#include "common/error.h"
#include "common/myTime.h"

#include "log4cplus/logger.h"
#include "log4cplus/configurator.h"
#include "log4cplus/helpers/stringhelper.h"
#include "log4cplus/loggingmacros.h"

#define LOGSTR_MAXLEN 4096 /* 输出日志中格式化字符串的最大长度，超过这个长度将被截断 */

/* 日志级别, DEBUG将输出所有日志信息，INFO输出运行时系统日志信息，ERROR输出错误日志信息 */
#define TRACE 1
#define DEBUG 2
#define INFO 3
#define WARN 4
#define ERROR 5
#define FATAL 6

#define LOG4CPLUS_
#define CPLUS_LOG(x, y, logger, desc) x##y(logger, desc)

using namespace std;
using namespace log4cplus;
using namespace log4cplus::helpers;
using namespace log4cplus::thread;

class CLog  
{
public:
	CLog();
	~CLog();
	void Close(); /* 关闭日志文件句柄 */

public:

	bool Open();

	/*a. 输出告警、错误日志，如指针为空，或者是一个函数的返回值不成功等，这类信息都要通过这个接口进行输出；
	  b. 输出调试日志，在调试。如一个变量的值，或是是程序运行到什么地方，变量的值什么时候改变等，一些有助于错误定位的信息通过这个接口进行输出。
	  c. 输出系统运行日志。系统启动，模块停止，启动等，一些程序运行状态的消息可以通过这个接口进行输出。
	参数：
	1．	日志级别 int logLevel
	2．	模块名 	char * ModuleName 输出日志时所在模块
	3．	类名 	char * ClassName 输出日志时所在类名
	4．	函数名 	char * FuncName 输出日志时所在函数名
	5．	错误或告警信息描述 char * ErrorDescript 	对信息做一个简要描述
	*/
	void SysRunInfoDump(int logLevel, const char * moduleName, const char * className, const char * funcName, const char * logDescriptFmt,...);

	Logger GetLogger();
	char* GetLogDescription();

private:
	char m_logCfgPath[MAX_PATH];	// log4cplus 日志配置文件		
//	char* m_sysRunBuf;
	Logger m_logger;	//log4cplus 日志记录对象
private:
	//格式化日志信息
	void FormatSysRunInfo(const char * moduleName,const char * className,const char * funcName, char * logDescript, char* logstring);

};

extern CLog g_Log;

#define	DUMPSYSLOG g_Log.SysRunInfoDump	//输出系统运行日志宏

#endif // __LOG_H
