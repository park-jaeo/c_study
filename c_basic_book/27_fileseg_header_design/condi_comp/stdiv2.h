// __STDIV2_H__ 매크로를 선언하고
// __STDIV2_H__ 가 정의되지 않았을 경우
// #define 이하를 실행한다.
#ifndef __STDIV2_H__

// __STDIV2_H__ 를
// typedef ~~
// ~~~
// } Div; 으로 정의한다.
#define __STDIV2_H__

typedef struct div
{
    int quotient;
    int remainder;
} Div;

#endif