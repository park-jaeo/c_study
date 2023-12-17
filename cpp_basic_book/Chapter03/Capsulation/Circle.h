#ifndef __CIRCLE_H__
#define __CIRCLE_H__
#include "Point.h"

class Circle
{
private:
    Point cen;
    int rad;
public:
    void Init(Point c, int r);
    void ShowCirInfo();
    int GetRad();
    Point GetCen();
};

#endif