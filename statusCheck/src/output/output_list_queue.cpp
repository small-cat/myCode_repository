/**************************************************
    > File name: output_list_queue.cpp
    > Author: wzhenyu
    > mail: mblrwuzy@gmail.com
    > Create Time: 2016-07-11 16:42
    > Copyright 2015 Wzhenyu, all rights reserved. 
****************************************************/
#include "output/output_list_queue.h"
#include "common/error.h"
#include "log/log.h"

#include <string.h>

CWriteList::CWriteList()
{
	pHead = NULL;
	pTail = NULL;
	eleNum = 0;
}

CWriteList::~CWriteList()
{
}

/***********************************************************
 * 函数名: bool CWriteList::IsEmpty()
 * 函数功能: 判断链表是够为空 
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-07-11 16:49 
***********************************************************/ 
bool CWriteList::IsEmpty()
{
	return eleNum == 0 ? true : false;
}

/***********************************************************
 * 函数名: void CWriteList::PushList(NodeRecord* node, Data* data)
 * 函数功能: 往链表插入节点
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-07-11 17:29 
***********************************************************/ 
void CWriteList::PushList(QueueData* qnode, Data* data)
{
	if (!qnode) return;

	WriteNode * writeNode = (WriteNode*)malloc(sizeof(WriteNode));
	#ifdef DEBUG_WUZY
	DUMPSYSLOG(ERROR, "CWriteList", "CWriteList", "PushList", "malloc WriteNode, address : %p", writeNode);
	#endif

	ERRPRINT(NULL==writeNode, exit(EXIT_FAILURE), 0, "malloc failed, line %d", __LINE__);

	writeNode->qData= qnode;
	writeNode->redisData = (Data*)malloc(sizeof(Data));

	#ifdef DEBUG_WUZY
	DUMPSYSLOG(ERROR, "CWriteList", "CWriteList", "PushList", "malloc WriteNode->redisData, address : %p", writeNode->redisData);
	#endif

	if (NULL == writeNode->redisData)
	{
		DUMPSYSLOG(FATAL, "CWriteList", "CWriteList", "PushList", "malloc failed, line %d", __LINE__);
		ERRPRINT(NULL==writeNode->redisData, exit(EXIT_FAILURE), 0, "CWriteList#PushList#malloc failed, line %d", __LINE__);
	}

	writeNode->redisData->osStsDtl = data->osStsDtl;
	writeNode->redisData->validDate = data->validDate;
	writeNode->redisData->expireDate = data->expireDate;
	strncpy(writeNode->redisData->imsi, data->imsi, 15);
	writeNode->redisData->imsi[15] = '\0';
	strncpy(writeNode->redisData->phoneNum, data->phoneNum, 15);
	writeNode->redisData->phoneNum[15] = '\0';

	writeNode->pNext = NULL;

	if (eleNum == 0)
	{
		pHead = pTail = writeNode;
		eleNum++;
	}
	else
	{
		pTail->pNext = writeNode;
		pTail = writeNode;
		eleNum++;
	}
}

/***********************************************************
 * 函数名: WriteNode* CWriteList::PopList()
 * 函数功能: 从链表取节点
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-07-11 17:30 
***********************************************************/ 
WriteNode* CWriteList::PopList()
{
	if ( IsEmpty() )
	{
		return NULL;
	}

	WriteNode * node = pHead;
	pHead = node->pNext;
	node->pNext = NULL;
	eleNum--;

	return node;
}

int CWriteList::GetEleNum()
{
	return eleNum;
}
