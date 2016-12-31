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
ClassInfo* loadStuInfoFromFile (const char* path)
{
    int number = 0;
    double class_total_score = 0;
    FILE* fp = NULL;
    char buf[MAX_STRLEN] = {0};
    ClassInfo* mclass = NULL;

    if (access (path, F_OK) == -1) {
        printf ("\033[40;31mWARNING:\033[0m Can not load file, %s does not exist\n", path);
    }

    if ((fp = fopen (path, "a+")) == NULL) {   /* if file does not exist, 
                                                   create it. */
        fprintf (stderr, "open file %s failed\n", path);
        exit (EXIT_FAILURE);
    }

    /* get number of students */
    while (fgets (buf, sizeof (buf), fp) != NULL) {
        number++;
    }

    /* reset file pointer to the beginning of the file */
    rewind (fp);


    mclass = (ClassInfo*)malloc (sizeof (ClassInfo));
    ERRPRINT (NULL==mclass, exit (EXIT_FAILURE), 0, "malloc failed, %d", __LINE__);
    if (0 == number) {
        mclass->students = (StudentInfo*)malloc (sizeof (StudentInfo) * STUDENT_INIT_NUM);
        ERRPRINT (NULL==mclass->students, exit (EXIT_FAILURE), 0, "malloc failed, %d", __LINE__);
        mclass->students_num = STUDENT_INIT_NUM;
    } else {
        mclass->students = (StudentInfo*)malloc (sizeof (StudentInfo) * number);
        ERRPRINT (NULL==mclass->students, exit (EXIT_FAILURE), 0, "malloc failed, %d", __LINE__);
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

    return mclass;
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
        mclass->students = (StudentInfo*)realloc (mclass->students, 
                mclass->students_num);
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

    printf ("学号: ");
    scanf ("%s", num);

    printf ("姓名: ");
    scanf ("%s", name);

    printf ("英语: ");
    scanf ("%lf", &english);

    printf ("高数: ");
    scanf ("%lf", &math);

    printf ("马哲: ");
    scanf ("%lf", &mz);

    printf ("计算机: ");
    scanf ("%lf", &computer);
    
    printf ("电子技术: ");
    scanf ("%lf", &elec);

    /* you'd better check validate of data, here overlooked */
    /* TODO(check validate of data): */
    idx = mclass->current_student_num;
    strcpy (mclass->students[idx].student_no, num);
    mclass->students[idx].student_no[strlen(mclass->students[idx].student_no)] = '\0';

    strcpy (mclass->students[idx].student_name, name);
    mclass->students[idx].student_name[strlen(mclass->students[idx].student_name)] = '\0';

    mclass->students[idx].score.English = english;
    mclass->students[idx].score.Math = math;
    mclass->students[idx].score.MZ = mz;
    mclass->students[idx].score.Computer = computer;
    mclass->students[idx].score.Electronic = elec;
    mclass->students[idx].total_score = (english + math + mz + computer + elec);
    mclass->average_score = (english + math + mz + computer + elec) / 5;

    mclass->current_student_num++;

    printf ("\n\n");
    printf ("Please Press ENTER to return ...");
    getchar();  /* 上面最后一个scanf 会输入一个回车，这里需要先接收回车 */
//   getchar();  /* c的输入函数 scanf 有很多后遗症，最好使用fgets 替代 */

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
void printScore (ClassInfo* mclass, int course_name) {
}

/***********************************************************
 * 函数名: void Max ()
 * 函数功能: get the highest one
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: 
 * 时间: 2016-12-30
***********************************************************/ 
void Max (ClassInfo* mclass) {
    /* data in mclass->students is sorted from high to low, 
     * the first one is the highest */

    printf ("\n\n--------------------------------"
            "----------------------------------\n");
    printf ("\e[40;31m最高分数:\e[0m %.2lf\n", mclass->students[0].total_score);
    printf ("\n");
    printf ("学号: %s\n", mclass->students[0].student_no);
    printf ("姓名: %s\n", mclass->students[0].student_name);
    printf ("英语: %.2lf\n", mclass->students[0].score.English);
    printf ("高数: %.2lf\n", mclass->students[0].score.Math);
    printf ("马哲: %.2lf\n", mclass->students[0].score.MZ);
    printf ("计算机: %.2lf\n", mclass->students[0].score.Computer);
    printf ("电子技术: %.2lf\n", mclass->students[0].score.Electronic);

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
    int cur = mclass->current_student_num - 1;
    int idx = cur - 1, j = 0;
    StudentInfo* stu = mclass->students;

    while (idx >= 0) {
        if (stu[cur].total_score < stu[idx].total_score)
            idx--;
        else {
            StudentInfo tmp;
            memset (&tmp, 0, sizeof (tmp));
            strcpy (tmp.student_no, stu[cur].student_no);
            strcpy (tmp.student_name, stu[cur].student_name);
            tmp.score = stu[cur].score;
            tmp.total_score = stu[cur].total_score;

            for (j=cur; j>idx; j--) {
                /* stu[j] = stu[j-1]; */
                memset (&stu[j], 0, sizeof (stu[j]));
                strcpy (stu[j].student_no, stu[j-1].student_no);    /* watch out NULL TERM */
                strcpy (stu[j].student_name, stu[j-1].student_name);
                stu[j].score = stu[j-1].score;
                stu[j].total_score = stu[j-1].total_score;
            }

            /* stu[j+1] = tmp */
            memset (&stu[j+1], 0, sizeof (stu[j+1]));
            strcpy (stu[j+1].student_no, tmp.student_no);
            strcpy (stu[j+1].student_name, tmp.student_name);
            stu[j+1].score = tmp.score;
            stu[j+1].total_score = tmp.total_score;

            break;
        }
    }
}

/***********************************************************
 * 函数名: void freeStudentInfo ()
 * 函数功能: 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-12-31 15:39 
***********************************************************/ 
void freeStudentInfo (ClassInfo* mclass)
{
    if (mclass) {
        if (mclass->students) {
            free (mclass->students);
        }

        mclass->students_num = 0;
        mclass->current_student_num = 0;
        mclass->average_score = 0;

        free (mclass);
        mclass = NULL;
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
