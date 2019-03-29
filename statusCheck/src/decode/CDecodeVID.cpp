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
#include "datamanager/optioncode.h"

/* Start by Jona 2018-03-07 10:22 */
// defined in virtual operator's documentations
#define MSC_LEN 10
#define LACID_LEN 4
#define CELLID_LEN 4
#define PARTIALID_LEN 3
/* End by Jona 2018-03-07 10:22 */

using namespace std;
/***********************************************************
 * 函数名:CDecodeRecord
 * 函数功能:来一条话单，截取主要信息放到节点中。 
 * 参数说明: Record是传过来的字符串指针。
 * 返回值说明: 
 * 作者: zhangzhen 
 * Time: 2016-03-29 19:41
 ***********************************************************/
NodeRecord *CDecodeVID::DecodeRecord( char* record,const char *pfile )
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
		if( NULL == SRecord )
		{   
			DUMPSYSLOG(ERROR, "decode", "CDecodeVID", "DecodeRecord", "malloc fail!, line %d", __LINE__);
			exit(EXIT_FAILURE);
		}

		//取话单文件名
		SRecord->fileName = (char*)malloc(255*sizeof(char));
		if( NULL ==SRecord->fileName )
		{
			DUMPSYSLOG(ERROR, "decode", "CDecodeVID", "DecodeRecord", "malloc fail!, line %d", __LINE__);
			exit(EXIT_FAILURE);
		}
		strncpy(SRecord->fileName,pfile,strlen(pfile));
		SRecord->fileName[strlen(pfile)]='\0';

		//取主被叫类型01-02 01:主叫，02被叫，03呼转
		SRecord->cdrType = atoi(recordstr.substr(0,2).c_str());

		SRecord->phoneNum = NULL;//电话号码申请的变量空间在GetNumber这个函数中实现。
		
		//取号码，18-32位
		char * num = this->GetNumber(recordstr.substr(17,15).c_str());
		if (num == NULL)
		{
			free(SRecord->fileName);
			free(SRecord);
			return NULL;
		}
		SRecord->phoneNum = num;
		
		//取通话时间，81-94位
		SRecord->startTime=getUnixTime(recordstr.substr(80,14).c_str());
	

		//如果是其他值把话单类型置为-1。
		if( SRecord->cdrType < 0 || SRecord->cdrType > 3 ) 
		{
			SRecord->cdrType=-1; 		
		}

		//取行号
		SRecord->fileNum=lineNumber;
			
		//如果crdType为0直接返回null
		if(SRecord->cdrType == -1)
		{
			free(SRecord->fileName);
			free(SRecord);
			return NULL;
		}

		
		//取可选字段
		VID_OP* stropt ;
		stropt=(VID_OP*)malloc(sizeof(VID_OP));
		if( NULL == stropt ){
			printf("malloc fail!");
			exit(EXIT_FAILURE);
		}
   
		stropt->duration = -1;
		stropt->oppNum = (char*)malloc( ( 24+1 )*sizeof(char) );//对端号码是24位
		strncpy(stropt->oppNum,recordstr.substr(32,24).c_str(),24);
		stropt->oppNum[24] = '\0'; 

		stropt->duration = atoi(recordstr.substr(94,6).c_str()); //持续时间是整形

        /* Start by Jona 2018-03-07 10:20 */
        // get msc id, 112-121, length is 10
        stropt->msc = (char*)malloc(sizeof(char) * (MSC_LEN + 1));
        if (NULL == stropt->msc) {
            printf ("CDecodeVID#DecodeRecord#malloc failed, %d\n", __LINE__);
            exit (EXIT_FAILURE);
        }
        strncpy (stropt->msc, recordstr.substr(111, 10).c_str(), MSC_LEN);
        stropt->msc[MSC_LEN] = '\0';

        // get lac id, 122-125, length is 4
        stropt->lac_id = (char*)malloc(sizeof(char) * (LACID_LEN + 1));
        if (NULL == stropt->lac_id) {
            printf ("CDecodeVID#DecodeRecord#malloc failed, %d\n", __LINE__);
            exit (EXIT_FAILURE);
        }
        strncpy (stropt->lac_id, recordstr.substr(121, 4).c_str(), LACID_LEN);
        stropt->lac_id[LACID_LEN] = '\0';

        // get cell id, 126-129, length is 4
        stropt->cell_id = (char*)malloc(sizeof(char) * (CELLID_LEN + 1));
        if (NULL == stropt->cell_id) {
            printf ("CDecodeVID#DecodeRecord#malloc failed, %d\n", __LINE__);
            exit (EXIT_FAILURE);
        }
        strncpy (stropt->cell_id, recordstr.substr(125, 4).c_str(), CELLID_LEN);
        stropt->cell_id[CELLID_LEN] = '\0';

        // get partial id, 272-274, length is 3
        // 000 - no cutting, 001-xxx - the sequence number by cutting, FFF - the last one
        stropt->partial_id = (char*)malloc(sizeof(char) * (PARTIALID_LEN + 1));
        if (NULL == stropt->partial_id) {
            printf ("CDecodeVID#DecodeRecord#malloc failed, %d\n", __LINE__);
            exit (EXIT_FAILURE);
        }
        strncpy (stropt->partial_id, recordstr.substr(270, 3).c_str(), PARTIALID_LEN);
        stropt->partial_id[PARTIALID_LEN] = '\0';
        /* End by Jona 2018-03-07 10:20 */

		SRecord->optional = (void*) stropt;
		
		return SRecord;
	}
	catch(exception& e)
	{
		throw e;
	}
};

