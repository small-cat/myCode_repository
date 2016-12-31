/*************************************************************************
	> File Name: main.c
	> Author: Scholegance
	> Mail: mblrwuzy@gmail.com
	> Created Time: 2016-12-30
 ************************************************************************/

#include "stuinfoMS.h"

void MainMenu ()
{
    printf ("1. Input Student Info\n");
    printf ("2. PrintScore\n");
    printf ("3. Show Max Score\n");
    printf ("4. Exit\n");
}

void CourseMenu ()
{
    printf ("1. English\n");
    printf ("2. Math\n");
    printf ("3. MZ\n");
    printf ("4. Computer\n");
    printf ("5. Electronic\n");
}

int main (int argc, char* argv[])
{
    ClassInfo* mclass;
    mclass = loadStuInfoFromFile (DB_FILE);

    char buf[MAX_STRLEN] = {0};         /* input buffer */
    int choice = 0;
    do {
        MainMenu ();
        printf ("Choice: ");
        fgets (buf, sizeof (buf), stdin);
        choice = atoi (buf);

        switch (choice) {
        case 1:
            input (mclass);
            break;
        case 2:
            /* show course score */
            clrscr();
            CourseMenu ();
            printf ("Choice: ");

            memset (buf, 0, sizeof (buf));
            fgets (buf, sizeof (buf), stdin);
            choice = atoi (buf);

            printScore (mclass, choice);

            break;
        case 3:
            Max (mclass);
            break;
        case 4:
            /* before exit, save student info to file */
            saveStuInfoToFile (mclass, DB_FILE);
            freeStudentInfo (mclass);

            printf ("exit ...\n");
            exit (EXIT_SUCCESS);
        default:
            printf ("invalid operation, select again\n");
            break;
        }
        printf ("Please Press ENTER to return ... ");
        getchar();
        clrscr ();
    }while (1);

    return 0;
}
