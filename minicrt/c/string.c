/*************************************************************************
	> File Name: string.c
	> Author: Jona
	> Mail: mblrwuzy@gmail.com 
	> Created Time: 2019-02-01 14:47:18
 ************************************************************************/

#include "minicrt.h"

/************************************************************************* 
 * * FUNCTION NAME: itoa
 * * DESCRIPTION: convert int to string
 * * ARGS: 
 * * RETURN VALUE: 
 * * AUTHOR: Jona
 * * CREATE TIME: 2019-02-01 16:38 
*************************************************************************/ 
char* itoa(int n, char* str) {
    int digit = 0;
    char* p = str;
    char* head = str;
    if (n < 0) {
        n = -n;
        *p++ = '-';
        head++;     // skip minus sign
    }
    
    if (0 == n) {
        *p++ = '0';
        *p = '\0';
        return str;
    }

    while (n) {
        *p++ = n % 10 + '0';
        n = n / 10;
    }
    *p = '\0';
    // swap 
    for (--p; p>head; --p,head++) {
        char temp = *head;
        *head = *p;
        *p = temp;
    }
    return str;
}

/************************************************************************* 
 * * FUNCTION NAME: strcmp
 * * DESCRIPTION: compare two strings 
 * * ARGS: 
 * * RETURN VALUE:
 * equal : 0
 * great : 1
 * little: -1
 * * AUTHOR: Jona
 * * CREATE TIME: 2019-02-01 14:48 
*************************************************************************/ 
int strcmp(const char* src, const char* dest) {
    int ret = 0;
    char* pSrc = (char*)src;
    char* pDst = (char*)dest;

    while ((*pSrc!='\0') && (*pDst!='\0')) {
        if (*pSrc > *pDst) {
            return 1;
        } else if (*pSrc < *pDst) {
            return -1;
        }
        pSrc++;
        pDst++;
    }

    if (*pSrc != '\0') {
        ret = 1;
    } else if (*pDst != '\0') {
        ret = -1;
    }
    return ret;
}

/************************************************************************* 
 * * FUNCTION NAME: strcpy
 * * DESCRIPTION: copy from src to dest
 * * ARGS: 
 * * RETURN VALUE: return address of dest
 * * AUTHOR: Jona
 * * CREATE TIME: 2019-02-01 15:01 
*************************************************************************/ 
char* strcpy(char* dest, const char* src) {
    char* ret = dest;
    while (*src != '\0') {
        *dest++ = *src++;
    }

    return ret;
}

/************************************************************************* 
 * * FUNCTION NAME: strlen
 * * DESCRIPTION: return length of string 
 * * ARGS: 
 * * RETURN VALUE: 
 * * AUTHOR: Jona
 * * CREATE TIME: 2019-02-01 15:02 
*************************************************************************/ 
unsigned strlen(const char* str) {
    unsigned ret = 0;
    if(!str) {
        return 0;
    }
    while (*str != '\0') {
        ret++;
        str++;
    }

    return ret;
}
