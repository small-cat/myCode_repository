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
NodeRecord *CDecodeVI::DecodeRecord( char* record,const char *pfile )
{
    if ((strncmp (record, FILE_HEAD, strlen (FILE_HEAD)) == 0)
           || (strncmp (record, VI_FILE_TAIL, strlen (VI_FILE_TAIL)) == 0)) {
        return NULL;
    }

	string recordstr = record;
    int time_zone_offset = 1;
    char time_zone[2] = {0};
    int utc_offset = 0;         /* 世界时偏移量 */
	//创建一个节点
	NodeRecord *SRecord = NULL;
	try
	{
		SRecord = (NodeRecord*)malloc(sizeof(NodeRecord));
		//取话单文件名
		SRecord->fileName = (char*)malloc(255*sizeof(char));
		strncpy(SRecord->fileName,pfile,strlen(pfile));
		SRecord->fileName[strlen(pfile)]='\0';
		//取主被叫类型01-02
		SRecord->cdrType = atoi(recordstr.substr(0,2).c_str());
		//	if ( lineNumber == 1 )
		//		SRecord->cdrType == -1;
		//取叫国际出访业务取imsi_number，主被叫都是3-17位。赋值给phonenum。
		SRecord->phoneNum = (char*)malloc( (15+1)*sizeof(char) );//IMSI15位
		snprintf(SRecord->phoneNum,16,"%s",recordstr.substr(2,15).c_str());
		SRecord->phoneNum[15]='\0';

		if ( strncmp(SRecord->phoneNum,"4600",4) != 0 )//imsi的合法号码至少前四位要是4600
		{
			free(SRecord->phoneNum);
			free(SRecord->fileName);
			free(SRecord);
			return NULL;
		}
	
		//取行号
		SRecord->fileNum=lineNumber;
		
		//取时间57-70位
		SRecord->startTime=getUnixTime(recordstr.substr(56,14).c_str());
		
		//如果crdType不为1也不为2 直接返回null
		if( (SRecord->cdrType != 1) && (SRecord->cdrType != 2) )
		{
			free(SRecord->fileName);

			/* Start by wuzy 2016-06-13 15:24 , 缺少这句，造成内存泄漏 */
			free(SRecord->phoneNum);
			/* End by wuzy 2016-06-13 15:24 */

			free(SRecord);
			return NULL;
		}

		//取可选字段
        VI_OP* stropt ;
        stropt=(VI_OP*)malloc(sizeof(VI_OP));
        if( NULL == stropt ){
            printf("malloc fail!");
            exit(1);
        }

        stropt->duration = -1;
        //取对端号码
        stropt->oppNum = (char*)malloc( ( 24+1 )*sizeof(char) );//对端号码是24位
        strncpy(stropt->oppNum,recordstr.substr(32,24).c_str(),24);//从33到56位
        stropt->oppNum[24] = '\0';
        //取业务类型98-100位 int型
        stropt->serviceCode = atoi(recordstr.substr(97,3).c_str());
		//取业务代码101-104 int型
		stropt->serviceType = atoi(recordstr.substr(100,3).c_str());
                //通话时长71-76位 int型
		stropt->duration = atoi(recordstr.substr(70,6).c_str());

		//取时区信息188-192位 int型
        strncpy(stropt->UTC_Offset, recordstr.substr(187, 5).c_str(), 5);
        stropt->UTC_Offset[5] = '\0';

        strncpy(time_zone, recordstr.substr(187, 1).c_str(), 1);
        time_zone[1] = '\0';
        if (strcmp (time_zone, "+") == 0) { 
            time_zone_offset = 1;
        } else if (strcmp (time_zone, "-") == 0) {
            time_zone_offset = -1;
        }
        utc_offset = atoi(recordstr.substr(188,4).c_str()) * time_zone_offset;

		SRecord->optional = (void*)stropt;

        /* 话单在国内采集的话，使用的就是中国标准时间，不需要转换 */
		SRecord->startTime = SRecord->startTime - utc_offset/100*3600 + 8*3600;	
		
		return SRecord;
	}
	catch(exception& e)
	{

		throw e;
	}
};

