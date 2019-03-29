/**************************************************
    > File name: CFactoryDecode.cpp
    > Author: 
    > mail: 
    > Create Time: 2016-03-28 19:41
    > Copyright 2016 , all rights reserved. 
****************************************************/
#include <iostream>
#include "decode/factorydecode.h"
#include <stdlib.h>
#include <dirent.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <config/ConfigManager.h>
#include <decode/decode.h>
#include <log/log.h>
#define  OPENDIR_FILE 1
#define  MAX_FILEPATH 128
/***********************************************************
 * 函数名:CFactory::createDecode
 * 函数功能:判断业务类型，创建CDecode类的实例。并执行。
 * 参数说明:输入，文件名。 
 * 返回值说明:正常返回0,不识别的异常文件，返回1；
 * 作者: zhangzhen 
 * Time: 2016-03-28 19:43 
***********************************************************/ 
 
int CFactoryDecode::createDecode(const char * file)
{
	CDecode *p = NULL;
	if ( strncmp(file,"VID2",4) == 0 )
		p = new CDecodeVID();
	else if ( strncmp(file,"VISMS2",6) == 0 )
		p = new CDecodeVISMS();
	else if ( strncmp(file,"VMMS2",5) == 0 )
		p = new CDecodeVMMS();
	else if ( strncmp(file,"VIM2",4) == 0 )
		p = new CDecodeVIM();
	else if ( strncmp(file,"VIMM2",5) == 0 )
		p = new CDecodeVIMM();
	else if ( strncmp(file,"VI2",3) == 0 )
		p = new CDecodeVI();
	else if ( strncmp(file,"VGG2",4) == 0 )
		p = new CDecodeVGG();
	else if ( strncmp(file,"VLTE2",5) == 0 )
		p = new CDecodeVLTE();
	else if ( strncmp(file,"VIG2",4) == 0 )
		p = new CDecodeVIG();
	else 
		return 1;
	p->DecodeFile(file,pManager);
	
	delete p;
	return 0;
}

/***********************************************************
 * 函数名:Factory::startWork()
 * 函数功能: 开始工作，扫描指定目录，读取目录下的文件，逐个交给 CFactory::createDecode(const char * file)；
 * 参数说明: 
 * 返回值说明: 
 * 作者: zhangzhen 
 * Time: 2016-03-28 20:40 
***********************************************************/ 
int CFactoryDecode::startWork()
{
	struct dirent **namelist;
	int n;	
	char filepath[128] = {0}; 
	
	CConfigManager* conf = new CConfigManager();
	conf->GetValue(DOWNCHECK_CONFIG_INI, "decode", "decodeFilePath", filepath);
	delete conf;	
	DUMPSYSLOG(INFO, "decode", "CFactoryDecode", "startWork", "---filepath is %s:",filepath );
	DUMPSYSLOG(TRACE, "decode", "CFactoryDecode", "startWork", "----Begin to Find files----- , line %d", __LINE__);
	n = scandir(filepath, &namelist, 0, alphasort);
	if (n < 0)
	{

		DUMPSYSLOG(INFO, "decode", "CFactoryDecode", "startWork", "----NO file this time----- , line %d", __LINE__);
		return OPENDIR_FILE;
	}
	else 
	{
		while (n--)
		{
			if (namelist[n]->d_type == DT_REG)
			{
				DUMPSYSLOG(INFO, "decode", "CFactoryDecode", "startWork", "Start to deal %s:",namelist[n]->d_name);
				int isRecordFile = CFactoryDecode::createDecode(namelist[n]->d_name);//解码文件并入datamanager。
				char *cmd = NULL; //正常文件要删除，异常文件要移走
				cmd = (char*)malloc((MAX_FILEPATH + 6 + 30 )*sizeof(char));
				if (NULL == cmd ) exit(EXIT_FAILURE);
				
				char *fullname = (char*)malloc((strlen(filepath) + 30 + 1 )*sizeof(char));//获取文件全名
				if (NULL == fullname ) exit(EXIT_FAILURE);

				if (filepath[strlen(filepath)-1] != '/')
				{
					sprintf(fullname, "%s/", filepath);
				}
				else
				{
					strncpy(fullname,filepath,strlen(filepath));//获取路径
					fullname[strlen(filepath)] = '\0';
				}
				strncat(fullname,namelist[n]->d_name,strlen(namelist[n]->d_name));//路径加上文件名
				fullname[strlen(fullname)] = '\0';
				if (0 == isRecordFile)
				{
					sprintf(cmd, "rm -f %s", fullname);
					DUMPSYSLOG(INFO, "decode", "CFactoryDecode", "startWork", "delete %s",namelist[n]->d_name);
				
				}
				else if (1 == isRecordFile)
				{
					char movepath[128];
					CConfigManager* conf = new CConfigManager();
					conf->GetValue(DOWNCHECK_CONFIG_INI, "decode", "decodeMovePath", movepath);//获取文件的路径
					delete conf;
					sprintf(cmd, "mv -f %s %s", fullname,movepath);
					DUMPSYSLOG(INFO, "decode", "CFactoryDecode", "startWork", "remove %s to %s",namelist[n]->d_name,movepath);
				}
				
				system(cmd);
				free(cmd);
				free(fullname);
			}
			/* Start by wuzy 2016-06-12 17:19 */
			free(namelist[n]);
			/* End by wuzy 2016-06-12 17:19 */
		}
		free(namelist);
	}
	DUMPSYSLOG(TRACE, "decode", "CFactoryDecode", "startWork", "----End to Find files----- , line %d", __LINE__);
	return 0;
}
/***********************************************************
 * 函数名: 
 * 函数功能:构造函数 
 * 参数说明: 
 * 返回值说明: 
 * 作者: zhangzhen 
 * Time: 2016-04-08 11:20 
***********************************************************/
CFactoryDecode::CFactoryDecode(CDataManager *p)
{
    /* Start by Jona 2018-03-16 15:21 */
    if (NULL == p) {
        pManager = new CDataManager();
    } else {
        pManager = p;
    }
    /* End by Jona 2018-03-16 15:21 */
}

CFactoryDecode::~CFactoryDecode() 
{
    /* Start by Jona 2018-03-16 15:21 */
    if (pManager) {
        delete pManager;
        pManager=NULL;
    }
    /* End by Jona 2018-03-16 15:21 */
}
