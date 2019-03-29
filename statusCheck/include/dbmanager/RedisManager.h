#ifndef __REDIS_MANAGER_H__
#define __REDIS_MANAGER_H__

#include "config/ConfigManager.h"
#include "log/log.h"
#include "common/error.h"
#include "global/globaldef.h"

#include <string.h>
#include <hiredis/hiredis.h>

/* 活跃用户数计数器，分天和月 */
#define ZSETNAME_PER_DAY "ACTIVE_USER_COUNTER_PER_DAY"
#define ZSETNAME_PER_MONTH "ACTIVE_USER_COUNTER_PER_MONTH"

/* redis 锁名称 */
#define REDIS_LOCK_NAME "redis_lock"

class CRedisManager
{
	public:
		CRedisManager();
		~CRedisManager();

		void InitRedis(); /* 初始化Redis对象 */
		bool ConnectRedis(); /* 连接 redis */
		void FreeRedis();	/* 释放连接 */
		bool QueryRedis(const char* statement); /* 查询 redis */
		bool InsertIntoRedis(const char* statement);	/* 插入 redis */
		redisReply* GetRedisResult(); /* 获取 redis 结果集对象 */

        /* ------------------------redis operation-----------------------*/

        /* AUTH password */
        bool Auth (char* password);

        /* **************** redis op for sorted sets ******************* */
        /* zadd myzset 1 "one" , type is REDIS_REPLY_INTEGER */
        bool Zadd (const char* setname, const char* key, int scores);

        /* zincby myzset 1 "one" , REDIS_REPLY_STRING */
        bool Zincrby (const char* setname, const char* key, int increment);

        /* zcard myzset , REDIS_REPLY_INTEGER */
        long long Zcard (const char* setname);

        /* zrem myzset one , REDIS_REPLY_INTEGER */
        bool Zrem (const char* setname, const char* key);

        /* zrange myzset start end [withscores], REDIS_REPLY_ARRAY */
        bool Zrange (const char* setname, int start, int end, int flag);

        /* ****************** select db ******************** */
        /* REDIS_REPLY_STATUS */
        bool SelectDb (int dbnum);

        /* ****************** redis op for string object *************** */
        /* set string value, REDIS_REPLY_STATUS, get value, REDIS_REPLY_STRING  */
        bool Set (char* key, char* value);

        /* get 不存在的对象时, 返回 REDIS_REPLY_NIL */
        char* Get (char* key);

        /* ****************** redis delete ************************* */
        bool Del (const char* key); /* REDIS_REPLY_INTEGER */
        bool FlushDB (int dbnum);            /* redis flushdb */

        /* ****************** redis op for sets ************************* */
        /* sadd myset value1, REDIS_REPLY_INTEGER */
        bool Sadd (char* setname, char* value);

        /* smembers myset, REDIS_REPLY_ARRAY */
        /* smembers 不存在的集合时，redis 返回 (empty list or set)， 
         * type 仍是 REDIS_REPLY_ARRAY, 但是 elements 为 0 */
        bool Smembers (char* setname);

        /* ****************** redis watch and unwatch *************** */
        bool Watch (char* key);
        bool UnWatch ();

        /* 设置 redis 简易锁 */
        bool RequireRedisLock (const char* lockname, int timeout);
        bool ReleaseRedisLock (const char* lockname, char* identifier);

	private:
		redisContext* m_pRedisContext;
		redisReply* m_pRedisReply;
		char* m_pRedisIP;
		UINT m_nRedisPort;

        int m_nAuth;    /* redis 是否需要密码授权 */
};

#endif
