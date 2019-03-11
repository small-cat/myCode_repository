/*************************************************************************
	> File Name: printf.c
	> Author: Jona
	> Mail: mblrwuzy@gmail.com 
	> Created Time: 2019-02-01 15:27:00
 ************************************************************************/

#include "minicrt.h"

int fputc(int c, FILE* stream)
{
    if (fwrite(&c, 1, 1, stream) != 1) {
        return EOF;
    } else {
        return c;
    }
}

int fputs(const char* str, FILE* stream)
{
    int len = (int)strlen(str);
    if (fwrite(str, 1, len, stream) != len) {
        return EOF;
    } else {
        return len;
    }
}

int vfprintf(FILE* stream, const char* format, va_list arglist)
{
    int translating = 0;
    int ret = 0;
    const char* p = NULL;
    for (p=format; *p!='\0'; p++) {
        switch(*p) {
        case '%':
            if (!translating) {
                translating = 1;
            } else {    // %%
                if (fputc('%', stream) < 0) {
                    return EOF;
                }
                translating = 1;
            }
            ret++;
            break;
        case 'd':
            if (translating) {
                char buf[16] = {0};
                translating = 0;
                itoa(va_arg(arglist, int), buf);
                if (fputs(buf, stream) < 0) {
                    return EOF;
                }
                ret += strlen(buf);
            } else {
                if (fputc(*p, stream) < 0) {
                    return EOF;
                } else {    // fputc>0
                    ret++;
                }
            }
            break;
        case 's':
            if (translating) { // %s
                const char* str = va_arg(arglist, const char*);
                translating = 0;
                if (fputs(str, stream) < 0) {
                    return EOF;
                }
                ret += strlen(str);
            } else {
                if (fputc(*p, stream) < 0) {
                    return EOF;
                } else {
                    ret++;
                }
            }
            break;
        default:
            if (translating) {
                translating = 0;
            }

            if (fputc(*p, stream) < 0) {
                return EOF;
            } else {
                ret++;
            }
            break;
        }
    }
    return ret;
}

int fprintf(FILE* stream, const char* format, ...)
{
    int ret = 0;
    va_list ap;
    va_start(ap, format);
    ret = vfprintf(stream, format, ap);
    va_end(ap);

    return ret;
}

int printf(const char* format, ...)
{
    int ret = 0;
    va_list ap;
    va_start(ap, format);
    ret = vfprintf(stdout, format, ap);
    va_end(ap);

    return ret;
}

