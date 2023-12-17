#include <iostream>

using namespace std;

class A
{
private:
    int num;
public:
    A(int A_num)
        // Constructor를 사용할 때
        // C++ 멤버 이니셜라이저를 사용해 주었다.
        :num(A_num)
    {
        cout << "num: " << num << endl;
    }
};

int main(){
    A a1(1);
    return 0;
}