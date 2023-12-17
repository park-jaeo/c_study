#include <iostream>
using namespace std;

// int형을 받아 bool형을 반환하는 함수이다.
bool IsPositive(int num)
{
    if(num<=0)
        return false;
    else
        return true;
}

int main()
{
    bool isPos;
    int num;
    cout << "Input Number"; cin >> num;

    isPos = IsPositive(num);
    
    // if 문의 조건문이
    // (0 ≠ 조건문)일 경우에는 True로 if문이 실행되고
    // (0 = 조건문)일 경우에는 False로 else문이 실행된다.
    if(isPos)
        cout << "Positive number" << endl;
    else
        cout << "Negative number" << endl;
    return 0;
}