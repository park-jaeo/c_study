#include <stdio.h>
#include <stdlib.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

void OutputFourPoint(Point * ptr1, Point * ptr2)
{
    printf("Point 1 : [%d %d]\n", ptr1->xpos , ptr1->ypos);
    printf("Point 2 : [%d %d]\n", ptr1->xpos , ptr2->ypos);
    printf("Point 3 : [%d %d]\n", ptr2->xpos , ptr1->ypos);
    printf("Point 4 : [%d %d]\n", ptr2->xpos , ptr2->ypos);
}

void OutputCalArea(Point * ptr1, Point * ptr2)
{
    printf("Area : %d\n", abs((ptr1->xpos - ptr2->xpos) *
                           (ptr1->ypos - ptr2->ypos)));
}

int main()
{
    Point ptr1 = {0,0};
    Point ptr2 = {100,100};
    OutputFourPoint(&ptr1, &ptr2);
    OutputCalArea(&ptr1,&ptr2);
    return 0;
}