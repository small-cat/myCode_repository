#ifndef _DECODE_H_
#define _DECODE_H_
#include <string>
#include "datamanager/list_queue.h"
#include "datamanager/datamanager.h"
#include "datamanager/optioncode.h"

#define FILE_HEAD "1046000"
#define FILE_TAIL "9046000000"      /* 文件尾记录，之前没有做尾记录判断，
                                   导致输出文件中，validRecordNum > totalRecordNum */
#define VI_FILE_TAIL "9000000000"   /* VI 文件尾记录不同 */

class CDecode
{
public:
//	int Decode(const char *path);
	CDecode();
	virtual ~CDecode();
	int DecodeFile(const char *fileName,CDataManager *p);//逐行读取fileName文件。
	virtual NodeRecord *DecodeRecord(char* Record,const char* file) = 0;//解码一行记录，并存放在链表中；
	int lineNumber;//当前文件的行号
	char * GetNumber(const char *oriNum);//获取以170开头的标准号码。
private:
	
	char *filepath;//当前文件的绝对路径。
};

class CDecodeVID : public CDecode
{
	NodeRecord *DecodeRecord( char* Record,const char* file);
};

class CDecodeVISMS : public CDecode
{
	NodeRecord *DecodeRecord( char* Record,const char* file);
};


class CDecodeVMMS : public CDecode
{
    NodeRecord *DecodeRecord( char* Record,const char* file);
};

class CDecodeVIM : public CDecode
{
	NodeRecord *DecodeRecord( char* Record,const char* file);
};

class CDecodeVIMM : public CDecode
{
	NodeRecord *DecodeRecord( char* Record,const char* file);
};

class CDecodeVI : public CDecode
{
	NodeRecord *DecodeRecord( char* Record,const char* file);
};

class CDecodeVGG : public CDecode
{
	NodeRecord *DecodeRecord( char* Record,const char* file);
};

class CDecodeVLTE : public CDecode
{
	NodeRecord *DecodeRecord( char* Record,const char* file );
};

class CDecodeVIG : public CDecode
{
	NodeRecord *DecodeRecord( char* Record,const char* file );
};

#endif
