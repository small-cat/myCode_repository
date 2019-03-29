/**************************************************
    > File name: CDecodeVMMS.cpp
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
NodeRecord *CDecodeVMMS::DecodeRecord( char* record,const char *pfile )
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

		//取主被叫类型设为67-68
		SRecord->cdrType = atoi ( recordstr.substr(66,2).c_str() );
		//如果不等于3也不等于0就返回
		if(SRecord->cdrType != 0 && SRecord->cdrType != 3)
		{
			free(SRecord->fileName);
			free(SRecord);
			return NULL;		
		}

		SRecord->phoneNum = NULL;//电话号码申请的变量空间在GetNumber这个函数中实现。
		//取号码,计费用户号码Charge_dn:28－51
		char * num = this->GetNumber(recordstr.substr(27,24).c_str());
		if (num == NULL)
		{   
			free(SRecord->fileName);
			free(SRecord);
			return NULL;
		}   
		SRecord->phoneNum = num;

		//取行号
		SRecord->fileNum=lineNumber;

		//取时间Receive_time 241－254
		SRecord->startTime=getUnixTime(recordstr.substr(240,14).c_str());
	
		//取可选字段
		VMMS_OP* stropt ;
		stropt=(VMMS_OP*)malloc(sizeof(VMMS_OP));
		if( NULL == stropt ){
			printf("malloc fail!");
			exit(1);
		}

		//取对端号码
		stropt->oppNum = (char*)malloc( ( 30+1 )*sizeof(char) );//对端号码是30位
		if(SRecord->cdrType == 0)//mo
		{
			strncpy(stropt->oppNum,recordstr.substr(98,30).c_str(),30); // 99-128
		}
		else if ( SRecord->cdrType == 3 ) //mt
		{
			strncpy(stropt->oppNum,recordstr.substr(68,30).c_str(),30); // 69-98
		}
		stropt->oppNum[30]='\0';

		//取接收时间241-254
		stropt->receiveTime = (char*)malloc( ( 14+1 )*sizeof(char) );//接收时间是14位
		strncpy(stropt->receiveTime,recordstr.substr(226,14).c_str(),14); //227-240 应该取发送时间
		stropt->receiveTime[14]='\0';

		SRecord->optional = (void*) stropt; 

		return SRecord;
	}
	catch(exception& e)
	{

		throw e;
	}
};

