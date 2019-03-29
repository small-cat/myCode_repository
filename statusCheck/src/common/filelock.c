/*************************************************************************
	> File Name: filelock.c
	> Author:
	> Mail:
	> Created Time: 2017-01-20 11:21:27
 ************************************************************************/

#include "common/filelock.h"

/***********************************************************
 * 函数名: int lock_reg (int fd, int cmd, int type, off_t offset, int whence, 
 *                  off_t len)
 * 函数功能: 添加文件锁
 * 参数说明: 
 * 返回值说明: 
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2017-01-20 11:28 
***********************************************************/ 
int lock_reg (int fd, int cmd, int type, off_t offset, int whence, 
        off_t len)
{
    struct flock flck;

    flck.l_type = type;
    flck.l_start = offset;
    flck.l_whence = whence;
    flck.l_len = len;

    return (fcntl (fd, cmd, &flck));
}

/***********************************************************
 * 函数名: pid_t lock_test (int fd, int type, off_t offset, int whence, off_t len)
 * 函数功能: 
 * 参数说明: 
 * 返回值说明: 0 -- FALSE，表示没有进程对文件加锁
 *             1 -- TRUE，存在进程对文件该区域已经加锁，返回进程的 pid
 * 涉及到的表: 
 * 作者: wzhenyu 
 * 时间: 2017-01-20 12:49 
***********************************************************/ 
pid_t lock_test (int fd, int type, off_t offset, int whence, off_t len)
{
    struct flock lock;

    lock.l_type = type;
    lock.l_start = offset;
    lock.l_whence = whence;
    lock.l_len = len;

    if (fcntl (fd, F_GETLK, &lock) < 0)
    {
        ERRPRINT (1, return -1, 0, "common#filelock#lock_test#"
                "fcntl error, line %d", __LINE__);
    }

    if (lock.l_type == F_UNLCK)
    {
        return 0;   /* region is not locked by other process */
    }

    return lock.l_pid;  /* return pid of lock owner */
}
