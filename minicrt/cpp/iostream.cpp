/*************************************************************************
	> File Name: iostream.cpp
	> Author: Jona
	> Mail: mblrwuzy@gmail.com 
	> Created Time: 2019-02-19 14:29:27
 ************************************************************************/

#include "iostream.h"
#include "minicrt.h"

namespace std {
    ofstream::ofstream() {
        fp = (FILE*)0;
    }

    ofstream::ofstream(FILE *p) {
        fp = p;
    }

    ofstream::ofstream(const char* filename, ofstream::openmode md) {
        fp = 0;
        open(filename, md);
    }

    ofstream::~ofstream() {
        close();
    }

    ofstream& ofstream::operator<<(char c) {
        fputc(c, fp);
        return *this;
    }

    ofstream& ofstream::operator<<(int n) {
        fprintf(fp, "%d", n);
        return *this;
    }

    ofstream& ofstream::operator<<(const char* str) {
        fprintf(fp, "%s", str);
        return *this;
    }

    ofstream& ofstream::operator<<(ofstream& (*manip)(ofstream&)) {
        return manip(*this);
    }

    void ofstream::open(const char* filename, ofstream::openmode md) {
        char mode[4] = {0};
        int len = 0;
        close();

        switch (md) {
        case out | trunc:
            strcpy(mode, "w");
            len = 1;
            break;
        case out | in | trunc:
            strcpy(mode, "w+");
            len = 2;
            break;
        case out | trunc | binary:
            strcpy(mode, "wb");
            len = 2;
            break;
        case out | in | binary | trunc:
            strcpy(mode, "wb+");
            len = 3;
            break;
        }

        mode[len] = '\0';
        fp = fopen(filename, mode);
    }

    void ofstream::close() {
        if (fp) {
            fclose(fp);
            fp = 0;
        }
    }

    ofstream& ofstream::write(const char* buf, unsigned size) {
        fwrite(buf, 1, size, fp);
        return *this;
    }

    stdout_stream::stdout_stream(FILE* fp) : ofstream(fp) {
    }

    stdout_stream::stdout_stream() : ofstream(stdout) {
    }

    stdout_stream cout = stdout;
}

