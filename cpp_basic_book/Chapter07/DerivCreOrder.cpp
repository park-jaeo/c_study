#include <iostream>
using namespace std;

// Base 클래스 정의
class SoBase
{
private:
    int baseNum;
public:
    // 매개변수 없을 경우의 Constuctor
    SoBase() : baseNum(20)
    {
        cout <<"Sobase()" << endl;
    }
    SoBase(int n) : baseNum(n)
    {
        cout << "SoBase(int n)" << endl;
    }
    void ShowBaseData()
    {
        cout << baseNum << endl;
    }
};

class SoDerived : public SoBase
{
private:
    int derivNum;
public:
    // SoDerived Constructor와 SoBase Constructor가 호출된다.
    SoDerived() : derivNum(30)
    {
        cout << "SoDerived()" << endl; 
    }
    // SoDerived Constructor와 SoBase Constructor가 호출된다.
    SoDerived(int n) : derivNum(n)
    {
        cout << "SoDerived(int n)" << endl; 
    }
    // SoDerived 멤버변수와 / SoBase 멤버변수의 초기화를 진행했다
    // SoDerived Constructor와 SoBase Constructor가 호출된다.
    SoDerived(int n1, int n2) : SoBase(n1),derivNum(n2)
    {
        cout << "SoDerived(int n1, int n2)" << endl; 
    }
    void ShowDerivData()
    {
        ShowBaseData();
        cout << derivNum << endl;
    }
};

int main()
{
    cout << "case1 ----------------" << endl;
    SoDerived dr1;
    dr1.ShowDerivData();
    
    cout << "----------------------" << endl;
    cout << "case2 ----------------" << endl;
    SoDerived dr2(12);
    dr2.ShowDerivData();
    
    cout << "----------------------" << endl;
    cout << "case3 ----------------" << endl;
    SoDerived dr3(23,24);
    dr3.ShowDerivData();

    return 0;
}