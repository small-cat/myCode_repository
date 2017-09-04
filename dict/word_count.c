/*************************************************************************
	> File Name: wordcount.c
	> Author: Scholegance
	> Mail: 1161280746@qq.com
	> Created Time: 2017-09-04 14:51:50
 ************************************************************************/

#include "word_count.h"

static int _isAlphaOrDigit (char ch) {
    if (((ch >= 'a') && (ch <= 'z'))
            || ((ch >= 'A') && (ch <= 'Z'))
            || ((ch >= '0') && (ch <= '9'))) {
        return 1;
    } else {
        return 0;
    }
}

void scanFile (char* file, DictHT* ht) {
    if (!file || !ht) {
        return;
    }

    FILE* fp = fopen (file, "r");
    ERR_PRINT (NULL==fp, exit(EXIT_FAILURE), "scanFile, %d", __LINE__);

    char* lines = NULL;
    size_t len = 0;
    ssize_t read;
    char* delim = " ";
    while ((read = getline(&lines, &len, fp)) != -1) {  // read every line from file
        char *word, *str;
        int count = 1;

        if (lines[strlen(lines) - 1] == '\n') {
            lines[strlen(lines) - 1] = '\0';
        }

        for (str = lines; ; str=NULL) {
            word = strtok (str, delim);

            if (NULL == word) {
                break;
            }

            word = wordTrim (word);
            if (word == '\0') {
                break;
            }
            dictAdd (ht, (void*)word, (void*)&count);    // 每一个单词出现，次数都是 1
        }
    }

    if (lines) {
        free (lines);
    }

    fclose (fp);
}

/***********************************************************
 * 函数名: wordTrim
 * 函数功能: cut non-alpha signs on both ends
 * 参数说明:
 * 返回值说明:
 * 涉及到的表:
 * 作者: wzhenyu
 * 时间: 2017-09-04 17:06
***********************************************************/
char* wordTrim (char* word) {
    // can not be NULL
    if (NULL == word) {
        return NULL;
    }

    char* head = word;
    char* tail = head + strlen(word) - 1;
    char* p = head;

    while (!_isAlphaOrDigit(*p) && *p!='\0') {
        p++;
    }
    head = p;

    p = tail;
    while (p>head && !_isAlphaOrDigit(*p)) {
        p--;
    }
    p++;
    *p = '\0';

    return head;
}

int main (int argc, char* argv[]) {
    DictHT * hashtable;
    hashtable = dictCreate ();

    scanFile (argv[1], hashtable);
    dictScan (hashtable);

    return 0;
}
