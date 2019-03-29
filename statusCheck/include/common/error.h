#ifndef __ERROR_H
#define __ERROR_H

#ifdef __cplusplus
extern "C" {
#endif

#include <errno.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>


#define MAXLENGTH 512

void sys_err(const char* fmt, ...);
void my_printf(const char* fmt);
void my_fprintf(const char* fmt, ...);

#define DEBUG0(fmt, ...) sys_err(fmt, __VA_ARGS__);

/* 预留 */
#define DEBUG1(fmt) my_printf(fmt);
#define DEBUG2(fmt, ...) my_fprintf(fmt, __VA_ARGS__);

#define ERRPRINT(con, ret, flag, fmt, ...) do \
{ \
	if (con) \
	{ \
		DEBUG##flag(fmt, __VA_ARGS__) \
		ret; \
	} \
}while(0)

#define PRINTF(flag, fmt) do \
{ \
	DEBUG##flag(fmt) \
}while(0)

#define FPRINTF(flag, fmt, ...) do \
{ \
	DEBUG##flag(fmt, __VA_ARGS__) \
}while(0)


#ifdef __cplusplus
}
#endif

#endif
