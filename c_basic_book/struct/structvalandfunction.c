#include <stdio.h>

//typedef 정의와 struct정의를 같이 사용해서
// typedef 형태로 Point 구조체와 멤버 변수를 선언한다.
typedef struct point
{
    int xpos;
    int ypos;
} Point;

// Point 구조체를 인자로 받는 리턴이 void인 함수를 정의한다
void ShowPosition(Point pos)
{
    printf("[%d %d] \n", pos.xpos, pos.ypos);
}

// Point 구조체를 return하고 인자가 없는(void) 함수를 정의한다.
Point GetcurrentPosition(void)
{
    Point cen;
    printf("Input current pos: ");
    scanf("%d %d", &cen.xpos, &cen.ypos);
    // Point 구조체 변수를 return한다.
    return cen;
}

int main()
{
    // Point 변수를 정의한 후에 함수의 return값을 저장한다.
    Point curPos=GetcurrentPosition();
    // Point 변수를 인자로 전달해서 함수를 실행한다.
    ShowPosition(curPos);
    return 0;
}