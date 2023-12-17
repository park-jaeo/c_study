#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(const Point &x1, const Point &y1,const Point &x2, const Point &y2)
            :upLeft(x1,y1), lowRight(x2,y2)
{
    // empty
}

void Rectangle::ShowRecInfo() const
{
    cout << "좌 상단 : " << "[" << upLeft.GetX() << ", ";
    cout << upLeft.GetY() << "]" << endl;

    cout << "우 하단 : " << "[" << lowRight.GetX() << ", ";
    cout << lowRight.GetY() << "]" << endl;
}

