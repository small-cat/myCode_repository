/*************************************************************************
	> File Name: stuinfoMS.h
	> Author: 
	> Mail: 
	> Created Time:
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
#include <malloc.h>

#define STUDENT_NUM_INCREMENT 10        /* at most 50 */
#define STUDENT_INIT_NUM 20
#define MAX_STRLEN 1024

#define DB_FILE "cj.dat"

#define DEBUG0(fmt, ...) sys_err(fmt, __VA_ARGS__)

#define ERRPRINT(cond, ret, flag, fmt, ...) do { \
    if (cond) { \
        DEBUG##flag(fmt, __VA_ARGS__); \
        ret; \
    } \
} while(0)

#define isExcellent(score) ((score >=90 && score <= 100))
#define isFine(score) ((score >=80 && score <= 89))
#define isMedium(score) ((score >= 70 && score <= 79))
#define isPass(score) ((score >= 60 && score <= 69))

typedef struct _COURSE_SCORE_ {
    double English;    /* Score */
    double Math;
    double MZ;
    double Computer;
    double Electronic;
}CourseScore;

/* if consider file code "UTF-8", use the wide character wchar_t 
 * instead of char */
typedef struct _STUDENT_INFO_ {
    char student_no[16];        /* student number */
    char student_name[16];      /* student name */
    CourseScore score;          /* student score */
    double total_score;
}StudentInfo;

typedef struct _CLASS_INFO_ {
    StudentInfo* students;      /* students info in class */
    int students_num;           /* max student number int the class */
    int current_student_num;    /* current student number int the class */
    double average_score;       /* average */
}ClassInfo;

/************* err info **********/
void sys_err(const char* fmt, ...);

/************* operations related to student infomation **********/
ClassInfo* loadStuInfoFromFile (const char* path);
void input (ClassInfo* mclass);      /* input student info */
void printScore (ClassInfo* mclass, int course);  /* get student scores by 
                                                     course */
void Max (ClassInfo* mclass);        /* get student info which total
                                       score is the highest */
double getScore (StudentInfo* stu, int course_no);
void freeStudentInfo (ClassInfo* mclass);
void saveStuInfoToFile (ClassInfo* mclass, const char* path);

/* simple insert sort */
void simpleInsertSort (ClassInfo* mclass);

/*********** screen op ************/
#define clrscr()        puts ("\033[2J\033[1;1H")           /* clear screen and move to row 1 col 1 */
#endif
