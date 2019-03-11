/*************************************************************************
	> File Name: mystring.cpp
	> Author: Jona
	> Mail: mblrwuzy@gmail.com 
	> Created Time: 2019-02-18 18:47:49
 ************************************************************************/

#include "mystring.h"
#include "iostream.h"

namespace std {
    string::string(const char* str)
    {
        if (NULL == str)
            return;

        len = strlen(str);
        if (pbuf) delete pbuf;

        pbuf = new char[len + 1];
        if (NULL == pbuf)
            return;

        strcpy(pbuf, str);
        pbuf[len] = '\0';
    }

    string::string(const string& s)
    {
        len = s.len;
        pbuf = new char[len + 1];
        strcpy(pbuf, s.pbuf);
        pbuf[len] = '\0';
    }

    string::~string()
    {
        len = 0;
        if(pbuf) {
            free(pbuf);
            pbuf = NULL;
        }
    }

    string& string::operator=(const string& s)
    {
        if (this == &s) {   // *this==s will occur an error, no match for operator== for string==string
            return *this;
        }
        delete pbuf;
        len = strlen(s.pbuf);
        pbuf = new char[len + 1];
        strcpy(pbuf, s.pbuf);
        pbuf[len] = '\0';

        return *this;
    }

    string& string::operator=(const char* str)
    {
        if (strcmp(pbuf, str) == 0) {
            return *this;
        }

        delete pbuf;
        len = strlen(str);
        pbuf = new char[len + 1];
        strcpy(pbuf, str);
        pbuf[len] = '\0';

        return *this;
    }

    const char& string::operator[](unsigned idx) const
    {
        return pbuf[idx];
    }

    char& string::operator[](unsigned idx)
    {
        return pbuf[idx];
    }

    const char* string::c_str() const
    {
        return pbuf;
    }

    unsigned string::length() const
    {
        return len;
    }

    unsigned string::size() const
    {
        return len;
    }

    ofstream& operator<<(ofstream& o, const string& s)
    {
        return o<<s.c_str();
    }
}
