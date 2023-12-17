#include <iostream>
#include "Cal.h"
using namespace std;

void Cal::init()
{
    addcount = 0;
    mincount = 0;
    mulcount = 0;
    divcount = 0;
}

double Cal::Add(double val1,double val2)
{
    addcount++;
    return val1+val2;
}

double Cal::Min(double val1,double val2)
{
    mincount++;
    return val1-val2;
}

double Cal::Mul(double val1,double val2)
{
    mulcount++;
    return val1*val2;
}

double Cal::Div(double val1,double val2)
{
    divcount++;
    return val1/val2;
}

void Cal::ShowOpCount()
{
    cout << "[add, min, mul, div]" << endl;
    cout << "["<< addcount << ", " << mincount << ", " << mulcount << ", " << divcount << "]" << endl;
}