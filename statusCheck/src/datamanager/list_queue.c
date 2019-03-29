/**************************************************
    > File name: list_queue.c
    > Author: wzhenyu
    > mail:
    > Create Time: 2016-04-04 19:56
****************************************************/
#include "datamanager/list_queue.h"

/***********************************************************
 * 函数名: void Init(ListQueue *queue)
 * 函数功能: 初始化链表队列，队列是头端出，尾端进, FIFO 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-04 19:57 
***********************************************************/ 
void Init(ListQueue *queue)
{
	queue->elementNum = 0;
	queue->pHead = NULL;
	queue->pTail = NULL;
}

/***********************************************************
 * 函数名: int IsQueueEmpty(ListQueue queue)
 * 函数功能: 判断队列是否为空 
 * 参数说明: 
 * 返回值说明: 空返回1，非空返回0
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-04 22:48 
***********************************************************/ 
int IsQueueEmpty(ListQueue queue)
{
	if (queue.elementNum == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

/***********************************************************
 * 函数名: int PushQueue(NodeRecord record, ListQueue *queue)
 * 函数功能: 在队列中接入节点
 * 参数说明: 在队列 queue 中添加 record 节点
 * 返回值说明: 成功返回1，失败返回 0
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-04 22:50 
***********************************************************/ 
int PushQueue(NodeRecord* record, ListQueue* queue)
{
	if (record == NULL)
	{
		return 0;
	}
	QueueData * qdata = (QueueData*)malloc(sizeof(QueueData));
	ERRPRINT(NULL==qdata, return 0, 0, "datamanager#list_queue#PushQueue#malloc failed, line %d", __LINE__);
	qdata->record = record;
	qdata->pNext = NULL;

	/* 从 pTail 插入节点 */
	if (queue->elementNum == 0)
	{
		queue->pTail = qdata;
		queue->pHead = qdata;
		queue->elementNum++;
	}
	else
	{
		queue->pTail->pNext = qdata;
		queue->pTail = qdata;
		queue->elementNum++;
	}
	 
	return 1;
}

/***********************************************************
 * 函数名: QueueData* PopQueue(ListQueue* queue)
 * 函数功能: 从队列头端取出数据，并将节点信息删除 
 * 参数说明: 队列
 * 返回值说明: 返回话单节点, 返回值经过malloc动态申请空间，需要外部手动释放
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-04 23:18 
***********************************************************/ 
QueueData* PopQueue(ListQueue* queue)
{
	if (IsQueueEmpty(*queue))
	{
		return NULL;
	}

	/* 从队列头获取节点 */
	QueueData* tmp = queue->pHead;
	queue->pHead= tmp->pNext;
	tmp->pNext = NULL;
	queue->elementNum--;

	/* 获取节点的数据 */
	return tmp;
}
