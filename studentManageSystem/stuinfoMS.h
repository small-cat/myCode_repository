/*************************************************************************
	> File Name: stuinfoMS.h
	> Author: Scholegance
	> Mail: 
	> Created Time: 2016-12-29 
 ************************************************************************/

#ifndef __STUINFO_MS_H__
#define __STUINFO_MS_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <errno.h>
#include <stdarg.h>

#define STUDENT_NUM_INCREMENT 10        /* at most 50 */
#define MAX_STRLEN 1024

#define DEBUG0(fmt, ...) sys_err(fmt, __VA_ARGS__)

#define ERRPRINT(cond, ret, flag, fmt, ...) do { \
    if (cond) { \
        DEBUG##flag(fmt, __VA_ARGS__); \
        ret; \
    } \
} while(0)

/* if consider file code "UTF-8", use the wide character wchar_t 
 * instead of char */
typedef struct studentInfo {
    char student_no[16];        /* student number */
    char student_name[16];      /* Student name */

    double English;    /* Score */
    double Math;
    double MZ;
    double Computer;
    double Electronic;
}StudentInfo;

typedef struct ClassInfo {
    StudentInfo* students;
    int students_num;
}ClassInfo;

/* err info */
void sys_err(const char* fmt, ...);

/************* operations related to student infomation **********/
void input (ClassInfo* mclass);      /* input student info */
void printScore (ClassInfo* mclass, const char* course_name);  /* get student scores by 
                                               course name */
int Max (ClassInfo* mclass);        /* get student info which total
                                           score is the highest */
#endif
