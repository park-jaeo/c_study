#ifndef __RING_H__
#define __RING_H__

#include "Circle.h"
#include "Point.h"

class Ring
{
private:
    Circle incir,outcir;
public:
    void Init(int xpos1, int ypos1, int rad1, int xpos2, int ypos2, int rad2);
    void ShowRingInfo();
};

#endif