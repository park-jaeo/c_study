#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};

// 변수 -> 주소를 참조할 때에는 [ & ] 연산자를 사용한다.
// 주소 -> 변수로 참조할 때에는 [ -> ] 연산자를 사용한다.
int main()
{
    struct point pos1 = {1,2};
    struct point pos2 = {100,200};
    struct point * pptr = &pos1;

    //구조체 포인터를 변수 참조한 후에(*pptr) 멤버 변수를 이용해서 
    // 구조체 멤버 변수의 값을 바꿔 주었다
    (*pptr).xpos +=4;    
    (*pptr).ypos +=5;

    //구조체 포인터에서 변수를 참조하여 [ -> ] printf함수를 사용했다
    printf("[%d %d]\n", pptr->xpos, pptr->ypos);

    // 구조체 포인터의 대상을 변경했다.
    pptr = &pos2;
    // 구조체 포인터에서 멤버 변수를 가리켜서(pptr->xpos)
    // 구조체 멤버 변수의 값을 바꿔 주었다.
    pptr->xpos +=1;
    pptr->ypos +=2;

    // 구조체 포인터를 참조한 후에 멤버 변수를 사용했다.
    printf("[%d %d]\n", (*pptr).xpos, (*pptr).ypos);



}