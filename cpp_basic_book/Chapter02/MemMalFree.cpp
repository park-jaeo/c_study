#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
// C++에서는 C의 헤더파일을 불러오는 것도 가능하다

char * MakeStrAdr(int len)
{
    char * str = (char*)malloc(sizeof(char)*len);
    return str;
}

int main()
{
    // MakeStrAdr 함수를 이용하여 힙에 배열을 할당한다
    char * str = MakeStrAdr(20);
    strcpy(str, "I am so happy~");
    cout << str << endl;
    // 힙에 할당한 메모리 공간을 소멸한다
    free(str);
    return 0;
}