/*************************************************************************
	> File Name: atexit.c
	> Author: Jona
	> Mail: mblrwuzy@gmail.com 
	> Created Time: 2019-02-18 17:15:04
 ************************************************************************/

#include "minicrt.h"

typedef struct _func_node_ {
    atexit_func_t func;
    void* arg;
    int is_cxa;
    struct _func_node_* next;
}func_node;

/* insert into list from head, travel list from head : FILO */
static func_node* atexit_list = NULL;

int register_atexit(atexit_func_t func, void* arg, int is_cxa) {
    func_node* node;
    if (!func) {
        return -1;
    }

    node = (func_node*)malloc(sizeof(func_node));
    if (NULL == node) {
        return -1;
    }

    node->func = func;
    node->arg = arg;
    node->is_cxa = is_cxa;
    node->next = atexit_list;
    atexit_list = node;

    return 0;
}

int __cxa_atexit(cxa_func_t func, void* arg, void* unused) {
    return register_atexit((atexit_func_t)(func), arg, 1);
}

int atexit(atexit_func_t func) {
    return register_atexit(func, 0, 0);
}

void mini_crt_call_exit_routine() {
    func_node* p = atexit_list;
    func_node* tmp = NULL;
    while (p) {
        if (p->is_cxa) {    // func registered by __cxa_atexit with arguments
            ((cxa_func_t)(p->func))(p->arg);
        } else {
            p->func();
        }

        tmp = p;
        p = p->next;
        free(tmp);
    }

    atexit_list = NULL;
}
