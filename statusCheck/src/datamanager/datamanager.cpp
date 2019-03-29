/**************************************************
    > File name: datamanager.cpp
    > Author:zhangzhen	 
    > mail: 
    > Create Time: 2016-04-07 10:53
    > Copyright 2016 , all rights reserved. 
****************************************************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#include "config/ConfigManager.h"
#include "datamanager/datamanager.h"

CDataManager *g_pManager;

typedef enum {UNKNOWN=-1, VGG=0, VIG, VLTE, VI, VID, VISMS, VIM, VMMS, VIMM}enumServType;

/***********************************************************
 * 函数名: CDataManager();
 * 函数功能: 构造函数，生成链表，给属性赋初值。
 * 参数说明: m_nMaxPool链表最大节点数 从配置文件读取
 * 返回值说明: 无
 * 作者: zhangzhen 
 * Time: 2016-04-07 10:56 
***********************************************************/ 
CDataManager::CDataManager()
{
	m_pQueue = new ListQueue;
	Init(m_pQueue);
	pthread_cond_init(&isfull,NULL);
	pthread_cond_init(&isempty,NULL);
	m_nCurPool = 0;
	m_nMaxPool = 0;
}
/***********************************************************
 * 函数名：析构函数
 * 函数功能: 
 * 参数说明: 
 * 返回值说明: 
 * 作者: zhangzhen 
 * Time: 2016-04-07 19:58 
***********************************************************/ 
CDataManager::~CDataManager()
{
	this->Close();
	delete m_pQueue;
	pthread_cond_destroy(&isfull);
	pthread_cond_destroy(&isempty);
}
/***********************************************************
 * 函数名:初始化函数 
 * 函数功能: 
 * 参数说明: 
 * 返回值说明: 
 * 作者: zhangzhen 
 * Time: 2016-04-07 19:58 
***********************************************************/ 
bool CDataManager::InitDataManager()
{
	int tmp = 0;//临时变量，获取配置文件中的最大节点个数。
    CConfigManager* conf = new CConfigManager();//获取配置文件
	conf->GetValue(DOWNCHECK_CONFIG_INI, "dataManager", "maxListNum",tmp);
	m_nMaxPool = (unsigned int) tmp;//复制给类的属性——链表的最大节点个数。
    delete conf;

    m_nCurPool=0;//当前节点个数为0
	

	return 0;
}
/***********************************************************
 * 函数名:往链表里面添加数据 
 * 函数功能: 
 * 参数说明: 
 * 返回值说明: 
 * 作者: zhangzhen 
 * Time: 2016-04-07 19:58 
***********************************************************/ 
bool CDataManager::AddData(NodeRecord* node)//插入成功返回1，失败返回0
{
    if (NULL == node) {
        return false;
    }

	/*lock return*/
	if (m_lock.Lock() != 0)
	{
		DUMPSYSLOG(ERROR, "datamanager", "CDataManager", "AddData", "line %d, Lock failed", __LINE__);
		exit(EXIT_FAILURE);
	}

	while ( this->IsFull() )
	{
#ifdef DEBUG_TEST
		PRINTF(1, "Queue is full\n");
#endif
		pthread_cond_wait(&isfull,&m_lock.m_Mutex);
	}
   	bool AddDataflag = 0;//赋初值0，如果成功插入一条记录，则返回1。
	if( PushQueue(node,m_pQueue) == 1)
	{
		AddDataflag = 1;//PushQueue插入记录成功返回1，插入NULL返回0
	}
	/* Start by wuzy2016-04-13 23:36 */
	else
	{
		if (m_lock.Unlock() != 0) /* 返回之前必须解锁 */
		{
			DUMPSYSLOG(ERROR, "datamanager", "CDataManager", "AddData", "line %d, Unlock failed", __LINE__);
			exit(EXIT_FAILURE);
		}

		return false;
		/* 这个地方必须加上 return false 
		 * 因为如果不加上，如果插入的是null，那么PushQueue返回的是false
		 * 但是因为之前没有这个return false, 导致函数继续往下执行
		 * 当执行到pthread_cond_signal() 函数时，唤醒阻塞的往队列取数据的线程，但是
		 * 如果此时队列为空，那么取出的数据为空，导致处理数据时出现段错误 
		*/
	}
	/* End by wuzy2016-04-13 23:36 */

	m_nCurPool=m_pQueue->elementNum;

	if (m_lock.Unlock() != 0)
	{
		DUMPSYSLOG(ERROR, "datamanager", "CDataManager", "AddData", "line %d, Unlock failed", __LINE__);
		exit(EXIT_FAILURE);
	}

	pthread_cond_signal(&isempty);
	return AddDataflag;
}
/***********************************************************
 * 函数名:从链表里面取数据 
 * 函数功能: 
 * 参数说明: 
 * 返回值说明: 
 * 作者: zhangzhen 
 * Time: 2016-04-07 19:59 
***********************************************************/ 
QueueData* CDataManager::GetData()
{
	if (m_lock.Lock() != 0)
	{
		/* 如果锁失败，那么肯定会造成话单加入或取出链表队列时不同步，会出现不可控的状况出现
		 * 不允许这种情况发生，所以先直接退出 */
		DUMPSYSLOG(ERROR, "datamanager", "CDataManager", "GetData", "line %d, Lock failed", __LINE__);
		exit(EXIT_FAILURE);
	}

	
	/* Start by wuzy 2016-06-12 23:19 */
	/* 上面定义的 node 变量重复动态申请内存，从链表队列中获取的节点就是动态申请的，后面需要释放，再次动态申请
	 * 只能释放掉一个，导致内存泄漏 */
	QueueData* Qnode = NULL;
	/* End by wuzy 2016-06-12 23:19 */

	while ( this->IsEmpty() ) //防止pthread_cond_wait 被意外唤醒，而此时队列仍然是空的
		pthread_cond_wait(&isempty,&m_lock.m_Mutex);

	if (this->IsEmpty())
	{
		DUMPSYSLOG(FATAL, "datamanager", "CDataManager", "GetData", "blocked thread was invoked by an known reason");
		exit(EXIT_FAILURE);
	}

	Qnode = PopQueue(m_pQueue);
	m_nCurPool=m_pQueue->elementNum;

	if (m_lock.Unlock() != 0)
	{
		DUMPSYSLOG(ERROR, "datamanager", "CDataManager", "GetData", "line %d, Unlock failed", __LINE__);
		exit(EXIT_FAILURE);
	}

	pthread_cond_signal(&isfull);
	return Qnode;
}
/***********************************************************
 * 函数名:清空链表
 * 函数功能: 
 * 参数说明: 
 * 返回值说明: 
 * 作者: zhangzhen 
 * Time: 2016-04-07 20:00 
***********************************************************/ 
void CDataManager::Close()
{
	
	if( m_lock.Lock() != 0 )
	{
		DUMPSYSLOG(ERROR, "datamanager", "CDataManager", "Close", "line %d, Lock failed", __LINE__);
		exit(EXIT_FAILURE);
	}

	if(!IsQueueEmpty(*m_pQueue))
	{
		/*DestroyQueue(m_pQueue);	*/
		/* 释放链表队列 */
		QueueData * tmp = GetData();
		while (tmp != NULL)
		{
			FreeQueueData(tmp);
			tmp = GetData();
		}

	}

	if (m_lock.Unlock() != 0)
	{
		DUMPSYSLOG(ERROR, "datamanager", "CDataManager", "Close", "line %d, Unlock failed", __LINE__);
		exit(EXIT_FAILURE);
	}
}
/***********************************************************
 * 函数名: 判断连边是否为空
 * 函数功能: 
 * 参数说明: 
 * 返回值说明: 
 * 作者: zhangzhen 
 * Time: 2016-04-07 20:00 
***********************************************************/ 
bool CDataManager::IsEmpty()
{	
	if(IsQueueEmpty(*m_pQueue))
		return 1;
	return 0;
}	
/***********************************************************
 * 函数名: 
 * 函数功能:判断链表是否是满的 
 * 参数说明: 
 * 返回值说明: 
 * 作者: zhangzhen 
 * Time: 2016-04-07 20:01 
***********************************************************/ 
bool CDataManager::IsFull()
{
	if(m_nCurPool >= m_nMaxPool)
		return 1;
	return 0;
}

/***********************************************************
 * 函数名:void CDataManager::FreeQueueData(QueueData * Qnode)
 * 函数功能: 释放队列节点 
 * 参数说明: 
 * 返回值说明: 没有完成
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-07-06 16:41 
***********************************************************/ 
void CDataManager::FreeQueueData(QueueData * Qnode)
{
	int idx = GetIndex(Qnode->record->fileName, recordCallType);

	/* 之前解码时添加的文件末尾的最后一个节点，后续再解码中将删除该节点，这里先过滤 */
	if (strcmp(Qnode->record->phoneNum, "endoffile") != 0)
	{
		switch (idx)
		{
			case UNKNOWN:
				break;
			case VGG:
				{
					VGG_OP * vgg_op = (struct _VGG_*)Qnode->record->optional;
					free(vgg_op->APNNI);
					free(vgg_op);
					vgg_op = NULL;
					break;
				}
			case VIG:
				{
					VIG_OP * vig_op = (struct _VIG_*)Qnode->record->optional;
					free(vig_op->APNNI);
					free(vig_op);
					vig_op = NULL;
					break;
				}
			case VLTE:
				{
					VLTE_OP * vlte_op = (struct _VLTE_*)Qnode->record->optional;
					free(vlte_op->APNNI);
                    free(vlte_op->sgsnAddr);
                    free(vlte_op->ggsnAddr);
					free(vlte_op);
					vlte_op = NULL;
					break;
				}
			case VI:
				{
					VI_OP * vi_op = (struct _VI_*)Qnode->record->optional;
					free(vi_op->oppNum);
					free(vi_op);
					vi_op = NULL;
					break;
				}
			case VID:
				{
					VID_OP * vid_op = (struct _VID_*)Qnode->record->optional;
					free(vid_op->oppNum);
                    free(vid_op->msc);
                    free(vid_op->lac_id);
                    free(vid_op->cell_id);
                    free(vid_op->partial_id);
					free(vid_op);
					vid_op = NULL;
					break;
				}
			case VISMS:
				{
					VISMS_OP * visms_op = (struct _VISMS_*)Qnode->record->optional;;
					free(visms_op->oppNum);
					free(visms_op->applyTime);
					free(visms_op);
					visms_op = NULL;
					break;
				}
			case VIM:
				{
					VIM_OP * vim_op = (struct _VIM_*)Qnode->record->optional;
					free(vim_op->oppNum);
					free(vim_op->applyTime);
					free(vim_op);
					vim_op = NULL;
					break;
				}
			case VMMS:
				{
					VMMS_OP * vmms_op = (struct _VMMS_*)Qnode->record->optional;
					free(vmms_op->oppNum);
					free(vmms_op->receiveTime);
					free(vmms_op);
					vmms_op = NULL;
					break;
				}
			case VIMM:
				{
					VIMM_OP * vimm_op = (struct _VIMM_*)Qnode->record->optional;
					free(vimm_op->oppNum);
					free(vimm_op->receiveTime);
					free(vimm_op);
					vimm_op = NULL;
					break;
				}
			default:
				break;
		}
	}

	Qnode->record->optional = NULL;
	free(Qnode->record->fileName);
	free(Qnode->record->phoneNum);
	free(Qnode->record);
	free(Qnode);
}

/***********************************************************
 * 函数名: int CDataManager::GetIndex(char* filename, const char* arr[])
 * 函数功能: 通过文件名获取业务类型
 * 参数说明: 
 * 返回值说明: 返回业务类型数组下标值，-1 表示没有该业务类型，unknown 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-07-07 11:06 
***********************************************************/ 
int CDataManager::GetIndex(char* filename, const char* arr[])
{
	char prefix[32];
	memset(prefix, 0, sizeof(prefix));
	strncpy(prefix, filename, strlen(filename));
	prefix[strlen(filename)] = '\0';

	/* 获取文件名前缀 */
	char* tmp = strchr(prefix, '2');
	*tmp = '\0';

	int i = 0;
	while (arr[i] != NULL)
	{
		if (strcmp(arr[i], prefix) == 0)
			return i;
		i++;
	}
	
	return -1;
}
