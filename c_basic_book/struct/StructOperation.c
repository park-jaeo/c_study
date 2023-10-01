#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

int main()
{
    Point pos1 = {1,2};
    // 구조체 - 구조체 대입 연산
    Point pos2 = pos1;

    // 구조체를 대상으로 sizeof 연산
    printf("pos1 크기 : %ld \n", sizeof(pos1));
    printf("[%d %d]\n", pos1.xpos , pos1.ypos);

    printf("pos2 크기 : %ld \n", sizeof(pos2));
    printf("[%d %d]\n", pos2.xpos , pos2.ypos);

    return 0;

}
