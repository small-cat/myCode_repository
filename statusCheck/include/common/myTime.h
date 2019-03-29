#ifndef __MY_TIME_H__
#define __MY_TIME_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <time.h>
#include <string.h>
	
#define TIME_STRLEN 32
#define MAX_DATE "20990101000000" /* 2099-01-01 00:00:00 */
#define MAXDATETIME 2145801600  /* 2037-12-31 00:00:00*/

char* getCurTime();		/* 返回日期格式为 2016-04-07 17:23:43 */
char* getCurTime2();	/* 返回日期格式为 20160407172343*/
char* getCurDate();
char* getLastDays(int interval_time);	/* 返回前 interval_time 天的日期时间，间隔的时间可根据配置文件配置*/
int getUnixTime(const char * );
char* my_mktime(int time_sec);	/* 通过秒数获取时间，注意CST 和 GMT 时区的区别 */


#ifdef __cplusplus
}
#endif

#endif
