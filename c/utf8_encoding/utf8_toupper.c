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

int utf8_check(const char* str, size_t len) {
    if (NULL == str || len <= 0) {
        return 0;
    }

    size_t i = 0;
    int n_bytes = 0;
    unsigned char ch = 0;

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

char* toupper_with_case_sensitive(char* str, size_t len) {
    if (str == NULL || len <= 0) {
        printf("string is empty\n");
        return NULL;
    }

    size_t i = 0;
    int n_bytes = 0;
    int case_sensitive = 0;
    char *p = NULL;

    while (i < len) {
        p = str + i;

        if (*p & 0x80) {    // maybe Chinese character, not same as ascii
            while (*p & 0x80) {
                n_bytes++;
                *p <<= 1;
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
        printf("%c %x", *p, *p);
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

    printstring(buf, len);
    toupper_with_case_sensitive(buf, len);
    printstring(buf, len);

    close(fd);
    return 0;
}
