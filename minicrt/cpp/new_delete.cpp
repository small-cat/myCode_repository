/*************************************************************************
	> File Name: new_delete.cpp
	> Author: Jona
	> Mail: mblrwuzy@gmail.com 
	> Created Time: 2019-02-18 11:37:33
 ************************************************************************/

extern "C" void* malloc(unsigned int);
extern "C" void free(void*);

void* operator new(long unsigned int size) {
    return malloc(size);
}

void operator delete(void* p) {
    free(p);
}

void* operator new[](long unsigned int size) {
    return malloc(size);
}

void operator delete[](void *p) {
    free(p);
}
