#include <stdio.h>
#define SQUARE(X) X*X

int main()
{
    int num = 20;

    /* 정상적 결과 출력 */
    printf("Square of num: %d \n", SQUARE(num));
    printf("Square of -5: %d \n", SQUARE(-5));
    printf("Square of 2.5: %g \n", SQUARE(2.5));
    
    /* 비정상적 결과 출력 */
    printf("Square of 3+2: %d \n", SQUARE(3+2));
    return 0;

/*
SQUARE(3+2)는 전처리기에 의해 다음과 같이 치환된다.
    3+2*3+2
    따라서 결과는 11이 된다.
*/
}