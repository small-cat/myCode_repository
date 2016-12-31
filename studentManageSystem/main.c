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
    ClassInfo* mclass = NULL;
    loadStuInfoFromFile (mclass, DB_FILE);

    char buf[MAX_STRLEN] = {0};         /* input buffer */
    int choice = 0;
    do {
        clrscr ();
        MainMenu ();
        printf ("Choice: ");
        fgets (buf, sizeof (buf), stdin);
        choice = atoi (buf);

        switch (choice) {
        case 1:
            break;
        case 2:
            clrscr();
            CourseMenu ();
            printf ("Choice: ");

            memset (buf, 0, sizeof (buf));
            fgets (buf, sizeof (buf), stdin);
            choice = atoi (buf);
            break;
        case 3:
            break;
        case 4:
            /* before exit, save student info to file */
            /*saveStuInfoToFile (mclass, DB_FILE);*/
            exit (EXIT_SUCCESS);
        default:
            printf ("invalid operation, select again\n");
            break;
        }
    }while (1);

    return 0;
}
