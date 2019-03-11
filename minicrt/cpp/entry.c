/*************************************************************************
	> File Name: entry.c
	> Author: Jona
	> Mail: mblrwuzy@gmail.com 
	> Created Time: 2019-01-31 16:23:19
 ************************************************************************/

#include "minicrt.h"

extern int main(int argc, char* argv[]);
void exit(int exitCode);

static void crt_fatal_error(const char* msg)
{
    printf("fatal error: %s", msg);
    exit(1);
}

void mini_crt_entry(void)
{
    int ret;
    int argc;
    char** argv;

    char* ebp_reg;
    //ebp_reg = %ebp
    asm(
            "mov %%rbp, %0 \t\n"
            :"=r"(ebp_reg)
       );

    // 64bit, the size of rbp is 8 bytes.
    argc = *(long *)(ebp_reg + 8);
    argv = (char**)(ebp_reg + 16);

    if (!mini_crt_heap_init()) {
        crt_fatal_error("heap initialize failed.");
    }

    if (!mini_crt_io_init()) {
        crt_fatal_error("IO initialize failed.");
    }

    do_global_ctors();

    // call main functions, and deliver the command line args.
    ret = main(argc, argv);
    exit(ret);
}

/* system call number of sys_exit is 60 */
void exit(int exitCode)
{
    mini_crt_call_exit_routine();
    asm(
            "mov $0x3c, %%rax \n\t"
            "mov %0, %%rdi \n\t"
            "syscall \n\t"
            ::"m"(exitCode)
       );
}
