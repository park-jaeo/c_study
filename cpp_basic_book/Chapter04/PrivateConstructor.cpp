#include <iostream>
using namespace std;

class AAA
{
private:
    int num;
public:
    // 클래스 외부에서 사용할 수 있는 public으로 생성자를 정의했다.
    AAA() : num(0) {};
    // AAA 객체에 추가로 참조자를 정의하는 함수이다.
    AAA & CreateInitObj(int n) const
    {
        AAA * ptr = new AAA(n);
        return * ptr;
    }
    void ShowNum() const 
    {
        cout << num << endl;
    }
private:
    AAA(int n) : num(n){}
};

int main()
{
    // AAA 객체를 선언했다
    AAA base;
    base.ShowNum();
    // base 객체를 대상으로 obj1 참조자를 선언했다.
    AAA &obj1 = base.CreateInitObj(3);
    obj1.ShowNum();
    // obj2 참조자를 추가로 선언했다.
    AAA &obj2 = base.CreateInitObj(12)  ;
    obj2.ShowNum();

    delete &obj1;
    delete &obj2;
    return 0;
}