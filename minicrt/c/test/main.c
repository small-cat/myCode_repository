/*************************************************************************
	> File Name: test.c
	> Author: Jona
	> Mail: mblrwuzy@gmail.com 
	> Created Time: 2019-02-02 09:36:25
 ************************************************************************/

#include "../minicrt.h"

int main(int argc, char* argv[])
{
    int i;
    int len = 0;
    char buf[256] = {0};
    FILE* fp;
    char** v = malloc(argc * sizeof(char*));
    for (i=0; i<argc; i++) {
        len = strlen(argv[i]);
        v[i] = malloc(len + 2);
        strcpy(v[i], argv[i]);
        v[i][len] = '\n';
        v[i][len+1] = '\0';
    }

    fp = fopen("test.txt", "a+");
    for (i=0; i<argc; i++) {
        len = strlen(v[i]);
        fwrite(v[i], 1, len, fp);
    }
    fclose(fp);

    fp = fopen("test.txt", "r");
    for (i=0; i<argc; i++) {
        len = fread(buf, 1, sizeof(buf), fp);
        buf[len] = '\0';
        printf("%s", buf);

        free(v[i]);
    }
    fclose(fp);

    printf("number:%d string:%s", 123, "thanks");
    fprintf(stdout, "%s\n", "use fprintf");

    return 0;
}

