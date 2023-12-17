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
    Base(int num1,int num2, int num3)  
    {
        this->num1 = num1;
        this->num2 = num2;
        this->num3 = num3;
    }
    void ShowData()
    {
        cout << num1 << ", " << num2 << ", " << num3 << endl;
    }
};

// Base 클래스를 상속한다
class Derived : public Base
{
public:
    void ShowBaseMember()
    {
        cout << num1; // 컴파일 에러
        cout << num2; // 컴파일 OK
        cout << num3; // 컴파일 OK
    }
}

int main()
{
    Base mnum(1,2,3);

}