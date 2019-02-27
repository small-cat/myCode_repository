/*************************************************************************
	> File Name: mystring.h
	> Author: Jona
	> Mail: mblrwuzy@gmail.com 
	> Created Time: 2019-02-19 17:08:23
 ************************************************************************/
#ifndef __MY_STRING_H__
#define __MY_STRING_H__

#include "minicrt.h"
#include "iostream.h"

namespace std {
    class string {
        private:
            unsigned len;
            char* pbuf;
        public:
            explicit string(const char* str);
            string(const string&);
            ~string();
            string& operator=(const string&);
            string& operator=(const char*);
            const char& operator[](unsigned idx) const;
            char& operator[](unsigned idx);
            const char* c_str() const;
            unsigned length() const;
            unsigned size() const;
            friend ofstream& operator<<(ofstream& o, const string& s);
    };
}

#endif
