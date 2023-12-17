#include <iostream>
using namespace std;

int RefRetFuncOne(int &ref)
{
    ref++;
    return ref;
}

int main()
{
    int num1 = 1;

    // 참조값 반환자를 일반변수 num2에 저장해 주었다.
    // 이 경우 num2는 num1과는 별개의 변수가 된다.
    int num2 = RefRetFuncOne(num1);

    num1+=1;
    num2+=100;
    
    // num1 : 3
    // 1. num1이 RefRetFuncOne 함수에 전해져 연산을 진행했다.
    // 2. num1 += 1 연산을 했다
    cout << "num1 : " << num1 << endl;
    // num2 : 102
    cout << "num2 : " << num2 << endl;
    return 0;
}   