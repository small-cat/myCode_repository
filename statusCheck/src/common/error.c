#include "common/error.h"

/***********************************************************
 * 函数名: sys_err(const char*)
 * 函数功能: 打印错误信息
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-24 19:46 
***********************************************************/ 
void sys_err(const char* fmt, ...)
{
	int err = errno;
	char buf[MAXLENGTH] = {0};

	va_list ap;
	va_start(ap, fmt);
	vsnprintf(buf, sizeof(buf), fmt, ap);
	snprintf(buf+strlen(buf), MAXLENGTH-strlen(buf), "-- %s", strerror(err));
	strcat(buf, "\n");

	fprintf(stderr, "%s", buf);
	va_end(ap);
}

/***********************************************************
 * 函数名: void my_printf(const char* fmt)
 * 函数功能: 打印输出信息, 避免g++ 编译时使用printf函数造成的错误
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-08 16:18 
***********************************************************/ 
void my_printf(const char* fmt)
{
	fprintf(stdout, "%s", fmt);
}

/***********************************************************
 * 函数名: 
 * 函数功能: 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-08 16:31 
***********************************************************/ 
void my_fprintf(const char* fmt, ...)
{
	char buf[MAXLENGTH] = {0};

	va_list ap;
	va_start(ap, fmt);
	vsnprintf(buf, sizeof(buf), fmt, ap);

	fprintf(stdout, "%s", buf);
	va_end(ap);
}
