#ifndef __DOWNCHECK_H__
#define __DOWNCHECK_H__

#include <stdio.h>
#include <string.h>

#include "config/ConfigManager.h"
#include "common/error.h"
#include "common/formatString.h"
#include "log/log.h"
#include "dbmanager/RedisManager.h"
#include "datamanager/datamanager.h"
#include "output/output.h"
#include "output/output_manager.h"
#include "datamanager/optioncode.h"
#include "global/globaldef.h"

#define DIAL_CALL 10	/* 主叫 */
#define INCOME_CALL 11	/* 被叫 */
#define REDIRECT_CALL 12	/* 呼转 */

#define DOUBLE_STOP 4   /* 双停 */
#define SINGLE_STOP 2   /* 单停 */

#define HGET "hget"
#define HGETALL "hgetall"
#define HMSET "hmset"
#define SET "set"
#define GET "get"

#define REDIS_ELE_NUM 8

typedef enum {PHONENUM=1, TWO, VALIDDATE, THREE, EXPIREDATE, SIX, OSSTSDTL} RedisResultType;

/*
 * 此结构体用于存储从 redis 中查找出的数据
 */
/*
typedef struct _DATA_
{
	char imsi[16];	// IMSI 号 
	int osStsDtl;	// 单双停状态，2表示单停，4表示双停 /
	int validDate;	// 生效时间，秒数的形式 /
	int expireDate;	// 失效时间，秒数的形式 /
	char phoneNum[16]; // 手机号码 /
}Data;
*/

class CDownCheck
{
	public:
		CDownCheck();
		~CDownCheck();

		/* 话单存储在redis中时，是从MySQL数据库中先搜索出用户信息，通过号码+用户单双停状态为KEY，以HASH的方式
		 * 存入redis中的
		 */
		bool QueryRedisByRecord(NodeRecord* record);		/* 通过话单在redis中搜索 */

		/* 1. 如果是主叫话单，在redis中查询单双停记录，因为redis中保存的是号码最近时间内的单双停状态，主叫不能有停机状态
		 * 2. 如果是被叫话单，在redis中查询双停状态，被叫不能是双停
		 * 3. 呼转，作为主叫话单处理
		 * 4. GPRS业务都作为主叫处理
		 * 5. 短彩信业务与语音业务相同的处理方法
		 */
		bool RecordDownCheck(QueueData* qData);	/* 通过时间比较话单是否正常 */

		/*
		 * 判断话单记录的主被叫类型，根据话单的文件名判断业务，然后根据业务和 cdrType的值
		 * 判断出话单的主被叫类型
		 */
		int  GetServiceCallType(NodeRecord* node);	
		int GetIndex(char* filename, const char* arr[]);
		void AddRedisResult(char * phone, redisReply* reply);

        /* **************** redis 计数器，记录活跃用户数 ************ */
        /* 
         * 此处使用 sorted set，只记录非停机状态下的主叫话单中的用户出现的
         * 次数
         * 活跃用户：指当天或者当月_主动_使用过业务的用户
         * */
        bool UpdateCount (NodeRecord* node);

	private:
		CRedisManager* m_pRedisManager;		/* redis 管理对象 */
		UINT m_nTotalRecordNum;		/* 当前话单文件处理的话单记录总数 */
		UINT m_nTotalExceptionRecordNum; /* 当前话单文件处理的异常话单记录总数 */

		Data *redisResult; /* 目前redis存储的是用户最近的单双停状态，所以一个号码最多两条记录 */
		int m_nRedisResultIndex;	/* m_pRedisResult 数组元素个数 */

		int m_nCallType;	/* 记录主被叫类型 */
};

#endif
