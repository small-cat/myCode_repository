/*************************************************************************
	> File Name: crtbegin.cpp
	> Author: Jona
	> Mail: mblrwuzy@gmail.com 
	> Created Time: 2019-02-18 16:53:42
 ************************************************************************/

typedef void (*ctor_func)(void);

// create a func pointer array, contain all the constructure funcs
ctor_func ctors_begin[1] __attribute__((section(".ctor"))) = {
    (ctor_func) -1
};

void run_hooks() {
    const ctor_func* list = ctors_begin;
    // the first element in ctors_begin is number of elements
    // the last element is -1
    while(*++list != ((ctor_func)-1)) { 
        (**list)();
    }
}
