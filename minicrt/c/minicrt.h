/*************************************************************************
	> File Name: minicrt.h
	> Author: Jona
	> Mail: mblrwuzy@gmail.com 
	> Created Time: 2019-02-01 10:26:20
 ************************************************************************/

#ifndef _MINI_CRT_H
#define _MINI_CRT_H

/*
 * ENVIRONMENT: 64bit
 */

#ifdef __cplusplus
extern "C" {
#endif

#ifndef NULL
#define NULL 0
#endif

/*********** HEAP OPERATIONS ***********/
void free(void* ptr);
void* malloc(unsigned size);
int mini_crt_heap_init();

/*********** IO OPERATIONS ***********/
/* from fcntl.h */
/* the number is oct */
#define O_RDONLY    00
#define O_WRONLY    01
#define O_RDWR      02
#define O_CREAT     0100
#define O_TRUNC     01000
#define O_APPEND    02000

typedef int FILE;
#define EOF     (-1)
#define stdin   ((FILE*)0)
#define stdout  ((FILE*)1)
#define stderr  ((FILE*)2)
int mini_crt_io_init();
FILE* fopen(const char* filename, const char* mode);
int fread(void* buffer, int size, int count, FILE* stream);
int fwrite(const void* buffer, int size, int count, FILE* stream);
int fclose(FILE* fp);
int fseek(FILE* fp, int offset, int set);

/*********** string OPERATIONS ***********/
char* itoa(int n, char* str);
int strcmp(const char* src, const char* dest);
char* strcpy(char* dest, const char* src);
unsigned strlen(const char* str);

/*********** printf OPERATIONS ***********/
/* _cdecl is default, and os push function args into stack from right to left.
 * the growth of stack is from high to low, so from left to right in function
 * args, address is from low to high. in va_arg, t is the last fixed argument,
 * plus offset to get all the unfixed arguments.
 * */

#ifdef ENVIRONMENT32
/* alignment property */
#define _AUPBND                 (sizeof(long) - 1)
#define _ADNBND                 (sizeof(long) - 1)

#define _bnd(X, bnd)            ((sizeof(X) + (bnd)) & (~(bnd)))

#define va_list char*
#define va_start(ap, arg)       ((ap) = (((char*)&(arg)) + (_bnd(arg, _AUPBND))))
/* offset of fixed argument is 32bytes, I don't know why */
#define va_arg(ap, t)           (*(t*)(((ap) += (_bnd(t, _AUPBND))) - (_bnd(t, _ADNBND))))
#define va_end(ap) ((va_list)0)
#else
#include <stdarg.h>
#endif

int fputc(int c, FILE* stream);
int fputs(const char* str, FILE* stream);
int vfprintf(FILE* stream, const char *format, va_list arglist);
int printf(const char* format, ...);
int fprintf(FILE* stream, const char* format, ...);
int fnprintf(int a, char* b, long int c, FILE* stream, const char* format, ...);

/*********** internal OPERATIONS ***********/
//void do_global_ctors();
//void mini_crt_call_exit_routine();

/*********** atexit OPERATIONS ***********/
typedef void (*atexit_func_t)(void);
int atexit(atexit_func_t);

#ifdef __cplusplus
}
#endif

#endif

