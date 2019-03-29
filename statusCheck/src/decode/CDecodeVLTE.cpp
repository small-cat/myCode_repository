/**************************************************
    > File name: CDecodeVLTE.cpp
    > Author: 
    > mail: 
    > Create Time: 2016-04-26 9:08
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
NodeRecord *CDecodeVLTE::DecodeRecord( char* record,const char *pfile )
{
	char* recordstr = record;
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
        // TODO: phoneNum
        // user number 在第16个逗号和15个逗号之间，如果不是，
        // 说明 imei 为空，那么号码就是在第15和14个逗号之间
        int phoneIdx = 16;
        GetGPRSWord_CHAR (recordstr, phoneIdx, &SRecord->phoneNum);
		if (ValidPhoneNumber(SRecord->phoneNum) == 0) {
            // phone number is not valid
            // 在 GetGPRSWord_CHAR 使用malloc申请了内存，所以需要释放
            free(SRecord->phoneNum);    
            phoneIdx--;
            GetGPRSWord_CHAR (recordstr, phoneIdx, &SRecord->phoneNum);
        }

		if (ValidPhoneNumber(SRecord->phoneNum) == 0) // number can not be identified
		{   

            DUMPSYSLOG(ERROR, "decode", "CDecodeVLTE", "DecodeRecord", 
                    "can not decode record, phoneNum is not correct, "
                    "filename:%s, line:%ld, [%s]", SRecord->fileName, 
                    SRecord->fileNum, recordstr);

			free(SRecord->fileName);
            free(SRecord->phoneNum);
			free(SRecord);
			return NULL;
		}   

		//取行号
		SRecord->fileNum=lineNumber;

        // optional fields
        VLTE_OP* vlte_op = (VLTE_OP*)malloc(sizeof(VLTE_OP));
        if (NULL == vlte_op) {
            printf ("CDecodeVLTE#DecodeRecord#malloc failed, %d\n", __LINE__);
            exit (EXIT_FAILURE);
        }

        // TODO: SGSN, GGSN, APNNI
        // SGSN 在phoneNum 往后数 8 个逗号的位置,在往后是RAC
        // 如果是RAC，RAC code是64f000/64f070
        // GGSN 在 SGSN 后数2个逗号,如果存在RAC,在RAC后数2个逗号
        // APNNI 在 GGSN 之后
        int sgsnIdx = phoneIdx + 8;
        GetGPRSWord_CHAR (recordstr, sgsnIdx, &(vlte_op->sgsnAddr));

        int ggsnIdx = sgsnIdx + 2;
        char * RAC = NULL;
        GetGPRSWord_CHAR (recordstr, sgsnIdx + 1, &RAC);
        if (strncmp(RAC, "64f0", 4) == 0) {
            ggsnIdx++;
        }
        GetGPRSWord_CHAR (recordstr, ggsnIdx, &(vlte_op->ggsnAddr));

        // APNNI is after GGSN
        GetGPRSWord_CHAR (recordstr, ggsnIdx+1, &(vlte_op->APNNI));
        free (RAC); // look into definition in RatGet.cpp
        
        // TODO: startTime, upVolume, downVolume
        // startTime在 48-49, 49-50,或者50-51, 51-52之间，upVolume 在后面5个位置,
        // downVolume在startTime后6个位置
        int stimeIdx = 49;
        char* time = NULL;
        GetGPRSWord_CHAR (recordstr, stimeIdx, &time);  // 49
        if (ValidDate(time) == 0) {
            free (time);
            stimeIdx++;
            GetGPRSWord_CHAR (recordstr, stimeIdx, &time); // 50

            if (ValidDate(time) == 0) {
                free (time);
                stimeIdx++;
                GetGPRSWord_CHAR (recordstr, stimeIdx, &time); // 51

                if (ValidDate(time) == 0) {
                    free (time);
                    stimeIdx++;
                    GetGPRSWord_CHAR (recordstr, stimeIdx, &time); // 52
                }
            }
        }

        if (ValidDate(time) != 0) {
            SRecord->startTime=getUnixTime(time);
            free (time);
        } else {
            DUMPSYSLOG (ERROR, "decode", "CDecodeVLTE", "DecodeRecord", 
                    "can not decode record, startTime is not correct, "
                    "filename:%s, line:%ld, [%s]", SRecord->fileName, 
                    SRecord->fileNum, recordstr);

            free (time);
            free (SRecord->fileName);
            free (SRecord->phoneNum);
            free (SRecord);
            SRecord = NULL;

            free (vlte_op->sgsnAddr);
            free (vlte_op->ggsnAddr);
            free (vlte_op->APNNI);
            free (vlte_op);
            vlte_op = NULL;

            return NULL;
        }

        GetGPRSWord_LONGINT (recordstr, stimeIdx+5, &(vlte_op->upVolume));
        GetGPRSWord_LONGINT (recordstr, stimeIdx+6, &(vlte_op->downVolume));
		
		SRecord->optional = (void*)vlte_op;
		return SRecord;
	}
	catch(exception& e)
	{
		throw e;
	}
};

