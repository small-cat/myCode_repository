#ifndef __OUTPUT_LIST_QUEUE_H__
#define __OUTPUT_LIST_QUEUE_H__

#include "datamanager/list_queue.h"
#include "datamanager/optioncode.h"

typedef struct _OUTPUT_DATA_ {
	QueueData* qData;	/* 这种方式主需要在最后释放队列节点就可, 不需要频繁申请和释放 */
	Data * redisData;
	struct _OUTPUT_DATA_ * pNext;
}WriteNode;

class CWriteList {
	private:
		int eleNum;
		WriteNode * pHead;
		WriteNode * pTail;

	public:
		CWriteList();
		~CWriteList();
		bool IsEmpty();
		void PushList(QueueData* qnode, Data * data);
		WriteNode * PopList();
		int GetEleNum();
};

#endif
