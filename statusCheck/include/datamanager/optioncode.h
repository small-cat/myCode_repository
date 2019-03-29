#ifndef __OPTIONAL_DATA_H__
#define __OPTIONAL_DATA_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/*
 *  * 此结构体用于存储从 redis 中查找出的数据
 *   */
typedef struct _DATA_
{
	char imsi[16];  /* IMSI 号 */
	int osStsDtl;   /* 单双停状态，2表示单停，4表示双停 */
	int validDate;  /* 生效时间，秒数的形式 */
	int expireDate; /* 失效时间，秒数的形式 */
	char phoneNum[16]; /* 手机号码 */
}Data;


typedef struct _VID_
{  
	char* oppNum; //对端号码
	int duration; //通话时长			
    char* msc;    //MSC 
    char* lac_id; //lac_id
    char* cell_id;//cell_id
    char* partial_id; //话单切割标志
}VID_OP;

typedef struct _VI_
{
	char* oppNum; //对端号码
	int serviceCode; //业务类型
	int serviceType; //业务类型000电信业务，001承载业务，002补充业务
	int duration; //通话时长，短信位0
	char UTC_Offset[6]; //时区信息 +0800
}VI_OP;

typedef struct _VISMS_
{
	char* oppNum; 
	char* applyTime; //申请时间
}VISMS_OP;

typedef struct _VIM_
{
	char* oppNum;
	char* applyTime;
}VIM_OP;

typedef struct _VMMS_
{
	char* oppNum; 
	char* receiveTime; //接收时间
}VMMS_OP;

typedef struct _VIMM_
{
	char* oppNum;
	char* receiveTime;
}VIMM_OP;

typedef struct _VIG_
{
	char* APNNI; //网络服务编号
	long int upVolume; //上行流量
	long int downVolume; //下行流量
}VIG_OP;

typedef struct _VLTE_
{
        char* APNNI;
        char* sgsnAddr;
        char* ggsnAddr;
        long int upVolume;
        long int downVolume;
}VLTE_OP;

typedef struct _VGG_
{
        char* APNNI;
        long int upVolume;
        long int downVolume;
}VGG_OP;

#ifdef __cplusplus
}
#endif

#endif
