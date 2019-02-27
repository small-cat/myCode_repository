/*************************************************************************
	> File Name: malloc.c
	> Author: Jona
	> Mail: mblrwuzy@gmail.com 
	> Created Time: 2019-01-31 16:58:23
 ************************************************************************/

#include "minicrt.h"

typedef struct _heap_header {
    enum {
        HEAP_BLOCK_FREE = 0xABABABAB,   //magic number of free block
        HEAP_BLOCK_USED = 0xCDCDCDCD   //magic number of used block
    }type;

    unsigned size;
    struct _heap_header* next;
    struct _heap_header* prev;
} heap_header;

#define ADDR_ADD(a, o) (((char*)(a)) + o)
#define HEADER_SIZE (sizeof(heap_header))

static heap_header* list_head = NULL;

void free(void* ptr) {
    heap_header* header = (heap_header*)ADDR_ADD(ptr, -HEADER_SIZE);
    if (header->type != HEAP_BLOCK_USED) {
        return;
    }

    header->type = HEAP_BLOCK_FREE;
    //merge if prev or next is also free
    if (header->prev!=NULL && header->prev->type==HEAP_BLOCK_FREE) {
        //merge with prev
        header->prev->next = header->next;
        if (header->next != NULL) {
            header->next->prev = header->prev;
        }
        header->prev->size += header->size;
        header = header->prev;
    }

    if (header->next!=NULL && header->next->type==HEAP_BLOCK_FREE) {
        // merge with next
        header->size += header->next->size;
        header->next->prev = NULL;
        header->next = header->next->next;
    }
}

void* malloc(unsigned size) {
    heap_header* header;
    if (0 == size) {
        return NULL;
    }

    header = list_head;     //global static variable will be initialized at other place.
    while (NULL != header) {
        if (header->type == HEAP_BLOCK_USED) {
            header = header->next;
            continue;
        }

        if ((header->size > size + HEADER_SIZE) &&
                (header->size <= size + HEADER_SIZE * 2)) {
            // header is apt 
            header->type = HEAP_BLOCK_USED;
            return ADDR_ADD(header, HEADER_SIZE);
        }

        if (header->size > size + HEADER_SIZE * 2) {
            // block is too big, split into two parts.
            heap_header* split_next = (heap_header*)ADDR_ADD(header, size + HEADER_SIZE);
            split_next->prev = header;
            split_next->next = header->next;
            if (header->next) {
                split_next->next->prev = split_next;
            }
            header->next = split_next;

            split_next->size = header->size - (size + HEADER_SIZE);
            split_next->type = HEAP_BLOCK_FREE;
            header->size = size + HEADER_SIZE;
            header->type = HEAP_BLOCK_USED;

            return ADDR_ADD(header, HEADER_SIZE);
        } 
        header = header->next;
    }
    return NULL;
}

static int brk(void* end_data_segment) {
    int ret = 0;
    // Linux brk system call
    // sys_brk system call number: 12
    // rax:12, rdi:end_data_segment
    asm (
            "mov $12, %%rax \n\t"
            "mov %1, %%rdi  \n\t"
            "syscall        \n\t"
            :"=r"(ret)
            :"b"(end_data_segment)
        );

    return ret;
}

int mini_crt_heap_init() {
    void* base = NULL;
    heap_header* header = NULL;

    // 32MB heap size
    unsigned heap_size = 1024 * 1024 * 32;
    base = (void*)brk(0);
    void* end = ADDR_ADD(base, heap_size);
    end = (void*)brk(end);
    if (!end) {
        return 0;
    }

    header = (heap_header*)base;
    header->size = heap_size;
    header->type = HEAP_BLOCK_FREE;
    header->next = NULL;
    header->prev = NULL;
    list_head = header;

    return 1;
}
