/*************************************************************************
	> File Name: ctors.cpp
	> Author: Jona
	> Mail: mblrwuzy@gmail.com 
	> Created Time: 2019-02-18 16:43:50
 ************************************************************************/

void run_hooks();
extern "C" void do_global_ctors() {
    run_hooks();
}
