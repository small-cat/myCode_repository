#ifndef __DATA_MANAGER_H__
#define __DATA_MANAGER_H__

#include <stdio.h>
#include <string.h>
#include <malloc.h>

#include "config/ConfigManager.h"
#include "common/error.h"
#include "log/log.h"
#include "common/lock.h"
#include "global/globaldef.h"
#include "datamanager/list_queue.h"
#include "datamanager/optioncode.h"

class CDataManager
{
	public:
		CDataManager();
		~CDataManager();

		bool InitDataManager();	/* 初始化CDataManager对象 */
		bool AddData(NodeRecord* node);		/* 往链表中添加节点，插入成功返回1，插入失败返回0 */
		QueueData* GetData();	/* 从链表中获取节点，以队列的方式，从头获取，从尾插入节点，获取节点后，要将节点从原链表中删除，使用完之后需要释放 */

		bool IsEmpty();		/* 判断链表是否为空 */
		bool IsFull();		/* 判断链表是否已满 */

		void Close();		/* 释放链表空间，在异常情况下，程序退出之前，需要将链表空间全部释放后，在退出 */
		
		ListQueue* m_pQueue;		/* 链表队列 */

		int GetIndex(char* filename, const char* arr[]);
		void FreeQueueData(QueueData * Qnode);
	private:

		CLock m_lock;	/* 读写链表的锁 */

		pthread_cond_t isfull;		/* 条件互斥量，当链表队列满了时，不能往里面添加，需要等待，*/
		pthread_cond_t isempty;		/* 如果空，不能获取节点，需要等待 */

		UINT m_nCurPool;	/* 当前链表节点数 */
		UINT m_nMaxPool;	/* 链表最大节点数 */
};

extern CDataManager *g_pManager;

#endif
