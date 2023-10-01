#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

typedef struct circle
{
    Point cen;
    double rad;
} Circle;

void ShowCircleInfo(Circle * cptr)
{
    printf("position : [%d %d]\n", (cptr->cen).xpos, (cptr->cen).ypos);
    printf("radious : %lf\n", cptr->rad);
}

int main()
{
    // 구조체 변수를 구조체의 멤버로 사용할경우
    // 중괄호를 이용해서 구조체 멤버 초기화를 구분해줄 수 있다.
    Circle c1={{1,2}, 3.5};
    // 중괄호를 이용하지 않고도 구조체 멤버의 초기화를 해줄 수 있다.
    Circle c2={2,4, 3.9};
    ShowCircleInfo(&c1);
    ShowCircleInfo(&c2);
    return 0;
}