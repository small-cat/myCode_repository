/*************************************************************************
	> File Name: common.h
	> Author: 
	> Mail: 
	> Created Time: 2019-08-13 22:27:59
	> Description: 
 ************************************************************************/
#ifndef __COMMON_H__
#define __COMMON_H__

#include <string>
#include <vector>
#include <sstream>
#include <iostream>

static void split(const std::string &s, std::vector<std::string> &sv, const char flag = ' ') {
    sv.clear();
    std::istringstream iss(s);
    std::string temp;

    while (std::getline(iss, temp, flag)) {
        sv.push_back(temp);
    }
}

#endif
