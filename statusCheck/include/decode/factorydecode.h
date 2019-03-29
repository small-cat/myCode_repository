#ifndef __CFACTORY_DECODE_H__
#define __CFACTORY_DECODE_H__
#include <iostream>
#include "decode.h"
#include "datamanager/datamanager.h"
class CFactoryDecode
{
private:
	int createDecode(const char* filename);
public:
	int startWork();
	CDataManager *pManager;
    CFactoryDecode(CDataManager *p);
	~CFactoryDecode();
};
#endif
