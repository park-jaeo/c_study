#include <iostream>
#include "Point.h"
#include "Circle.h"
using namespace std;



void Circle::Init(Point c,int r)
{
    cen = c;
    rad = r;
}

int Circle::GetRad()
{
    return rad;
}

Point Circle::GetCen()
{
    return cen;
}


void Circle::ShowCirInfo()
{
    // private인 Point객체의 멤버 변수에 직접 접속하려 시도했다.
    // cout << "center position : "<< "[" << cen.xpos << ", " << cen.ypos << "]" << endl;
    // private 멤버 변수에 접근할 수 있도록 별도의 함수를 정의했다.
    cout << "center position : "<< "[" << cen.GetXpos() << ", " << cen.GetYpos() << "]" << endl;
    cout << "radious : " << rad;
}