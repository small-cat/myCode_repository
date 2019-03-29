#ifndef _RAT_GET_H_
#define _RAT_GET_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "common/error.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define UNKNOWN "unknown"

char * GetGPRSWord(int length,int level[],char * record );

char** GetGPRSWord_CHAR (char* record, int number, char** result);
long int* GetGPRSWord_LONGINT (char* record, int number, long int* result);
int ValidDate(char* time);
int ValidPhoneNumber(char* phoneNum);

#ifdef __cplusplus
}
#endif

#endif
