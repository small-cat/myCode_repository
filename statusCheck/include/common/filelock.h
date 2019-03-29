/*************************************************************************
	> File Name: filelock.h
	> Author:
	> Mail:
	> Created Time: 2017-01-20 10:49:46
 ************************************************************************/

#ifndef __FILE_LOCK_H__
#define __FILE_LOCK_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>

#include "common/error.h"

int lock_reg (int fd, int cmd, int type, off_t offset, int whence, off_t len);
pid_t lock_test (int fd, int type, off_t offset, int whence, off_t len);

/* define file lock macro */
/* 宏函数后面不能有空格 */
#define read_lock(fd, offset, whence, len) \
    lock_reg ((fd), F_SETLK, F_RDLCK, (offset), (whence), (len))

#define write_lock(fd, offset, whence, len) \
    lock_reg ((fd), F_SETLK, F_WRLCK, (offset), (whence), (len))

#define is_write_lockable(fd, offset, whence, len) \
    (lock_test ((fd), F_WRLCK, (offset), (whence), (len)) == 0)

#ifdef __cplusplus
}
#endif

#endif
