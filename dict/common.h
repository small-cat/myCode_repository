/*************************************************************************
	> File Name: common.h
	> Author: Scholegance
	> Mail: 1161280746.com 
	> Created Time: 2017-09-04 15:08:02
 ************************************************************************/
#ifndef _COMMON_H_
#define _COMMON_H_

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdarg.h>

#define MAX_BUFLEN 1024

void sys_err (const char* fmt, ...);
#define ERR_PRINT(con, ret, fmt, ...) \
    do { \
        if (con) { \
            sys_err (fmt, __VA_ARGS__); \
            ret; \
        } \
    } while(0)


#endif
