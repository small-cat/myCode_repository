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
NodeRecord *CDecodeVGG::DecodeRecord( char* record,const char *pfile )
{
    /* 判断是否是尾记录 */
    if ((strncmp (record, FILE_HEAD, strlen(FILE_HEAD)) == 0)
           || (strncmp (record, FILE_TAIL, strlen(FILE_TAIL)) == 0)){ // tail record
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

		//GPRS话单主被叫类型设为0
		SRecord->cdrType = 0;
	
		SRecord->phoneNum = (char*)malloc( (15+1)*sizeof(char) );//IMSI15位
		//取号码:国际业务取IMSI_number 3-17位
		snprintf(SRecord->phoneNum,16,"%s",recordstr.substr(2,15).c_str());
		SRecord->phoneNum[15]='\0';

		if ( strncmp(SRecord->phoneNum,"4600",4) != 0 )//IMSI_number 合法号码，前四位是4600
		{   
			free(SRecord->phoneNum);
			free(SRecord->fileName);
			free(SRecord);
			return NULL;
		}

		//取行号
		SRecord->fileNum=lineNumber;

		//取时间187-200
		SRecord->startTime=getUnixTime(recordstr.substr(186,14).c_str());
		
		//取可选字段 （APNNI,upVolume,downVolume）
		VGG_OP* stropt ;
                stropt=(VGG_OP*)malloc(sizeof(VGG_OP));
                if( NULL == stropt ){
                        printf("malloc fail!");
                        exit(1);
                }
		
		//取APNNI 90-152 63位
		stropt->APNNI =  (char*)malloc((63+1)*sizeof(char));
		if( NULL ==  stropt->APNNI ) exit(EXIT_FAILURE);
		strncpy(stropt->APNNI,recordstr.substr(89,63).c_str(),63);
		stropt->APNNI[63] = '\0';
		
		//取upVolume 从299到313 15位
		stropt->upVolume = atol(recordstr.substr(298,15).c_str());
		//取downVolume 位置314-328 15为
        	stropt->downVolume = atol(recordstr.substr(313,15).c_str());        
	
		SRecord->optional = (void*) stropt;

		return SRecord;
	}
	catch(exception& e)
	{

		throw e;
	}
};

