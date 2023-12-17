#include <iostream>
using namespace std;

int& RefRetFuncOne(int &ref)
{
    ref++;
    return ref;
}

int main()
{
    int num1 = 1;

    // num = 2
    int &num2 = RefRetFuncOne(num1);

    // num = 3
    num1++;

    // num = 4
    num2++;
    cout << "num1 : " << num1 << endl;
    cout << "num2 : " << num2 << endl;
    return 0;
}