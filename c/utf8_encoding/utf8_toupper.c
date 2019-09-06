/*************************************************************************
* @file utf8_toupper.c
* @brief: 
* @author Jona
* @date 06/09/2019
*************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

/***********************************************************
 * check string is utf8 or not. utf8 format as the following
 * 1 0XXXXXXX
 * 2 110XXXX  10XXXXXX
 * 3 1110XXXX 10XXXXXX 10XXXXXX
 * 4 11110XXX 10XXXXXX 10XXXXXX 10XXXXXX 
 * 5 111110XX 10XXXXXX 10XXXXXX 10XXXXXX 10XXXXXX 
 * 6 1111110X 10XXXXXX 10XXXXXX 10XXXXXX 10XXXXXX 10XXXXXX
 * so, the range length is from 1 to 6, one byte format is the same as ascii
 * in first byte of others, the number of 1s is the number of bytes.
 * @author 
 * @param 
 * @date 06/09/2019 
***********************************************************/ 
int utf8_check(const char* str, size_t len) {
    if (NULL == str || len <= 0) {
        return 0;
    }

    size_t i = 0;
    int n_bytes = 0;
    char ch = 0;

    while (i < len) {
        ch = *(str + i);
        
        if (!(ch & 0x80)) {     // one byte's utf8, the same as ascii
            i++;
            continue;
        }

        if (n_bytes == 0) {
            // count the number of 1s
            while (ch & 0x80) {
                n_bytes++;
                ch <<= 1;
            }

            if ((n_bytes < 2) || (n_bytes > 6)) {
                printf("%d is not length of bytes(1-6)\n", n_bytes);
                return 0;
            }

            // the first byte has been processed, rest of current character is n_bytes--
            n_bytes--;
        } else {
            // other bytes must start as 0x10XXXXXX
            if ((ch & 0xc0) != 0x80) {
                printf("%x can not conform to utf8 encoding\n", ch);
                return 0;
            }
            n_bytes--;
        }
        i++;
    }

    return n_bytes == 0;
}

/***********************************************************
 * only toupper alpha, if string is surrounded by double quotes, 
 * is case sensitive, and don't toupper
 * @author 
 * @param 
 * @date 06/09/2019 
***********************************************************/ 
char* toupper_with_case_sensitive(char* str, size_t len) {
    if (str == NULL || len <= 0) {
        printf("string is empty\n");
        return NULL;
    }

    size_t i = 0;
    int n_bytes = 0;
    int case_sensitive = 0;
    char *p = NULL;
    char ch = 0;

    while (i < len) {
        p = str + i;

        if (*p & 0x80) {    // maybe Chinese character, not same as ascii
            ch = *p;
            while (ch & 0x80) {
                n_bytes++;
                ch <<= 1;
            }
            // skip the current character
            i += n_bytes;
            n_bytes = 0;    // clear
            continue;
        } else {
            // the character is same as ascii
            if (*p == '"') {
                if (case_sensitive) {
                    // right double quote sign
                    i++;
                    case_sensitive = 0;     // reset
                    continue;
                } else {
                    // left
                    i++;
                    case_sensitive = 1;     
                    continue;
                }
            } else {
                if (case_sensitive) {
                    // surrounded by double quotes
                    i++;
                    continue;
                } else {
                    if (isalpha(*p))
                        *p = toupper(*p);
                    i++;
                }
            }
        }
    }
}

void printstring(char* str, size_t len) {
    char *p = str;
    while (*p != '\0') {
        printf("%x, ", *p);
        p++;
    }

    printf("\n");
}

int main() {
    char buf[1024] = {0};
    size_t len = 0;

    int fd = open("test.txt", O_RDONLY);
    if (fd < 0) {
        printf("open failed\n");
        exit(EXIT_FAILURE);
    }

    len = read(fd, buf, sizeof(buf));
    if (utf8_check(buf, len)) {
        printf("utf8 string, len:%ld, code: %s\n", len, buf);
    }

    toupper_with_case_sensitive(buf, len);
    printf("after toupper..............\n");
    printf("%s\n", buf);

    close(fd);
    return 0;
}
