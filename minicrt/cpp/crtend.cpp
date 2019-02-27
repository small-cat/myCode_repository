/*************************************************************************
	> File Name: crtend.cpp
	> Author: Jona
	> Mail: mblrwuzy@gmail.com 
	> Created Time: 2019-02-18 16:59:39
 ************************************************************************/

typedef void (*ctor_func)(void);

ctor_func crt_end[1] __attribute__ ((section(".ctor"))) = {
    (ctor_func) -1
};
