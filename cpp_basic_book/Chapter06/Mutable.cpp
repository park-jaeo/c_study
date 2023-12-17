#include <iostream>
using namespace std;

class SoSimple
{
private:
    int num1;
    // mutable 키워드는 const함수 내에서의 변경을 예외적으로 허용한다.
    mutable int num2;
public:
    SoSimple(int n1,int n2) 
        : num1(n1), num2(n2)
    {}
    void ShowSimpleData() const
    {
        cout << num1 << ", " << num2 << endl;
    }
    // 멤버변수 num2를 변경한다.
    void CopyToNum2() const
    {
        num2 = num1;
    }
};

int main()
{
    SoSimple sm(1,2);
    sm.ShowSimpleData();
    sm.CopyToNum2();
    sm.ShowSimpleData();
    return 0;
}