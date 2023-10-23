#include <iostream>

// 전역변수는 지역변수에 의해 가려진다는 특성이 있다.
int val = 100;

int SimpleFunc()
{
    // 지역변수 int val을 정의한다.
    int val = 20;
    
    // 지역변수 val에 접근한다.
    val+=3;
    // 전역변수 val에 접근한다.
    ::val+=3;
}
