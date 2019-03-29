#ifndef __OUTPUT_MANAGER_H__
#define __OUTPUT_MANAGER_H__

#include "output/output_list_queue.h"
#include "common/error.h"
#include "log/log.h"
#include "common/lock.h"
#include "config/ConfigManager.h"
#include "datamanager/datamanager.h"

#include <pthread.h>

class COutputManager {
	private:
		CWriteList* writeList; /* 输出链表队列 */
		CLock m_lock;	/* 读写链表的锁 */
		pthread_cond_t isfull;	/* 互斥信号量，当链表满时，等待链表有多余空间时才会往里面插入 */
		pthread_cond_t isempty;

		int m_nCurPool;		/* 当前节点数 */
		int m_nMaxPool;		/* 允许最大节点数，当达到最大节点数时，需要阻塞线程 */

	public:
		COutputManager();
		~COutputManager();

		bool InitOutputManager();		/* 获取配置参数，初始化 */
		bool AddData(QueueData* qnode, Data data);	/* 往链表中添加节点 */
		WriteNode* GetData();		/* 从链表中获取节点 */

		bool IsEmpty();
		bool IsFull();
		void Close();						/* 释放链表空间 */
		void FreeNode(WriteNode* node);		/* 释放节点 */

		int GetIndex(char* filename, const char* servType[]);
};

extern COutputManager* g_pOutputManager;

#endif
