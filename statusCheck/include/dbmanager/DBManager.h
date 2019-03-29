#ifndef __DB_MANAGER_H__
#define __DB_MANAGER_H__

#include <string.h>
#include <mysql.h>
#include "config/ConfigManager.h"
#include "common/error.h"
#include "global/globaldef.h"
#include "log/log.h"

#define CST "+08:00"   /* 中国标准时间，UTC +08:00, 东八区 */

class CDBManager
{
	public:
		CDBManager();
		~CDBManager();

		void InitDB();

		/* 数据库操作 */
		bool ConnectDB();

		/* 连接数据库
		 * 参数说明:
		 * 1. mysql : 数据库连接句柄
		 * 2. host : 数据库主机 IP
		 * 3. username : 数据库用户名
		 * 4. password : 密码
		 * 5. db : 数据库名称
		 * 6. port : 端口号
		 * 7. unix_socket : 由 host 决定，一般填值 NULL
		 * 8. client_flag : 一般填值 0
		*/
//		MYSQL* ConnectDB(MYSQL* mysql, const char* host, const char* username, const char* password, const char* db, UINT port, const char* unix_socket, unsigned long client_flag);

		bool QueryDB(const char* statement);
        bool SetTimeZone (const char* time_zone);

		/* 获取结果集 */
		MYSQL_RES* GetResult();

	private:
		MYSQL m_mysqlHandle;
		MYSQL_RES* m_mysqlRes;

		char* m_DBHost;		/* 主机IP */
		char* m_DBUserName;		/* 用户名 */
		char* m_DBPassWord;		/* 密码 */
		char* m_DBName;		/* 数据库名称 */
		UINT m_DBPort;		/* 端口号 */
};

#endif
