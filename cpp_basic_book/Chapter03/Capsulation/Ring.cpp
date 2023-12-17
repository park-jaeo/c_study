#include <iostream>
#include "Point.h"
#include "Circle.h"
#include "Ring.h"
using namespace std;

void Ring::Init(int xpos1, int ypos1, int rad1, int xpos2, int ypos2, int rad2)
{
    Point incen,outcen;
    incen.Init(xpos1, ypos1);
    outcen.Init(xpos2,ypos2);

    // private 멤버변수인 incir,outcir을 다시 초기화하지 않도록 주의한다.    
    // Circle incir,outcir;
    incir.Init(incen,rad1);
    outcir.Init(outcen,rad2);
};

void Ring::ShowRingInfo()
{
    cout << "Inner Circle Info..." << endl;
    cout << "radious: " << incir.GetRad() << endl;
    cout << "[" << incir.GetCen().GetXpos() << ", " << incir.GetCen().GetYpos() << "]" << endl;

    cout << "Outter Circle Info..." << endl;
    cout << "radious: " << outcir.GetRad() << endl;
    cout << "[" << outcir.GetCen().GetXpos() << ", " << outcir.GetCen().GetYpos() << "]" << endl;
};