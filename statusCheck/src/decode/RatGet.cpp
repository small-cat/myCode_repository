#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <decode/RatGet.h>
#include <exception>

#define MAXLEVEL 20
#define MAX_STRING 1024

using namespace std;

/***********************************************************
 * 函数名: 
 * 函数功能: 
 * 参数说明: 
 * 返回值说明: 
 * 作者: zhangzhen 
 * Time: 2016-04-25 11:35 
***********************************************************/ 
char* GetGPRSWord(int length,int a[],char* record)
{
	
	int level[MAXLEVEL]={0}; //代表第几级别的指针，初始值都是0，代表各个层读到的元素为0。
	int i_level=0; //level[0]=5 level[1]=3 level[2] = 7 第五个大元素的第三个元素的第七个小元素。
	
	//开始遍历record
	char * q = NULL; //遍历时指向record最后一个有效字段的第一个字符的有效位置，取值的时候去第一字符到非有效字符位置  非有效字符是'(' ')' '{' '}' '[' ']' ','
	char * p = record; //遍历时指向record的当前位置。
	int wordLen=0; //当前单词的长度。
	//预处理，从第二个'{'开始查询
	while('\0' != *p)
	{
		if('{'==*p && '{' != *(p+1) )
		{
			q=p+1;
			p=q;
			break;
		}
		p++;
	}

	while( '\0' != *p )
	{ 
		if ( '('==*p || '['==*p || '{'==*p )//碰见(,[,{，i_level+1，代表增加了一层
		{
			i_level++;
			p++;
		}
		else if ( ')'==*p || ']'==*p || '}'==*p )//碰见),],}, i_level-1, 代表减少了一层
		{
			level[i_level]=0;
			i_level--;
			p++;
		}
		else if ( ','==*p )//碰见',' level[i_level]+1, 代表该层的位置已经多读了一个有效数据。
		{
			level[i_level]++;
			p++;
		}
		else //一个普通字符 
		{
			if ( ','==*(p-1) || ')'==*(p-1) || ']'==*(p-1) || '}'==*(p-1) ) //如果上一个是),],},',' q=p
			{
				wordLen=0;
				q=p;
			}
			wordLen++ ; 
			p++;
		}
	
		//判断是否已经遍历到指定位置
		bool flag = true; 
		for (int i = 0;i < length; i++)
		{
			if(level[i] < a[i]) { flag = false; break; };
		}
	
		//如果flag为true;则已经到达指定位置，就挑出while循环。
		if ( flag == true )
			break;
	
	}

	//输出最后的数据
	char * result = (char*) malloc( (wordLen+1)*(sizeof(char)) ) ;
	strncpy(result,q,wordLen);
	result[wordLen] = '\0';
	

	return result;

}

/************************************************************************* 
 * * FUNCTION NAME: GetGPRSWordByComma
 * * DESCRIPTION: 从转售分析阶段的话单中提取需要的字段，文件格式为逗号隔开的文本，但是，因为没有
 * * 规范文档，只能通过逗号个数的位置这种方式来获取。
 * * ARGS: record - 单个话单记录
 * *       number - 第几个逗号
 * * RETURN VALUE: 返回第 number-1 到 第 number 逗号间的值
 * * AUTHOR: Jona
 * * CREATE TIME: 2018-03-07 17:13 
*************************************************************************/ 
static char* _getGPRSWordByComma (char* record, int number)
{
    char* tmp = NULL;
    char* result = NULL;
    const char* delim = ",";

    /* return unknow if can not find out the field */
    if (number < 1) {
        result = (char*)malloc (sizeof(char) * (strlen(UNKNOWN) + 1));
        ERRPRINT (NULL==result, exit(EXIT_FAILURE), 0, "RatGet#GetGPRSWordByComma#malloc failed, %d", __LINE__);
        strncpy (result, UNKNOWN, strlen(UNKNOWN));
        result[strlen(UNKNOWN)] = '\0';
        return result;
    }

    /*
     * strtok bugs: strtok(char* str, const char* delim), str will be broken into a sequence 
     * of tokens, so if we use record directly, it will be changed after calling
     * strtok, now we use recordstr instead of variable record
       *
     * NOTE: we can not use malloc to alloc space for recordstr, because strtok will change 
     * recordstr, you can not call free to release space, pointer has been changed
       */
    char recordstr[MAX_STRING] = {0};
    strncpy (recordstr, record, strlen(record));
    recordstr[strlen(record)] = '\0';

    tmp = strtok(recordstr, delim);
    while ((number>1) && (NULL != tmp)) {
        tmp = strtok (NULL, delim);
        number--;
    }

    if ((number > 1) || !tmp) {
        result = (char*)malloc (sizeof(char) * (strlen(UNKNOWN) + 1));
        ERRPRINT (NULL==result, exit(EXIT_FAILURE), 0, "RatGet#GetGPRSWordByComma#malloc failed, %d", __LINE__);
        strncpy (result, UNKNOWN, strlen(UNKNOWN));
        result[strlen(UNKNOWN)] = '\0';
    } else {
        result = (char*)malloc (sizeof(char) * (strlen(tmp) + 1));
        ERRPRINT (NULL==result, exit(EXIT_FAILURE), 0, "RatGet#GetGPRSWordByComma#malloc failed, %d", __LINE__);
    
        strncpy (result, tmp, strlen(tmp));
        result[strlen(tmp)] = '\0';
    }

    return result;
}

char** GetGPRSWord_CHAR (char* record, int number, char** result)
{
    *result = _getGPRSWordByComma (record, number);
    return result;
}

long int* GetGPRSWord_LONGINT (char* record, int number, long int* result)
{
    char* ret = _getGPRSWordByComma (record, number);
    *result = atol (ret);
    free (ret);

    return result;
}

/************************************************************************* 
 * * FUNCTION NAME: ValidDate
 * * DESCRIPTION: judge the format of time string is right or not
 * * standards:
 * * 1. the beginning is "20"; 2. chars in time string are all digit
 * * 3. length is greater equal than 14
 * * ARGS: 
 * * RETURN VALUE: 1 - right, 0 - wrong
 * * AUTHOR: Jona
 * * CREATE TIME: 2018-03-08 11:42 
*************************************************************************/ 
int ValidDate (char* time)
{
    int ret = 1;
    char*p = time;

    // the beginning is "20"
    if (strncmp(p, "20", 2) != 0) {
        ret = 0;
        return ret;
    }
   
    // lenghth >= 14; 20170308102234
    if (strlen(time) < 14) {
        ret = 0;
        return ret;
    }

    // time string must be digit numbers
    while ((*p) != '\0') {
        if (isdigit(*p) == 0) {
            ret = 0;
            break;
        }
        p++;
    }

    return ret;
}

/************************************************************************* 
 * * FUNCTION NAME: ValidPhoneNumber
 * * DESCRIPTION: judge whether phoneNum is valid or not
 * * standards:
 * * 1. length is 11 
 * * 2. the beginning must be 1703, 1705, 1706
 * * 3. phoneNum must be consist of digits[0-9]
 * * ARGS: 
 * * RETURN VALUE: 1 - true, 0 - false
 * * AUTHOR: Jona
 * * CREATE TIME: 2018-03-10 11:24 
*************************************************************************/ 
int ValidPhoneNumber (char* phoneNum) 
{
    int ret = 1;
    if (NULL == phoneNum) {
        ret = 0;
        return ret;
    } 

    if (strncmp(phoneNum, "1703", 4) == 0
            || strncmp(phoneNum, "1705", 4) == 0
            || strncmp(phoneNum, "1706", 4) == 0
            ) {
        ret = 1;
    } else {
        ret = 0;
        return ret;
    }

    char* p = phoneNum;
    while ((*p) != '\0') {
        if (isdigit(*p) == 0) {
            ret = 0;
            break;
        }
        p++;
    }
    return ret;
}
