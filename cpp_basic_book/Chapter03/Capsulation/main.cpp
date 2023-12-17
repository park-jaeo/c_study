#include <iostream>
#include "Point.h"
#include "Circle.h"
#include "Ring.h"
using namespace std;

int main()
{
    Ring ring;
    ring.Init(1,1,4,2,2,9);
    ring.ShowRingInfo();
    return 0;
}