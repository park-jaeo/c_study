#include <iostream>
#include <string.h>
using namespace std;
// C++ 형식으로 메모리 할당/해체한다.

char * MakeStrAdr(int len)
{
    char * str = new char[len];
    return str;
}

int main()
{
    char * str = MakeStrAdr(20);
    strcpy(str, "I am so Happy");
    cout << str << endl;
    delete []str;
    return 0;
}