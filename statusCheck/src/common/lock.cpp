#include <pthread.h>
#include "common/lock.h"

CLock::CLock()
{
	pthread_mutex_init(&m_Mutex, NULL);
}

CLock::~CLock()
{
	pthread_mutex_destroy(&m_Mutex);
}
