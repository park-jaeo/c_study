#include <stdio.h>
#define PI 3.14
#define PRODUCT(X, Y) ((X)*(Y))
#define CIRCLE_AREA(R) (PRODUCT((R), (R)) * PI)

/*

PRODUCT(X, Y)의 정의에서
(X)*(Y)대신에
((X)*(Y))를 정의하는 이유는 다음과 같다.

int num = 120 / SQUARE(2);를 정의하면
int num = 120 / (2) * (2)가 되어
120 / (2) 연산이 먼저 진행된다.

*/

int main()
{
    double rad=2.1;
    printf("반지름 %g인 원의 넓이: %g \n", rad, CIRCLE_AREA(rad));
    return 0;
}