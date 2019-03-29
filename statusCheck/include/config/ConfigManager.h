/*=======================================================================
*	File name    :	ConfigManager.cpp
*	Authored by    :	wzhenyu
*	Date	:
*	Description	:
*
*	Modify	:
*======================================================================*/
#ifndef __CONFIGMANAGER_H__
#define __CONFIGMANAGER_H__


#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>

#include "config/MyStr.h"
#include "global/globaldef.h"

#define DOWNCHECK_CONFIG_INI 0

/*定义配置文件名称*/
const char INI_CFG_FILE_NAME[2][64] = 
							{
								"downcheck_config.ini",
								""
							};

class CConfigManager
{
public:
	CConfigManager();
	~CConfigManager();

	bool GetValue(int CfgType, const char* cSection, const char* cItem, int& nVal); //获取配置
	bool GetValue(int CfgType, const char* cSection, const char* cItem, char* strVal);

	int Init();
	bool Load(char* filename); //加载配置文件
	char* FindValue(const char* cItem); //查找配置项cItem的参数配置
	int Start(); //加载系统启动必须配置

private:
	char m_szLocalCfgPath[MAX_PATH+1];

public:
	CStr csList[512];	//直接将配置文件读取到该数组中，然后每次直接从数组中查找就可以
};
extern CConfigManager *g_pConfigManager;

#endif    // #ifndef __CONFIGMANAGER_H__

