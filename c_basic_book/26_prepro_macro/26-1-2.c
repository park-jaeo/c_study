#include <stdio.h>
#define PI 3.14
// AREA의 정밀도를 위해 double 형태로 캐스팅하여 반환한다.
#define AREA(R) (double)((PI)*(PI)*(R))

int main()
{
    int rad;
    printf("원의 반지름을 입력하세요 : ");
    scanf("%d", &rad);

    // AREA(rad)부분은 (double 캐스팅이 없을 경우)
    // ((3.14)*(3.14)*(rad))로 치환되고, 이 값은 float이 된다.
    printf("원의 넓이는 %g 입니다 \n", AREA(rad));

    return 0;
}