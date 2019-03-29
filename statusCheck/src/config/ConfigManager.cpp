/**
 *filename: ConfigManager.cpp
 *func: define interface to get data from configure files
 *
 *
 */
 
#include "config/ConfigManager.h"
#include <fstream>

/* 全局变量，获取配置文件路径 */
/* 多线程原因，谨慎使用全局变量 */
/* be careful to use global variables when multi-threads */
/* static char g_szWorkPath[MAX_PATH]; */

/***********************************************************
 * 函数名: CConfigManager::CConfigManager()
 * 函数功能: 构造函数
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-25 11:49 
***********************************************************/ 
CConfigManager::CConfigManager()
{
	if(!Init())
		exit(EXIT_FAILURE);
}

/***********************************************************
 * 函数名: ~CConfigManager()
 * 函数功能: 析构函数
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-25 11:49 
***********************************************************/ 
CConfigManager::~CConfigManager()
{
	memset(m_szLocalCfgPath, 0, sizeof(m_szLocalCfgPath));
	/*memset(csList, 0, sizeof(csList));*/
}

/***********************************************************
 * 函数名: Init()
 * 函数功能: 初始化配置管理对象
 * 参数说明: 
 * 返回值说明: 成功返回1，失败返回0
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-25 15:30 
***********************************************************/ 
int CConfigManager::Init()
{
	memset(csList, 0, sizeof(csList));
	memset(m_szLocalCfgPath, 0, sizeof(m_szLocalCfgPath));

	char g_szWorkPath[MAX_PATH];
	memset(g_szWorkPath, 0, sizeof(g_szWorkPath)); //this is a global variable

	/* 获取当前程序的绝对路径，然后根据相对路径找到配置文件路径*/
	/*get_module_file_path( "downcheck", g_szWorkPath, MAX_PATH);*/

	/* getcwd to get current path will encounter problems */
	/* getcwd(g_szWorkPath, MAX_PATH); */
	/* ERRPRINT(NULL==g_szWorkPath, return 0, 0, "ConfigManager#CConfigManager#Init, line %d, g_szWorkPath [%s]", __LINE__, g_szWorkPath); */

	int cnt = readlink("/proc/self/exe", g_szWorkPath, MAX_PATH);
	ERRPRINT(cnt<0 || cnt>=MAX_PATH, exit(EXIT_FAILURE), 0, "CConfigManager#Init#line %d", __LINE__);

	//获取当前目录绝对路径，即去掉程序名
	int i;
	for (i=cnt; i>=0; i--)
	{
		if (g_szWorkPath[i] == '/')
		{
			g_szWorkPath[i] = '\0';
			break;
		}
	}

	strcat(g_szWorkPath,"/../config/");
	strncpy(m_szLocalCfgPath, g_szWorkPath, strlen(g_szWorkPath));

	ERRPRINT(access(m_szLocalCfgPath, F_OK)!=0, return 0, 0, "ConfigManager#CConfigManager#Init, line %d, m_szLocalCfgPath [%s]", __LINE__, m_szLocalCfgPath);

	return 1;
}

/***********************************************************
 * 函数名: GetValue(int CfgType, const char* cSection, const char* cItem, int& nVal)
 * 函数功能: 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-25 15:05 
***********************************************************/ 
bool CConfigManager::GetValue(int CfgType, const char* cSection, const char* cItem, int& nVal)
{
#ifdef DEBUG_TEST
	printf("CfgType:%d, cSection:%s\n",CfgType, cSection); //log: find cSection in the config file INI_CFG_FILE_NAME[CfgType]
#endif

	/* 当针对不同配置文件时，使用全局配置管理对象，需要在 Load 之前将 csList 置空*/
	/*memset(csList, 0, sizeof(csList));*/

	/* 拼接配置文件路径 */
	char szPath[MAX_PATH];
	strcpy(szPath, m_szLocalCfgPath);
	strcat(szPath, INI_CFG_FILE_NAME[CfgType]);
	Load(szPath);

	nVal = atoi(FindValue(cItem));
	return true;
}

bool CConfigManager::GetValue(int CfgType, const char* cSection, const char* cItem, char* strVal)
{
#ifdef DEBUG_TEST
	printf("CfgType:%d, cSection:%s\n",CfgType, cSection);
#endif
	
	char szPath[MAX_PATH];
	strcpy(szPath, m_szLocalCfgPath);
	strcat(szPath, INI_CFG_FILE_NAME[CfgType]);
	Load(szPath);

	/* 此处不能使用 strcpy，因为当src 是空时，会发生段错误 segmentation fault */
	/* 使用strncpy，能够保证拷贝的长度，同时需要控制结束空字符 */
	char* tmp = NULL;
	if ((tmp = FindValue(cItem)) == NULL)
		return false;
	strncpy(strVal, tmp, strlen(tmp));
	strVal[strlen(tmp)] = '\0';

	return true;
}

/***********************************************************
 * 函数名: Load(char* filename)
 * 函数功能: 将配置文件filename的内容加载到csList中
 * 参数说明: filename 为配置文件名
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-25 14:43 
***********************************************************/ 
bool CConfigManager::Load(char* filename)
{
	std::ifstream ifs(filename, std::ios::in);
	if (!ifs.good())
	{
		return false;
	}

	int i = 0;
	/* Start by wuzy 2016-06-12 15:31 */
	/* 因为之前是直接将csList置空的，csList是CStr类型的数组，通过重载=运算符复制，有malloc动态申请内存的操作
	 * 所以，在对csList置空之前需要将之前csList不为空的值释放掉
	 * 否则，将会造成内存泄漏 */
	while (csList[i].GetString())
	{
		csList[i].FreeData();
		i++;
	}
	/* End by wuzy 2016-06-12 15:31 */

	i = 0;
	char buf[1024];
	while (ifs.good())
	{
		ifs.getline(buf, sizeof(buf)-1);

		if(strcmp(buf, "") == 0) continue;

		CStr cs(buf);
		if(!cs.IsEmpty())
		{
			/* CStr必须重载=运算符，否则跳出Load函数，cs将全被析构函数析构，csList数组的值全部为空*/
			csList[i++] = cs;
		}
	}
	return true;
}

/***********************************************************
 * 函数名: FindValue(const char* cItem)
 * 函数功能: 查找配置项cItem的配置参数
 * 参数说明: 
 * 返回值说明: 返回找到的配置参数的值, NULL 表示没有找到
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-25 14:44 
***********************************************************/ 
char* CConfigManager::FindValue(const char* cItem)
{
	int i = 0;
	char* p = NULL;

	while(!csList[i].IsEmpty())
	{
		/*p = csList[i].myStrStr(csList[i].GetString(), cItem);*/
		p = strstr((char*)csList[i].GetString(), cItem);

		if(p != NULL)
		{
			if((csList[i].GetFirstChar() == ';')
					|| (csList[i].GetFirstChar() == '['))	//这行是注释或者[节点]，忽略
			{
				i++;
				continue;
			}
			else if(*(p+strlen(cItem)) == '=')
			{
				p = p+strlen(cItem)+1;		//跳过等于号，为了方便，简单，配置文件中不能有多余的空格
				break;
			}
		}
		i++;
	}
	return p;
}
