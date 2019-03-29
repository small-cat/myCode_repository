/**************************************************
    > File name: CDecodeVIM.cpp
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
NodeRecord *CDecodeVIM::DecodeRecord( char* record,const char *pfile )
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
		//取主被叫类型43-44
		SRecord->cdrType = atoi(recordstr.substr(42,2).c_str());
		//	if ( lineNumber == 1 )
		//		SRecord->cdrType == -1;
		SRecord->phoneNum = NULL;//电话号码申请的变量空间在GetNumber这个函数中实现。
		//取叫号码,如果是主叫就取45——68位，被叫就取69-92位。
		if(SRecord->cdrType == 21)//mo
			{
				char * num = this->GetNumber(recordstr.substr(44,24).c_str());//取45——68位,共24位
				if (num == NULL)
				{
					free(SRecord->fileName);
					free(SRecord);
					return NULL;
				}
				SRecord->phoneNum = num;
			}

		else if ( SRecord->cdrType == 28 ) //mt
		{
			char * num = GetNumber(recordstr.substr(68,24).c_str());//69-92位
			if (num == NULL)
			{
				free(SRecord->fileName);
				free(SRecord);
				return NULL;
			}
			SRecord->phoneNum = num;

		}
		//不等于21 28 之一就把话单类型置为-1。
		else 
		{
			SRecord->cdrType=-1; 		
		}
		//取行号
		SRecord->fileNum=lineNumber;
		//取时间157——170,共14位
		SRecord->startTime=getUnixTime(recordstr.substr(156,14).c_str());
		
		//如果crdType为0直接返回null
		if(SRecord->cdrType == -1)
		{
			free(SRecord->fileName);
			free(SRecord);
			return NULL;
		}
		
		//增加可选字段
		VIM_OP* stropt ;
		stropt=(VIM_OP*)malloc(sizeof(VIM_OP));
                if( NULL == stropt ){
                        printf("malloc fail!");
                        exit(1);
                }   
		//对端号码
		stropt->oppNum = (char*)malloc( ( 24+1 )*sizeof(char) );//对端号码是24位
                if(SRecord->cdrType == 21)//mo
                {
                        strncpy(stropt->oppNum,recordstr.substr(68,24).c_str(),24);//主叫取号码69-92
                }
                else if ( SRecord->cdrType == 28 ) //mt
                {
                        strncpy(stropt->oppNum,recordstr.substr(44,24).c_str(),24);//被叫取号码45-68
                }
		stropt->oppNum[24]='\0';
		//取申请时间
		stropt->applyTime = (char*)malloc( ( 14+1 )*sizeof(char) ); //申请时间14位
		strncpy(stropt->applyTime,recordstr.substr(170,14).c_str(),14); //171-184 位,应该取finishtime
		stropt->applyTime[14]= '\0';
		
                SRecord->optional = (void*) stropt;		
		
		return SRecord;
	}
	catch(exception& e)
	{

		throw e;
	}
};

