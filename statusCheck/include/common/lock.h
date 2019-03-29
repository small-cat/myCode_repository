/*=======================================================================
*	File name    : lock.h
*	Authored by    :	wzhenyu
*	Date	:
*	Description	:
*
*	Modify	:
*======================================================================*/
#ifndef __LOCK_H
#define __LOCK_H

#include <pthread.h>
#include <stdio.h>

class CLock
{
public:
	CLock();
	~CLock();
	int Lock();
	int Unlock();
	pthread_mutex_t m_Mutex;
};

/***********************************************************
 * 函数名: inline int CLock::Lock()
 * 函数功能:  
 * 参数说明: 返回 0 表示正常，非 0 出错
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-04-14 17:02 
***********************************************************/ 
inline int CLock::Lock()
{
	return pthread_mutex_lock(&m_Mutex);
}

inline int CLock::Unlock()
{
	return pthread_mutex_unlock(&m_Mutex);
}

#endif    // #ifndef __LOCK_H

