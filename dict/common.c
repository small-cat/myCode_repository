/*************************************************************************
	> File Name: common.c
	> Author: Scholegance
	> Mail: 1161280746@qq.com 
	> Created Time: 2017-09-04 15:09:17
 ************************************************************************/

#include "common.h"

/***********************************************************
 * 函数名: sys_err
 * 函数功能: print error information on standard output
 * 参数说明:
 * 返回值说明:
 * 涉及到的表:
 * 作者: wzhenyu
 * 时间: 2017-09-02 15:21
 ***********************************************************/
void sys_err (const char* fmt, ...) {
    va_list ap; 
    int err = errno;
    char buf[MAX_BUFLEN] = {0};

    va_start (ap, fmt);
    vsnprintf (buf, sizeof(buf), fmt, ap);
    snprintf (buf+strlen(buf), MAX_BUFLEN-strlen(buf), "- %s", strerror(err));

    fprintf (stderr, "%s\n", buf);
    va_end (ap);
}
