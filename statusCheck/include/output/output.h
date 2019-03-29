#ifndef __OUTPUT_H__
#define __OUTPUT_H__

#include "config/ConfigManager.h"
#include "common/error.h"
#include "common/lock.h"
#include "common/myTime.h"
#include "global/globaldef.h"
#include "log/log.h"
#include "datamanager/datamanager.h"
#include "output/output_list_queue.h"
#include "dbmanager/RedisManager.h"

#define OUTPUT_STR_MAXLEN 2047 /* 输出格式化字符串的最大长度 */
#define ACTIVE_USER_FILE "active_user_file.txt"

class COutPut
{
	public:
		COutPut();
		~COutPut();

		bool Open();	/* 初始化文件句柄，获取输出文件路径参数等 */

		/* 输出处理过的文件名信息；输出内容为：
		 * 处理时间 + 文件名 + 当前话单文件话单总记录数 + 当前话单文件异常话单记录总数
		 */
		void FileNameDump(char* fileName, int totalRecordNum, int totalExceptionNum);

		/* 输出异常话单记录信息，输出内容为：
		 * 处理时间 + 文件名 + 行号 + 号码 + cdrtype + 主被叫类型 + 开始时间 + 单双停状态
		 *			+ filename fileNum phoneNum cdrType dialOrIncome startTime osStsDtl
		 */
		void ExceptionRecordDump(char* fileName, int fileNum, char* phoneNum, int cdrType, const char* dialOrIncome, int startTime, int osStsDtl, int validDate, int expireDate);
        void ActiveUserDump();

		/* NodeRecord 的 optional 字段填值为downcheck 处理时在redis中搜索到的数据（结构体的形式保存）*/
		void ExceptionRecordDump(NodeRecord* node);
		void ExceptionRecordDump(WriteNode* node);

		void Init();	/* 初始化 */

	private:
		/* 格式化输出 处理过的话单文件名信息，保存在 m_fileNameBuf[] 缓冲区中 */
		void FormatFileNameInfo(char* fileName, int totalRecordNum, int totalExceptionRecordNum);

		/* 格式化输出 异常话单记录信息 */
		void FormatExceptionRecordInfo(char* fileName, int fileNum, char* phoneNum, int cdrType,
				const char* dialOrIncome, int startTime, int osStsDtl, int validDate, int expireDate);

		int GetIndex(char* filename, const char* arr[]);
		void FormatExceptionRecordInfo(WriteNode* node);
        
        void _activeUserDump ();  /* 获取活跃用户数 */
        void _activeUserDumpPerDayOrMonth (const char* zsetname, char* dump_file);

	private:
		FILE* m_fdDealFileName;		/* 记录已经处理过的话单文件名的文件句柄 */
		FILE* m_fdExceptionRecord;	/* 记录异常话单记录的文件句柄 */

		char m_fileNameBuf[OUTPUT_STR_MAXLEN];	/* 格式化输出缓冲区 */
		char m_exceptionRecordBuf[OUTPUT_STR_MAXLEN];

		CLock m_lockFileNameInfo;	/* 文件锁，输出信息时使用 */
		CLock m_lockExceptionRecord;
        CLock m_lockActiveUser;

		char m_dealFileName[255];	/* 处理过的文件信息输出文件名 */
		char m_exceptionRecordFileName[255];	/* 异常话单记录输出文件名 */

		char m_outputPath[MAX_PATH];	/* 输出文件保存路径 */

//        char m_today[16];       /* 记录当天的日期 */

//        CRedisManager* m_pRedisManager;
};

extern COutPut g_Output;

#define DUMPOUTPUT_FILENAME g_Output.FileNameDump
#define DUMPOUTPUT_EXCEPTION g_Output.ExceptionRecordDump
#define DUMPOUTPUT_ACTIVE_USER_COUNT g_Output.ActiveUserDump
#endif
