/**************************************************
    > File name: output_manager.cpp
    > Author: wzhenyu
    > mail: mblrwuzy@gmail.com
    > Create Time: 2016-07-12 10:11
    > Copyright 2015 Wzhenyu, all rights reserved. 
****************************************************/
#include "output/output_manager.h"

/*typedef enum {UNKNOWN=-1, VGG=0, VIG, VLTE, VI, VID, VISMS, VIM, VMMS, VIMM}Output_enumServType;*/

COutputManager* g_pOutputManager;

COutputManager::COutputManager()
{
	writeList = new CWriteList();
	pthread_cond_init(&isfull, NULL);
	pthread_cond_init(&isempty, NULL);

	m_nCurPool = 0;
	m_nMaxPool = 0;
}

/***********************************************************
 * 函数名: COutputManager::~COutputManager()
 * 函数功能: 析构函数，释放链表空间
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-07-12 10:25 
***********************************************************/ 
COutputManager::~COutputManager()
{
	pthread_cond_destroy(&isfull);
	pthread_cond_destroy(&isempty);

	delete writeList;
	Close();

	m_nCurPool = 0;
	m_nMaxPool = 0;
}

/***********************************************************
 * 函数名: bool COutputManager::InitOutputManager()
 * 函数功能: 获取配置参数，初始化
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-07-12 10:26 
***********************************************************/ 
bool COutputManager::InitOutputManager()
{
	DUMPSYSLOG(INFO, "OutputManager", "COutputManager", "InitOutputManager", "start to initial OutputManager");
	CConfigManager * conf = new CConfigManager();
	conf->GetValue(DOWNCHECK_CONFIG_INI, "outputManager", "maxListNum", m_nMaxPool);
	delete conf;

	if (m_nMaxPool == 0)	/* 配置文件中没有配置该参数 */
	{
		DUMPSYSLOG(WARN, "OutputManager", "COutputManager", "InitOutputManager", "can not get m_nMaxPool from config, use default [10000]");
		m_nMaxPool = 10000;
	}

	m_nCurPool = 0;

	DUMPSYSLOG(INFO, "OutputManager", "COutputManager", "InitOutputManager", "OutputManager initial end.");
	return true;
}

bool COutputManager::IsFull()
{
	return m_nCurPool >= m_nMaxPool ? true : false;
}

bool COutputManager::IsEmpty()
{
	return m_nCurPool == 0 ? true : false;
}

/***********************************************************
 * 函数名: WriteNode* COutputManager::GetData()
 * 函数功能: 从链表中获取数据，链表中将删除该节点 
 * 参数说明: 
 * 返回值说明: 返回链表节点WriteNode
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-07-12 10:37 
***********************************************************/ 
WriteNode* COutputManager::GetData()
{
	if (m_lock.Lock() != 0)
	{
		/* 锁失败，会造成线程同步失败，造成不可控，应该退出程序 */
		DUMPSYSLOG(FATAL, "OutputManager", "COutputManager", "GetData", "Lock failed, line %d", __LINE__);
		exit(EXIT_FAILURE);
	}

	WriteNode * node = NULL;

	while (IsEmpty())	/* 如果链表为空，需要等待链表有数据时才唤醒线程 */
	{
		DUMPSYSLOG(TRACE, "OutputManager", "COutputManager", "GetData", "Output list queue is empty, wait ... ");
		pthread_cond_wait(&isempty, &m_lock.m_Mutex);
	}

	if (IsEmpty())
	{
		DUMPSYSLOG(FATAL, "OutputManager", "COutputManager", "GetData", "blocked thread is invoked by an known reason.");
		exit(EXIT_FAILURE);
	}

	node = writeList->PopList();
	m_nCurPool = writeList->GetEleNum();

	if (m_lock.Unlock() != 0)
	{
		DUMPSYSLOG(FATAL, "OutputManager", "COutputManager", "GetData", "Unlock failed, line %d", __LINE__);
		exit(EXIT_FAILURE);
	}

	/*
	DUMPSYSLOG(TRACE, "OutputManager", "COutputManager", "GetData", "Get Data from output list queue, filename:%s, phoneNum:%s, fileNum:%d, cdrType:%d," 
			" startTime:%d, validdate:%d, expiredate:%d, osstsdtl:%d", node->qData->record->fileName, node->qData->record->phoneNum, 
			node->qData->record->fileNum, node->qData->record->cdrType,	node->qData->record->startTime, node->redisData->validDate, 
			node->redisData->expireDate, node->redisData->osStsDtl);
	*/
	pthread_cond_signal(&isfull);
	return node;
}

/***********************************************************
 * 函数名: bool COutputManager::AddData(NodeRecord* record, Data data)
 * 函数功能: 往链表添加数据 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-07-12 10:49 
***********************************************************/ 
bool COutputManager::AddData(QueueData* qnode, Data data)
{
	if (m_lock.Lock() != 0)
	{
		DUMPSYSLOG(FATAL, "OutputManager", "COutputManager", "AddData", "Lock failed, line %d", __LINE__);
		exit(EXIT_FAILURE);
	}

	while ( IsFull() )		/* 如果链表为满，那么需要的等待链表有剩余空间才能往链表添加节点 */
	{
		DUMPSYSLOG(TRACE, "OutputManager", "COutputManager", "AddData", "output list queue is full, wait ...");
		pthread_cond_wait(&isfull, &m_lock.m_Mutex);
	}

	writeList->PushList(qnode, &data);
	m_nCurPool = writeList->GetEleNum();

	if (m_lock.Unlock() != 0)
	{
		DUMPSYSLOG(FATAL, "OutputManager", "COutputManager", "AddData", "Unlock failed, line %d", __LINE__);
		exit(EXIT_FAILURE);
	}
	pthread_cond_signal(&isempty);

	return true;
}

/***********************************************************
 * 函数名: int COutputManager::GetIndex(char* filename, const char* servType)
 * 函数功能: 找出业务类型
 * 参数说明: 
 * 返回值说明: 返回业务类型对应的数组的下标，-1 表示 不存在该业务类型，为unknown
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-07-13 10:03 
***********************************************************/ 
int COutputManager::GetIndex(char* filename, const char* servType[])
{
	/* 截取业务类型 */
	char serv[32] = {0};
	strcpy(serv, filename);
	char *p = strchr(serv, '2');
	*p = '\0';

	int i = 0;
	while (servType[i] != NULL)	
	{
		if (strcmp(servType[i], serv) == 0)
			return i;
		i++;
	}

	return -1;
}

/***********************************************************
 * 函数名: void COutputManager::Close()
 * 函数功能: 释放链表空间
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-07-13 14:59 
***********************************************************/ 
void COutputManager::Close()
{
	CDataManager datamanager;
	
	DUMPSYSLOG(INFO, "OutputManager", "COutputManager", "Close", "Free write queue list");
	if (m_lock.Lock() != 0)
	{
		DUMPSYSLOG(FATAL, "OutputManager", "COutputManager", "Close", "Lock failed, line %d", __LINE__);
		exit(EXIT_FAILURE);
	}

	while (!IsEmpty())
	{
		WriteNode* node = GetData();
		datamanager.FreeQueueData(node->qData);
		free(node->redisData);
		free(node);

		node = NULL;
	}

	if (m_lock.Unlock() != 0)
	{
		DUMPSYSLOG(FATAL, "OutputManager", "COutputManager", "Close", "Unlock failed, line %d", __LINE__);
		exit(EXIT_FAILURE);
	}
}

void COutputManager::FreeNode(WriteNode* node)
{
	if (NULL == node) return;

	DUMPSYSLOG(INFO, "OutputManager", "COutputManager", "FreeNode", "free WriteNode");
	CDataManager datamanager;
	datamanager.FreeQueueData(node->qData);
	free(node->redisData);
	free(node);

	node = NULL;
}
