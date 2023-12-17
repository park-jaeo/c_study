#include <iostream>
#include "Print.h"
using namespace std;

void Printer::SetString()
{
    cout << "문자열을 입력하세요 : " << endl;
    cin >> string;
}

void Printer::ShowString()
{
    cout << "저장한 문자열 : " << endl;
    cout << string << endl;
}
