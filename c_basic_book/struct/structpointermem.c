#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};

struct circle
{
    double radius;
    // point 자료형인 구조체를 가리키는 포인터를 정의해 주었다. 
    struct point * center;
};

int main()
{
    struct point cen = {2,7};
    double rad = 5.5;

    struct circle ring = {rad, &cen};
    printf("원의 반지름 : %g\n", ring.radius);
    // ring의 멤버주소인 center은 point형태 구조체인 cen의 주소를 가리키다.
    // 이 주소인 (ring.center)에 -> 연산을 해서 멤버 변수에 접근했다.
    printf("원의 중심 [%d %d] \n", (ring.center)->xpos, (ring.center)->ypos);

    return 0;
}