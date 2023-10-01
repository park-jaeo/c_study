#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

void OrgSymTrans(Point * pos)
{
    // reference로 참조했으므로
    // 멤버 변수를 호출할 때

    // pos.xpos의 형식 대신
    // pos->xpos의 형식으로 가져와 주었다.
    pos->xpos = (pos->xpos) * -1;
    pos->ypos = (pos->ypos) * -1;
}

void ShowPosition(Point pos)
{
    printf("[%d %d] \n", pos.xpos , pos.ypos);
}

int main()
{
    Point pos = {7, -5};
    OrgSymTrans(&pos);
    ShowPosition(pos);
    OrgSymTrans(&pos);
    ShowPosition(pos);
    return 0;
}   