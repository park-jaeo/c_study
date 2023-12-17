#include <iostream>
#include <cstring>
#include "Car.h"
using namespace std;


int main()
{
    Car run99;
    // 클래스를 생성하면서 변수를 초기화하지 못하기 때문에
    // public으로 선언된 별도의 Init함수를 통해 변수를 초기화하고 있다.
    run99.InitMembers("run99" , 100);
    run99.Accel();
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();
    return 0;
}