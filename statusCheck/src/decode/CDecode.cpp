/**************************************************
    > File name: CDecode.cpp
    > Author: 
    > mail: 
    > Create Time: 2016-03-28 16:41
    > Copyright 2016 , all rights reserved. 
****************************************************/
#include <iostream>
#include <fstream>
#include <string.h>
#include <time.h>
#include "decode/decode.h"
#include <dirent.h>
#include <log/log.h>
#include <stdio.h>
#include <stdlib.h>
#include "config/ConfigManager.h"
#include "datamanager/datamanager.h"
#include "output/output.h"

#define OPENDIR_FILE 10
#define MAX_FILEPATH 128
using namespace std;

/***********************************************************
 * 函数名: DecodeFile
 * 函数功能: 负责读取指定的文件，逐条读取记录，逐条把记录给DecordRecord这个函数处理，并处理最后一个尾节点。并把处理过的文件放入备份目录。
 * 参数说明: 输入：文件名
 * 返回值说明: 正常返回0 异常: 异常文件返回1
 * 作者: zhangzhen 
 * Time: 2016-03-25 17:21 
***********************************************************/ 
int CDecode::DecodeFile(const char* file,CDataManager *dataManager)
{
	char buffer[1000] = {0};//buffer用来接收文件的一条记录。
	//cout <<"in CDecode::DecodeFile :" << file << endl;
	char  pathfile[MAX_FILEPATH]= {0};//pathfile：文件名
	sprintf(pathfile, "%s%s",filepath, file);//filepath是路径。在属性中定义。
	//std::cout << pathfile << std::endl;
	ifstream CDRFile(pathfile, ios::in) ;//输入文件流。
	//valid_record用来记录一个文件插入成功的记录条数。
	int valid_record = 0;

	if( ! CDRFile.is_open() )
	{
		DUMPSYSLOG(ERROR, "decode", "CDecode", "DecodeFile", "can not open filename list!, line %d", __LINE__);
		ERRPRINT(1, return 1, 0, "decode#CDecode#DecodeFile# line %d", __LINE__);

	}
    while ( CDRFile.peek() != EOF )
	{
		lineNumber++;
		CDRFile.getline (buffer,1000);
		DUMPSYSLOG(INFO, "decode", "CDecode", "DecodeFile", "deal file %s,line %d",file,lineNumber );//开始将记录插入队列
		try
		{
			NodeRecord *p =this->DecodeRecord(buffer,file);	
			if ( dataManager->AddData(p) == 1 ) //放入链表队列，
			{
				valid_record++;
				DUMPSYSLOG(INFO, "decode", "CDecode", "DecodeFile", "insert file:%s,line:%d,number:%s,time:%d, OK!",file,lineNumber,p->phoneNum,p->startTime );
			}
			else 
			{
				DUMPSYSLOG(FATAL, "decode", "CDecode", "DecodeFile", "insert file %s,line %d FAIL!\n",file,lineNumber );
			}
		}
		catch(exception& e)
		{
			DUMPSYSLOG(FATAL, "decode", "CDecode", "DecodeFile", "insert file %s,line %d unexcept!",file,lineNumber );
			cout << "this record error" <<e.what()<<endl;
		}
	}
	//如果打开的文件是一个空文件就打到日志里面

	if (strstr(pathfile, "VIG")==NULL && strstr(pathfile, "VLTE")==NULL)
		lineNumber-=2;
	
	DUMPSYSLOG(WARN, "decode", "CDecode", "DecodeFile", "%s total_line:%d valid_record:%d",file,lineNumber,valid_record);
	DUMPOUTPUT_FILENAME((char*)file, lineNumber, valid_record);
	
	CDRFile.close();//关闭文件

	return 0;
}

/***********************************************************
 * 函数名: 
 * 函数功能: 构造函数，给属性初始值
 * 参数说明: 
 * 返回值说明: 
 * 作者: zhangzhen 
 * Time: 2016-03-31 18:34 
***********************************************************/ 
CDecode::CDecode()
{
	lineNumber=0;
	filepath = NULL;

	char path1[255];
	memset(path1, 0, sizeof(path1));
    CConfigManager* conf = new CConfigManager();
	conf->GetValue(DOWNCHECK_CONFIG_INI, "decode", "decodeFilePath", path1);

	if(strlen(path1) == 0)
	{
	}
	else
	{
		filepath = (char*)malloc(sizeof(char)*(strlen(path1) + 1 + 1));
		if ( NULL  == filepath )
		{
			DUMPSYSLOG(ERROR, "decode", "CDecode", "CDecode()", "malloc fail!, line %d", __LINE__);
			ERRPRINT(NULL==filepath, goto ERR1, 0, "decode#CDecode#CDecode(), line %d", __LINE__);
		}
		if (path1[strlen(path1) - 1] != '/')
		{
			sprintf(filepath, "%s/", path1);
		}
		else
		{
			strncpy(filepath, path1, strlen(path1));
			filepath[strlen(path1)] = '\0';
		}
		
	}
	delete conf;
	return;
ERR1:
	delete conf;
	exit(EXIT_FAILURE);
}

CDecode::~CDecode()
{
	lineNumber = 0;

	if (NULL != filepath)
	{
		free(filepath);
		filepath = NULL;
	}
}

char * CDecode::GetNumber(const char *oriNum)
{
	if ( NULL == oriNum ) return NULL;

	const char *num  = strstr(oriNum,"170");
	if( num == NULL || strlen(num) < 11 )
		return NULL;
	
	char *Number = (char *)malloc(sizeof(char)*12);//另外开辟一块空间赋值给num，并释放oriNum
	if( NULL == Number)
	{
		 DUMPSYSLOG(ERROR, "decode", "CDecode", "GetNumber", "malloc fail!, line %d", __LINE__);
		 exit(EXIT_FAILURE);
	}

	strncpy(Number,num,11);
	Number[11]='\0';

	return Number;

}
