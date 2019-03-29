/**************************************************
    > File name: myTime.c
    > Author: wzhenyu
    > mail: 
    > Create Time: 2016-03-27 23:18
****************************************************/
#include "common/myTime.h"
#include <stdio.h>
#include <malloc.h>
#include "common/error.h"
#include <stdlib.h>
#include <time.h>

/* 每月的天数 */
/* 下标为0，month[0][0]，表示上一年12月份的天数 */
const static int month[2][13] = {
	{31, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, /* 平年 */
	{31, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}	 /* 闰年 */
};

enum YEAR_TYPE {LEAP_YEAR, COMMON_YEAR};

extern char *strptime(const char *s, const char *format, struct tm *tm);
/***********************************************************
 * 函数名: char* getCurTime()
 * 函数功能: 格式化获取当前时间 YY-MM-DD HH:MM:SS
 * 参数说明: 
 * 返回值说明: 返回当前时间字符串, 函数内部使用了malloc申请空间大小，外部需要释放空间
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-27 23:46 
***********************************************************/ 
char* getCurTime()
{
	struct tm* m_tm;
	time_t m_time_t;

	char* buf = (char*)malloc(sizeof(char)*64);
	ERRPRINT(NULL==buf, return NULL, 0, "common#myTime#getCurTime#line %d", __LINE__);
	
	/* 同时可以往文件中写入 */
	//SYSLOGDUMP
	
	ERRPRINT(time(&m_time_t)==-1, exit(EXIT_FAILURE), 0, "common#myTime#getCurTime#line %d", __LINE__);
	m_tm = localtime(&m_time_t);

	if (NULL != m_tm)
	{
		sprintf(buf, "%d-%02d-%02d %02d:%02d:%02d", m_tm->tm_year+1900, m_tm->tm_mon+1, m_tm->tm_mday, m_tm->tm_hour, m_tm->tm_min, m_tm->tm_sec);
	}
	else
		return NULL;

	return buf;
}

/***********************************************************
 * 函数名: char* getCurTime2()
 * 函数功能: 格式化获取当前时间 YYMMDDHHMMSS
 * 参数说明: 
 * 返回值说明: 返回当前时间字符串, 函数内部使用了malloc申请空间大小，外部需要释放空间
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-27 23:46 
***********************************************************/ 
char* getCurTime2()
{
	struct tm* m_tm;
	time_t m_time_t;

	char* buf = (char*)malloc(sizeof(char)*64);
	ERRPRINT(NULL==buf, return NULL, 0, "common#myTime#getCurTime#line %d", __LINE__);
	
	ERRPRINT(time(&m_time_t)==-1, exit(EXIT_FAILURE), 0, "common#myTime#getCurTime#line %d", __LINE__);
	m_tm = localtime(&m_time_t);

	if (NULL != m_tm)
	{
		sprintf(buf, "%d%02d%02d%02d%02d%02d", m_tm->tm_year+1900, m_tm->tm_mon+1, m_tm->tm_mday, m_tm->tm_hour, m_tm->tm_min, m_tm->tm_sec);
	}
	else
		return NULL;

	return buf;
}

/***********************************************************
 * 函数名: char* getCurDate()
 * 函数功能: 获取当前日期
 * 参数说明: 
 * 返回值说明: 以字符串的形式返回当前日期, 函数内部使用了malloc，外部需要释放
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-05 16:09 
***********************************************************/ 
char* getCurDate()
{
	time_t m_time_t;
	struct tm* m_tm;

	char* buf = (char*)malloc(sizeof(char)*64);
	ERRPRINT(NULL==buf, return NULL, 0, "common#myTime#getCurDate#line %d", __LINE__);
	
	/* 同时可以往文件中写入 */
	//SYSLOGDUMP
	
	ERRPRINT(time(&m_time_t)==-1, exit(EXIT_FAILURE), 0, "common#myTime#getCurDate#line %d", __LINE__);
	m_tm = localtime(&m_time_t);

	if (NULL != m_tm)
	{
		sprintf(buf, "%02d%02d%02d", m_tm->tm_year+1900, m_tm->tm_mon+1, m_tm->tm_mday);
	}
	else
		return NULL;

	return buf;
}


/***********************************************************
 * 函数名:getUnixTime(const char*) 
 * 函数功能:将字符串时间转换成unix时间戳。
 * 参数说明: 输入字符串时间格式为2016040607085545——年月日时分秒
 * 返回值说明: int型linux时间戳
 * 作者: zhangzhen 
 * Time: 2016-04-06 15:21 
***********************************************************/ 
int getUnixTime(const char* time) 
{
	time_t UnixTime = 0;//linux时间戳，该函数的返回值。
	struct tm tm1 = {0};
	strptime(time,"%Y%m%d%H%M%S",&tm1);
	UnixTime = mktime(&tm1);
	return UnixTime;
}

/***********************************************************
 * 函数名: char* getLastDays()
 * 函数功能: 根据配置文件中的时间间隔配置 interval_time，获取当前时间前 interval_time 天的时间
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-19 11:46 
***********************************************************/ 
char* getLastDays(int interval_time)
{
	time_t mtime;
	struct tm* m_tm = NULL;

	int m_year, m_mon, m_day;
	enum YEAR_TYPE year_type = COMMON_YEAR;		/* 平年，闰年, 不是闰年，都是平年 */

	char* lastday = (char*)malloc(sizeof(char)*TIME_STRLEN);
	ERRPRINT(NULL == lastday, exit(EXIT_FAILURE), 0, "common#myTime#getLastDay# line %d", __LINE__);
	memset(lastday, 0, TIME_STRLEN);

	time(&mtime);
	m_tm = localtime(&mtime);

	if (NULL != m_tm)
	{
		m_year = m_tm->tm_year + 1900;
		m_mon = m_tm->tm_mon + 1;
		m_day = m_tm->tm_mday;

		/* 被100整除同时要被4整除; 不被100整除，需被4整除 */
		if ((m_year % 100) == 0)
		{
			if ((m_year % 4) == 0)
			{
				year_type = LEAP_YEAR;
			}
		}
		else
		{
			if ((m_year % 4) == 0)
			{
				year_type = LEAP_YEAR;
			}
		}

		/* 前 interval_time 天的时间，如果interval_time 是 7 天 
		 * 当前时间是 2016-01-04
		 * 前 7 天是 2015-12-28
		 * 天数：31 + 4 - 7 = 28
		 * 月份：12 + 1 - 1 = 12
		 * 年份：2016 - 1 = 2015*/
		if (m_day <= interval_time)
		{
			m_day = month[year_type][m_mon-1] + m_day - interval_time;
			m_mon--;
		}
		else
		{
			m_day = m_day - interval_time;
		}

		if (0 == m_mon) /* 1月份前一个月应该是上一年的12月份 */
		{
			m_mon = 12;
			m_year--;
		}
	}
	else
	{
		return NULL;
	}

	sprintf(lastday, "%d-%02d-%02d 00:00:00", m_year, m_mon, m_day);
	return lastday;
}

/***********************************************************
 * 函数名: char* my_mktime(int time_sec)
 * 函数功能: 将时间秒数转换成时间
 * 参数说明: 时间秒数
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-22 18:47 
***********************************************************/ 
char* my_mktime(int time_sec)
{
	time_t m_time = time_sec;
	char* time = (char*)malloc(sizeof(char) * 16);
	ERRPRINT(NULL == time, exit(EXIT_FAILURE), 0, "common#error.c#my_mktime# malloc failed, line %d", __LINE__);

	if (time_sec == MAXDATETIME)
	{
		strcpy(time, MAX_DATE);
		return time;
	}
	/*struct tm * m_tm = gmtime(&m_time);*/
	struct tm * m_tm = localtime(&m_time);
	
	/* gmtime 计算出的时间是GMT，跟我们使用的CST时间相差8个小时 */
	/* struct tm 结构体月份是从0-11，需要加上1 */
	sprintf(time, "%04d%02d%02d%02d%02d%02d", m_tm->tm_year+1900, m_tm->tm_mon+1, m_tm->tm_mday, m_tm->tm_hour, m_tm->tm_min, m_tm->tm_sec);

	return time;
}
