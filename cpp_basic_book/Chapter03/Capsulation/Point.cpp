#include <iostream>
#include "Point.h"
using namespace std;

void Point::Init(int x,int y)
{
    xpos = x;
    ypos = y;
}

void Point::ShowPointInfo() const
{
    cout << "[" << xpos << ", " << ypos << "]" << endl;
}

int Point::GetXpos()
{
    return xpos;
}

int Point::GetYpos()
{
    return ypos;
}