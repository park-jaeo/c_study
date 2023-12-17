#include <iostream>

// Chaining
// 함수의 반환 값을 인스턴스의 레퍼런스로 전달하여 연속해서 함수를 사용할 수 있도록 하는 기법이다.
class Calc
{
    int value_;

public:
    // Constructor
    Calc(const int &value_in)
        : value_{value_in}
    {}

    // Reference Definition
    // (레퍼런스의) 포인터를 반환하여 Function Chaining을 사용할 수 있다.
    Calc& add(int value) { value_ += value; return *this; }
}


/*
특징점
1. 레퍼런스의 포인터를 반환하여 
*/