#include <iostream>
using namespace std;

class SinivelCap // 콧물 캡슐
{
public:
    void Take() const {cout << "콧물 처방" << endl;}
};

class SneezeCap // 재채기 처방
{
public:
    void Take() const {cout << "재채기 처방" << endl;}
};

class SnuffleCap // 코막힘 처방
{
public:
    void Take() const {cout << "코막힘 처방" << endl;}
};

class CONTA600
{
private:
    SinivelCap sin;
    SneezeCap sne;
    SnuffleCap snu;
public:
    void Take() const
    {
        sin.Take();
        sne.Take();
        snu.Take();
    }
};

class ColdPatient
{
public:
    void TakeCONTA600(const CONTA600 &cap) const
    {
        cap.Take();
    }
};

int main()
{
    CONTA600 cap;
    ColdPatient sufferer;
    sufferer.TakeCONTA600(cap);
    return 0;
}

// 1. CONTA600 클래스의 멤버함수를 정의할 때 sin, sne, sne의 멤버함수를 불러와 캡슐화했다.
// 2. ColdPatient 클래스에서 CONTA600의 객체의 멤버함수를 불러와 실행했다.
// 3. const키워드로 멤버 변수의 변경을 방지했다.


