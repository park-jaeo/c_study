#include <iostream>
using namespace std;

class SoSimple
{
private:
    int num;
public:
    SoSimple(int n) : num(n)
    {}
    SoSimple& AddNum(int n)
    {
        num+=n;
        return *this;
    }
    void ShowData() const
    {
        cout << "num : " << num << endl;
    }
};

int main()
{
    // const 객체를 생성한다
    const SoSimple obj(7);
    // 멤버함수 AddNum은 const 함수가 아니기 때문에 호출이 불가능하다.
    // obj.AddNum(20);
    obj.ShowData();
    return 0;
}