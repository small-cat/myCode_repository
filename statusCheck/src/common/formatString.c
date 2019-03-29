/*************************************************************************
	> File Name: formatString.c
	> Author: Scholegance
	> Mail: 1161280746@qq.com 
	> Created Time: 2017-02-15 16:36:49
 ************************************************************************/

#include "common/formatString.h"

/***********************************************************
 * 函数名: void formatRedisSetString (char *str, char* phone, 
 *                            int sts, int valid, int expire)
 * 函数功能: 格式化字符串，插入到 redis set 中 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2017-02-15 16:37 
***********************************************************/ 
void formatRedisSetString (char *str, char* phone, int sts, int valid, int expire)
{
    if (str == NULL) {
        return;
    }

    sprintf (str, "[{PHONE:%s}, {STS:%d}, {VALID:%d}, {EXPIRE:%d}]", 
            phone, sts, valid, expire);
}

/***********************************************************
 * 函数名: int getIntFromString (char* str, const char* key)
 * 函数功能: 
 * 参数说明: 
 * 返回值说明: -1 表示 string 不存在 key 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2017-02-15 18:52 
***********************************************************/ 
int getIntFromString (char* str, const char* key)
{
    if (NULL == str)
        return -1;

    int value = 0;

    char* p = NULL;
    if ((p = strstr (str, key)) == NULL) {
        return -1;
    } else {
        p += strlen (key) + 1;     /* +1 是因为有一个冒号 */
        char *tmp = strchr (p, '}');
        if (NULL == tmp) {
            return -1;
        }

        /* 存放值 */
        char * res = (char*)malloc (sizeof (char) * (tmp - p + 1));
        strncpy (res, p, (tmp - p));
        res[tmp - p] = '\0';

        value = atoi (res);
        free (res);
    }
    return value;
}
