#ifndef __CAL_H__
#define __CAL_H__

class Cal
{
private:
    int addcount;
    int mincount;
    int mulcount;
    int divcount;
public:
    void init();
    double Add(double val1,double val2);
    double Min(double val1,double val2);
    double Mul(double val1,double val2);
    double Div(double val1,double val2);
    void ShowOpCount();
};

#endif

