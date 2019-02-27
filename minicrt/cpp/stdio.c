/*************************************************************************
	> File Name: stdio.c
	> Author: Jona
	> Mail: mblrwuzy@gmail.com 
	> Created Time: 2019-02-01 10:37:38
 ************************************************************************/

#include "minicrt.h"

int mini_crt_io_init() {
    //TODO
    //this is a very simple version, does not need to initalize
    //reverse
    return 1;
}

/************************************************************************* 
 * * FUNCTION NAME: open
 * * DESCRIPTION: open file and return file descriptor, implement read 
 * function by system call sys_open.
 * system call number: 2
 * * ARGS: 
 * rax - system call number 0x2
 * rdi - pathname
 * rsi - flags
 * rdx - mode
 * * RETURN VALUE: fd - file descriptor
 * * AUTHOR: Jona
 * * CREATE TIME: 2019-02-01 11:03 
*************************************************************************/ 
static int open(const char* pathname, int flags, int mode) {
    int fd = 0;
    asm (
            "mov $2, %%rax \n\t"
            "mov %1, %%rdi \n\t"
            "mov %2, %%rsi \n\t"
            "mov %3, %%rdx \n\t"
            "syscall \n\t"
            :"=r"(fd)
            :"m"(pathname), "m"(flags), "m"(mode)
        );
    return fd;
}

/************************************************************************* 
 * * FUNCTION NAME: read
 * * DESCRIPTION: implement with system call sys_read
 * * ARGS: 
 * rax = 0x0
 * rdi = fd
 * rsi = buffer
 * rdx = size
 * * RETURN VALUE: 
 * * AUTHOR: Jona
 * * CREATE TIME: 2019-02-01 11:13 
*************************************************************************/ 
static int read(int fd, void* buffer, unsigned long size) {
    int ret = 0;
    asm (
            "mov $0, %%rax \n\t"
            "mov %1, %%rdi \n\t"
            "mov %2, %%rsi \n\t"
            "mov %3, %%rdx \n\t"
            "syscall      \n\t"
            :"=r"(ret)
            :"m"(fd), "m"(buffer), "m"(size)
        );

    return ret;
}

/************************************************************************* 
 * * FUNCTION NAME: write
 * * DESCRIPTION: implement with system call sys_write
 * * ARGS: 
 * rax = 0x01
 * rdi = fd
 * rsi = buffer
 * rdx = size
 * * RETURN VALUE: 
 * * AUTHOR: Jona
 * * CREATE TIME: 2019-02-01 11:18 
*************************************************************************/ 
static int write(int fd, const void* buffer, unsigned long size) {
    // 64位寄存器，只能使用64位的变量存储，如果使用size为unsigned，那么
    // mov到寄存器之后，查看的寄存器状态值不是size的大小
    int ret = 0;
    asm(
            "mov $1, %%rax \n\t"
            "mov %1, %%rdi \n\t"
            "mov %2, %%rsi \n\t"
            "mov %3, %%rdx \n\t"
            "syscall      \n\t"
            :"=r"(ret)
            :"m"(fd), "m"(buffer), "m"(size)
       );

    return ret;
}

/************************************************************************* 
 * * FUNCTION NAME: close
 * * DESCRIPTION: implement with system call sys_close
 * * ARGS: 
 * rax = 0x3
 * rdi = fd
 * * RETURN VALUE: 
 * * AUTHOR: Jona
 * * CREATE TIME: 2019-02-01 11:22 
*************************************************************************/ 
static int close(int fd) {
    int ret = 0;
    asm(
            "mov $3, %%rax \n\t"
            "mov %1, %%rdi \n\t"
            "syscall      \n\t"
            :"=r"(ret)
            :"m"(fd)
       );

    return ret;
}

/************************************************************************* 
 * * FUNCTION NAME: seek
 * * DESCRIPTION: implement with system call sys_lseek
 * * ARGS: 
 * rax = 0x8
 * rdi = fd
 * rsi = offset
 * rdx = mode
 * * RETURN VALUE: 
 * * AUTHOR: Jona
 * * CREATE TIME: 2019-02-01 11:24 
*************************************************************************/ 
static int seek(int fd, int offset, int mode) {
    int ret = 0;
    asm(
            "mov $8, %%rax \n\t"
            "mov %1, %%rdi \n\t"
            "mov %2, %%rsi \n\t"
            "mov %3, %%rdx \n\t"
            "syscall      \n\t"
            :"=r"(ret)
            :"m"(fd), "m"(offset), "m"(mode)
       );

    return ret;
}

FILE* fopen(const char* filename, const char* mode) {
    int fd = -1;
    int flags = 0;
    int access = 00700;     // file permissions

    if (strcmp(mode, "w") == 0) {
        flags |= O_WRONLY | O_CREAT | O_TRUNC;
    }

    if (strcmp(mode, "w+") == 0) {
        flags |= O_RDWR | O_CREAT | O_TRUNC;
    }

    if (strcmp(mode, "r") == 0) {
        flags |= O_RDONLY;
    }

    if (strcmp(mode, "r+") == 0) {
        flags |= O_RDWR | O_CREAT;
    }

    if (strcmp(mode, "a+") == 0) {
        flags |= O_RDWR | O_CREAT | O_APPEND;
    }

    fd = open(filename, flags, access);

    return (FILE*)fd;
}

int fread(void* buffer, int size, int count, FILE* stream) {
    return read((int)stream, buffer, size*count);
}

int fwrite(const void* buffer, int size, int count, FILE* stream) {
    return write((int)stream, buffer, size*count);
}

int fclose(FILE* fp) {
    return close((int)fp);
}

int fseek(FILE* fp, int offset, int set) {
    return seek((int)fp, offset, set);
}
