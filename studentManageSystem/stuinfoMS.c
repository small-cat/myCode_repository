/*************************************************************************
	> File Name: stuinfoMS.c
	> Author:
	> Mail:
	> Created Time:
 ************************************************************************/

#include "stuinfoMS.h"

/***********************************************************
 * 函数名: 
 * 函数功能: 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: 
 * 时间:
***********************************************************/ 
void loadStuInfoFromFile (ClassInfo* mclass, const char* path)
{
    int number = 0;
    double class_total_score = 0;
    FILE* fp = NULL;
    char buf[MAX_STRLEN] = {0};

    if (access (path, F_OK) == -1) {
        printf ("\033[31;41mWARNING:\033[0m Can not load file, %s does not exist\n", path);
    }

    if ((fp = fopen (path, "r")) == NULL) {
        fprintf (stderr, "open file %s failed\n", path);
        exit (EXIT_FAILURE);
    }

    /* get number of students */
    while (fgets (buf, sizeof (buf), fp) != NULL) {
        number++;
    }

    /* reset file pointer to the beginning of the file */
    rewind (fp);

    if (mclass) {
        free (mclass);
    }

    mclass = (ClassInfo*)malloc (sizeof (ClassInfo));
    ERRPRINT (NULL==mclass, return, 0, "malloc failed, %d", __LINE__);
    if (0 == number) {
        mclass->students = (StudentInfo*)malloc (sizeof (StudentInfo) * STUDENT_INIT_NUM);
        ERRPRINT (NULL==mclass->students, return, 0, "malloc failed, %d", __LINE__);
        mclass->students_num = STUDENT_INIT_NUM;
    } else {
        mclass->students = (StudentInfo*)malloc (sizeof (StudentInfo) * number);
        ERRPRINT (NULL==mclass->students, return, 0, "malloc failed, %d", __LINE__);
        mclass->students_num = number;
    }
    mclass->current_student_num = 0;
    mclass->average_score = 0;

    /***********************************************************************************/
    /****************************** load student info **********************************/
    /***********************************************************************************/
    StudentInfo* stu = mclass->students;
    number = 0;
    memset (buf, 0, sizeof (buf));
    while (fgets (buf, sizeof (buf), fp) != NULL) {
        char delims[] = ",";
        char* result = NULL;

        /* data format stored in cj.bat:
         * student_no, student_name, english, math, mz, computer, electronic
         */
        /* get student number */
        result = strtok (buf, delims);
        strncpy (stu[number].student_no, result, strlen (result));
        stu[number].student_no[strlen (result) - 1] = '\0';

        /* get student name */
        result = strtok (NULL, delims);
        strncpy (stu[number].student_name, result, strlen (result));
        stu[number].student_name[strlen (result) - 1] = '\0';

        /* get english */
        result = strtok (NULL, delims);
        stu[number].score.English = strtod (result, NULL);

        /* get math score */
        result = strtok (NULL, delims);
        stu[number].score.Math = strtod (result, NULL);

        /* get MZ score */
        result = strtok (NULL, delims);
        stu[number].score.MZ = strtod (result, NULL);

        /* get computer score */
        result = strtok (NULL, delims);
        stu[number].score.Computer = strtod (result, NULL);

        /* get elec score */
        result = strtok (NULL, delims);
        stu[number].score.Electronic = strtod (result, NULL);

        stu[number].total_score = stu[number].score.English + stu[number].score.Math + 
            stu[number].score.MZ + stu[number].score.Computer + stu[number].score.Electronic;

        class_total_score += stu[number].total_score;   /* class total score */

        number++;
    }
}

/***********************************************************
 * 函数名: void input ()
 * 函数功能: input student info, and insert into ClassInfo
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: 
 * 时间: 2016-12-30
***********************************************************/ 
void input (ClassInfo * mclass) {
    if (!mclass) {
        fprintf (stderr, "no class\n");
        exit (EXIT_FAILURE);
    }

    /* alloc more memory to store student info */
    if (mclass->current_student_num == mclass->students_num) {
        mclass->students_num += STUDENT_NUM_INCREMENT;
        mclass->students = (StudentInfo*)realloc (mclass->students, );
    }
    
    /* input student info */
    char num[16] = {0};
    char name[16] = {0};
    double english = 0;
    double math = 0;
    double mz = 0;
    double computer = 0;
    double elec = 0;
    int idx = 0;

    printf ("student number: ");
    scanf ("%s", num);

    printf ("student name: ");
    scanf ("%s", name);

    printf ("english score: ");
    scanf ("%lf", &english);

    printf ("math score: ");
    scanf ("%lf", &math);

    printf ("mz score: ");
    scanf ("%lf", &mz);

    printf ("computer score: ");
    scanf ("%lf", &computer);
    
    printf ("electronic score: ");
    scanf ("%lf", &elec);

    /* you'd better check validate of data, here overlooked */
    /* TODO(check validate of data): */
    idx = mclass->current_student_num;
    strcpy (mclass->students[idx].student_no, num);
    mclass->students[idx].student_no[strlen(mclass->students[idx].student_no) - 1] = '\0';

    strcpy (mclass->students[idx].student_name, name);
    mclass->students[idx].student_name[strlen(mclass->students[idx].student_name) - 1] = '\0';

    mclass->students[idx].score.English = english;
    mclass->students[idx].score.Math = math;
    mclass->students[idx].score.MZ = mz;
    mclass->students[idx].score.Computer = computer;
    mclass->students[idx].score.Electronic = elec;
    mclass->average_score = (english + math + mz + computer + elec) / 5;

    mclass->current_student_num++;

    /* simple insert sort by total score from high to low */
    simpleInsertSort (mclass);
}

/***********************************************************
 * 函数名: 
 * 函数功能: 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: 
 * 时间: 2016-12-30
***********************************************************/ 
void printScore (ClassInfo* mclass, const char* course_name) {
}

/***********************************************************
 * 函数名: 
 * 函数功能: 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: 
 * 时间: 2016-12-30
***********************************************************/ 
int Max (ClassInfo* mclass) {
}

/***********************************************************
 * 函数名: void simpleInsertSort ()
 * 函数功能: select a propriate pos for the last student which
 *           inserted recently ordered by total score from high
 *           to low
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: 
 * 时间: 2016-12-30
***********************************************************/ 
void simpleInsertSort (ClassInfo* mclass) {
    int cur = mclass->current_student_num;
    int idx = cur - 1, j = 0;
    StudentInfo* stu = mclass->students;

    while (idx >= 0) {
        if (stu[cur].total_score < stu[idx].total_score)
            idx--;
        else {
            StudentInfo tmp;
            memset (tmp, 0, sizeof (tmp));
            strcpy (tmp.student_no, stu[cur].student_no);
            strcpy (tmp.student_name, stu[cur].student_name);
            tmp.score = stu[cur].score;
            tmp.total_score = stu[cur].total_score;

            for (j=cur; j>idx; j--) {
                /* stu[j] = stu[j-1]; */
                memset (stu[j], 0, sizeof (stu[j]));
                strcpy (stu[j].student_no, stu[j-1].student_no);    /* watch out NULL TERM */
                strcpy (stu[j].student_name, stu[j-1].student_name);
                stu[j].score = stu[j-1].score;
                stu[j].total_score = stu[j-i].total_score;
            }

            /* stu[j+1] = tmp */
            memset (stu[j+1], 0, sizeof (stu[j+1]));
            strcpy (stu[j+1].student_no, tmp.student_no);
            strcpy (stu[j+1].student_name, tmp.student_name);
            stu[j+1].score = tmp.score;
            stu[j+1].total_score = tmp.total_score;
        }
    }
}

/***********************************************************
 * 函数名: void sys_err (fmt, ...)
 * 函数功能: describe error information
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: 
 * 时间: 2016-12-30
***********************************************************/ 
void sys_err (const char* fmt, ...)
{
    int err = errno;
    va_list ap;
    char buf[MAX_STRLEN];
    memset (buf, 0, sizeof (buf));

    va_start (ap, fmt);
    vsnprintf (buf, sizeof (buf), fmt, ap);
    snprintf (buf+strlen(buf), MAX_STRLEN-strlen(buf), ", %s", strerror(errno));
    va_end (ap);

    buf[strlen(buf) - 1] = '\0';
    fprintf (stderr, "%s\n", buf);
    errno = err;
}
