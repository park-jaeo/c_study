#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_

#include "Point.h"

class Rectangle
{
private:
    Point upLeft;
    Point lowRight;
public:
    Rectangle(const Point &x1, const Point &y1,const Point &x2, const Point &y2);
    void ShowRecInfo() const;  
};

#endif