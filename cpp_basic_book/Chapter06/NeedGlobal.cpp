#include <iostream>
using namespace std;

int simObjCnt = 0;
int cmxObjCnt = 0;



class SoSimple
{
public:
    SoSimple()
    {
        simObjCnt++;
        cout << simObjCnt << "번째 SoSimple 객체" << endl;
    }
};

class SoComplex
{
public:
    // Constructor
    SoComplex()
    {
        cmxObjCnt++;
        cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
    }
    // Copy Constructor
    SoComplex(SoComplex &copy)
    {
        cmxObjCnt++;
        cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
    }
};

int main()
{
    // Construcor
    SoSimple sim1;
    // Constructor
    SoSimple sim2;

    // Constructor
    SoComplex com1;
    // Copy Constructor
    SoComplex com2 = com1;
    // Constructor 호출
    SoComplex();
    return 0;
}