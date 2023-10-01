#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

void SwapPoint(Point * pos1, Point * pos2)
{
    Point temp;
    temp.xpos = pos1->xpos;
    temp.ypos = pos1->ypos; 
    
    pos1->xpos = pos2->xpos;
    pos1->ypos = pos2->ypos;

    pos2->xpos = temp.xpos;
    pos2->ypos = temp.ypos;
}

int main()
{
    Point pos1 = {2,4};
    Point pos2 = {5,7};
    Point result;

    SwapPoint(&pos1,&pos2);

    printf("pos1 : [%d %d]\n", pos1.xpos , pos1.ypos);
    printf("pos2 : [%d %d]\n", pos2.xpos , pos2.ypos);
    return 0;
}