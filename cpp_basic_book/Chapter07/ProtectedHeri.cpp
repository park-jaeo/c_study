#include <iostream>
using namespace std;

class Base
{
private:
    int num1;
protected:
    int num2;
public:
    int num3;

    Base() : num1(1),num2(2),num3(3)
    {}
};

class Derived : protected Base{}; // empty

int main()
{
    Derived drv;
    cout << drv.num3 << endl; // 컴파일 에러 발생
    // 상속으로 num3 멤버변수는 protected가 되고,
    // protected 멤버 변수에 직접 접근을 시도했기 때문에 컴파일 에러가 발생한다.
    return 0;
}