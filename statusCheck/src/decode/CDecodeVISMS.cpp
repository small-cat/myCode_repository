/**************************************************
    > File name: CDecodeVISMS.cpp
    > Author: 
    > mail: 
    > Create Time: 2016-03-29 19:41
    > Copyright 2016 , all rights reserved. 
****************************************************/
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <time.h>
#include "decode/decode.h"
#include <stdlib.h>
#include <stdio.h>
#include <exception>
#include <common/myTime.h>
using namespace std;
/***********************************************************
 * 函数名:CDecodeRecord
 * 函数功能:来一条话单，截取主要信息放到节点中。 
 * 参数说明: Record是传过来的字符串指针。
 * 返回值说明: 
 * 作者: zhangzhen 
 * Time: 2016-03-29 19:41
 ***********************************************************/
NodeRecord *CDecodeVISMS::DecodeRecord( char* record,const char *pfile )
{
    if ((strncmp (record, FILE_HEAD, strlen (FILE_HEAD)) == 0)
            || (strncmp (record, FILE_TAIL, strlen (FILE_TAIL)) == 0)) {
        return NULL;
    }
	string recordstr = record;
	//创建一个节点
	NodeRecord *SRecord = NULL;
	try
	{
		SRecord = (NodeRecord*)malloc(sizeof(NodeRecord));
		if(NULL ==  SRecord ) exit(EXIT_FAILURE);

		//取话单文件名
		SRecord->fileName = (char*)malloc(255*sizeof(char));
		if(NULL ==  SRecord->fileName ) exit(EXIT_FAILURE);

		strncpy(SRecord->fileName,pfile,strlen(pfile));
		SRecord->fileName[strlen(pfile)]='\0';
		//取主被叫类型23-24
		SRecord->cdrType = atoi(recordstr.substr(22,2).c_str());
		//	if ( lineNumber == 1 )
		//		SRecord->cdrType == -1;
		SRecord->phoneNum = NULL;//电话号码申请的变量空间在GetNumber这个函数中实现。
		//取叫号码,如果是主叫就取26——40位，被叫就取41-55位。
		if(SRecord->cdrType == 0)//mo
		{
			char * num = this->GetNumber(recordstr.substr(25,15).c_str());
			if (num == NULL)
			{
				free(SRecord->fileName);
				free(SRecord);
				return NULL;
			}
			SRecord->phoneNum = num;
		}

		else if ( SRecord->cdrType == 1 ) //mt
		{
			char * num = GetNumber(recordstr.substr(40,15).c_str());
			if (num == NULL)
			{
				free(SRecord->fileName);
				free(SRecord);
				return NULL;
			}
			SRecord->phoneNum = num;

		}
		//如果不等于1也不等于0就就把话单类型置为-1。
		else 
		{
			SRecord->cdrType=-1; 		
		}
		//取行号
		SRecord->fileNum=lineNumber;
		//取时间
		SRecord->startTime=getUnixTime(recordstr.substr(74,14).c_str());
		
		//如果crdType为0直接返回null
		if(SRecord->cdrType == -1)
		{
			free(SRecord->fileName);
			free(SRecord);
			return NULL;
		}
	
		
		//取可选字段	
		VISMS_OP* stropt = NULL;
		stropt=(VISMS_OP*)malloc(sizeof(VISMS_OP));
		if( NULL == stropt ){
			printf("malloc fail!");
			exit(1);
		}

		//取对端号码
		stropt->oppNum = (char*)malloc( ( 15+1 )*sizeof(char) );//对端号码是15位
		if(SRecord->cdrType == 0)//mo
		{
			strncpy(stropt->oppNum,recordstr.substr(40,15).c_str(),15);
		}
		else if ( SRecord->cdrType == 1 ) //mt
		{
			strncpy(stropt->oppNum,recordstr.substr(25,15).c_str(),15);
		}
		stropt->oppNum[15]='\0';
		//取申请时间
		stropt->applyTime = (char*)malloc( ( 14+1 )*sizeof(char) ); //申请时间14位
		strncpy(stropt->applyTime,recordstr.substr(88,14).c_str(),14); //89-102位,因该叫做finishTime
		stropt->applyTime[14]= '\0';

        SRecord->optional = (void*) stropt;
		return SRecord;
	}
	catch(exception& e)
	{

		throw e;
	}
};

