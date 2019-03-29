/*************************************************************************
	> File Name: formatString.h
	> Author: Scholegance
	> Mail: 1161280746.com 
	> Created Time: 2017-02-15 11:17:57
 ************************************************************************/

#ifndef __FORMAT_STRING_H__
#define __FORMAT_STRING_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* format: [{PHONE:17053237234}, {STS:4}, {VALID:20170110}, {EXPIRE:20170201}]*/
void formatRedisSetString (char* str, char* phone, int sts, int valid, int expire);
int getIntFromString (char *str, const char* key);


#ifdef __cplusplus
}
#endif

#endif
