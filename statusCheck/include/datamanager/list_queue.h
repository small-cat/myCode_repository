#ifndef __MY_LIST_QUEUE_H__
#define __MY_LIST_QUEUE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

#include "common/error.h"
#include "global/globaldef.h"

typedef struct _NODERECORD_
{
    char* fileName;     /* 文件名 */
    char* phoneNum;     /* 手机号码 */
    UINT fileNum;       /* 话单记录在话单文件中的行号 */
    int cdrType;        /* 话单记录中主被叫对应位置的值 */
    UINT startTime;     /* 话单记录的开始时间 */
	void* optional;		/* 不同业务需求不同的字段数据，可以通过接受结构体的方式接受多个字段 */
}NodeRecord;

/* 话单节点及链表队列 */
typedef struct _QDATA_
{
	NodeRecord* record;
	struct _QDATA_* pNext;
}QueueData;

typedef struct _LIST_QUEUE_
{
	int elementNum;		/* 队列节点数 */
	QueueData *pHead, *pTail; /* 头节点保存数据,尾节点保存 */
}ListQueue;

void Init(ListQueue* queue);
int PushQueue(NodeRecord* record, ListQueue* tail);//插入记录成功返回1，插入记录失败返回0
QueueData* PopQueue(ListQueue* head);
int IsQueueEmpty(ListQueue queue);
/*int DestroyQueue(ListQueue* queue);*/


#ifdef __cplusplus
}
#endif

#endif
