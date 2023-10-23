#include <stdio.h>
// 이 문장은 잘못되었다.
#define DIFF_ABS(X,Y) ((x) > (y) ? (X) - (y) : (y) - (x))

int main()
{
    printf("두 값의 차: %d \n", DIFF_ABS(5,7));
    printf("두 값의 차: %d \n", DIFF_ABS(1.8, -1.4));
    return 0;
}