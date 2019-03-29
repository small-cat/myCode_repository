/*=========================================================
*	文件名		：	MyStr.h
*	创建者		：	
*	创建日期	：	
*	描述		：	
*
*	修改记录  	：	
*=========================================================*/
#ifndef __MYSTR_H__
#define __MYSTR_H__

#include <stdarg.h>
#include <assert.h>
#include <malloc.h>

#include "common/error.h"

// 字符串实现的内部结构
// 不允许直接访问!
/*********************************************************************
* Class:	CStr
* Purpose:	实现动态string
*********************************************************************/
class CStr
{

// 数据块及内部访问方法
private:
		char* strData;
		int strLength;
		// 构造, 复制, 分配
public:
		CStr();			//缺省构造函数
		CStr(const char* str);
		CStr(const CStr& source);	//复制构造函数
		~CStr();		//析构函数

// 对属性，数据，及比较的操作
		bool IsEmpty() const;			//判断是否为空,为空则返回TRUE,
		int GetLength() const;			//取得长度
		
		const char* GetString() const;	//取得字符串,以\0结束		
		char GetFirstChar() const;		//取得第一个字符

		char operator[](int idx) const;//取相应位置的字符	
		char GetAt(int idx) const;		//取相应位置的字符
		int  ConvertInt();	//将str中的数字转换成相应的整数,会自动判断出str中的数字部分,返回的是转换的结果,具体可参见atoi的MSDN帮助

		char* SubString(int startpos, int endpos); //返回从start到end之间的字符串
		char* myStrStr(const char* src, const char* dest); //在src中搜索第一次出现dest的位置
		/*void AddString(const CStr& obj);	//追加CStr	*/
		/*void AddString(const char* s);		//追加0结束字符串	*/
		/*void AddChar(char ch);				//追加字符*/

		void setValue(char* val);	

		const CStr& operator=(const CStr& source);  //'='运算符重载,CStr
		void FreeData();
		};

/*********************************************************************
* Proc:		CStr::CStr()
* Purpose:	构造空的实例
*********************************************************************/

inline CStr::CStr()
{
	strData = NULL;
	strLength = 0;

#ifdef DEBUG_TEST
	printf("CStr:%p, strData:%p, Constructure\n", this, strData);
#endif
}


/***********************************************************
 * 函数名: GetFirstChar
 * 函数功能: 获取字符串第一个字符,配置文件中，第一个字符是;表示的是注释
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-24 17:43 
***********************************************************/ 
inline char CStr::GetFirstChar() const
{
	return strData[0];
}

/***********************************************************
 * 函数名: IsEmpty
 * 函数功能: 判断字符串是否为空
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-24 17:42 
***********************************************************/ 
inline bool CStr::IsEmpty() const
{
	if(NULL == strData) return true;
	return strLength == 0;
}

/***********************************************************
 * 函数名: GetLength
 * 函数功能: 获取字符串的长度
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-24 17:42 
***********************************************************/ 
inline int CStr::GetLength() const
{
	return strLength;
}


/***********************************************************
 * 函数名: CStr::operator[](int)
 * 函数功能: 重载运算符[], 使用GetAt(),不使用这个函数
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-24 17:41 
***********************************************************/ 
inline char CStr::operator[](int idx) const
{
	return strData[idx];
}

/***********************************************************
 * 函数名: GetAt
 * 函数功能: 获取字符串idx出的字符
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-24 17:40 
***********************************************************/ 
inline char CStr::GetAt(int idx) const
{
	return strData[idx];
}

/***********************************************************
 * 函数名: GetString
 * 函数功能: 返回字符串
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2016-03-24 17:40 
***********************************************************/ 
inline const char* CStr::GetString() const
{
	return strData;
}


#endif // __MYSTR_H__

