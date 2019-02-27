/*************************************************************************
	> File Name: test.c
	> Author: Jona
	> Mail: mblrwuzy@gmail.com 
	> Created Time: 2019-02-02 09:36:25
 ************************************************************************/

#include "../minicrt.h"
#include "../iostream.h"
#include "../mystring.h"

using namespace std;

int main(int argc, char* argv[])
{
    string* msg = new string("MiniCRT++");
    cout << *msg << endl;
    cout<<"hello world";
    delete msg;
    return 0;
}
