#include <iostream>
using namespace std;

class AAA
{
public:
    AAA()
    {
        cout << "empty object" << endl;
    }
    void ShowYourName()
    {
        cout << "I'm class AAA" << endl;
    }
};

class BBB
{
private:
    // reference를 선언했다.
    AAA &ref;
    const int &num;
public:
    BBB(AAA &r, const int &n)
    // reference를 선언할 때, 참조하는 값이 없으면 선언이 불가능한다.
    // BBB생성자의 인자
    // AAA 객체의 별칭 r, const int 별칭 n -> BBB멤버변수로 전달
     : ref(r), num(n)
    {
    }
    void ShowYourName()
    {
        ref.ShowYourName();
        cout << "and" << endl;
        cout << "I ref num " << num << endl;
    }
};

int main()
{
    AAA obj1;
    BBB obj2(obj1, 20);
    obj2.ShowYourName();

}