/**************************************************
    > File name: CDecodeVIG.cpp
    > Author: 
    > mail: 
    > Create Time: 2016-04-26 11:08
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
#include <decode/RatGet.h>
using namespace std;
/***********************************************************
 * 函数名:CDecodeRecord
 * 函数功能:来一条话单，截取主要信息放到节点中。 
 * 参数说明: Record是传过来的字符串指针。
 * 返回值说明: 
 * 作者: zhangzhen 
 * Time: 2016-03-29 19:41
 ***********************************************************/
NodeRecord *CDecodeVIG::DecodeRecord( char* record,const char *pfile )
{
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
	
		SRecord->phoneNum = NULL;//电话号码申请的变量空间在GetNumber这个函数中实现。
		//取号码在第四个结构体的第11个位置,如果第11个不是就取第10个，再不是就返回空。最后一元素要加1
		int numlevel[]={4,12};
		char * num = GetGPRSWord(2,numlevel,record);
		num = this->GetNumber(num);
		if (num == NULL)
		{
			numlevel[1]=11;
			num = GetGPRSWord(2,numlevel,record);
			num = this->GetNumber(num);
		}
		if (num == NULL)
		{   
			free(SRecord->fileName);
			free(SRecord);
			return NULL;
		}   
		SRecord->phoneNum = num;

		//取行号
		SRecord->fileNum=lineNumber;

		//取时间在第五个大元素的第三个小元素的第七个元素。最后一个元素加1。
		int timelevel[] = {5,3,8};
		char *time = NULL;
		time = GetGPRSWord(3,timelevel,record);
		SRecord->startTime=getUnixTime(time);
	
		//取可选字段
                VIG_OP* stropt ;
                stropt=(VIG_OP*)malloc(sizeof(VIG_OP));
                if( NULL == stropt ){
                        printf("malloc fail!");
                        exit(1);
                }
		
		//取APNNI 4,16,6
		int APPNIlevel[] = {4,16,7};
                stropt->APNNI=GetGPRSWord(3, APPNIlevel,record);	

		//取5,3,8 如果 5,3,8 为0 upVolume取5,3,11 否则取5,3,12， downVolume取upVolume后一位。
		int srvcode[] = {5,3,9};
                int flag = 0;
                flag = atoi(GetGPRSWord(3, srvcode,record));

                if(flag == 0)
                {
                        int upVolumelevel[] = {5,3,12};
                        stropt->upVolume = atol( GetGPRSWord(3,upVolumelevel,record) );
                        int downVolumelevel[] = {5,3,13};
                        stropt->downVolume = atol( GetGPRSWord(3,downVolumelevel,record) );
                }else
                {
                        int upVolumelevel[] = {5,3,13};
                        stropt->upVolume = atol( GetGPRSWord(3,upVolumelevel,record) );
                        int downVolumelevel[] = {5,3,14};
                        stropt->downVolume = atol( GetGPRSWord(3,downVolumelevel,record) );
                }

                SRecord->optional = stropt;

		return SRecord;
	}
	catch(exception& e)
	{

		throw e;
	}
};

