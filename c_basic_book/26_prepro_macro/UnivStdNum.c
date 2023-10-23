#include <stdio.h>
// #define STNUM(Y, S, P) YSP
// #define STNUM(Y, S, P) Y S P

// Y에 100000을 곱하고, S에 1000을 곱하고, 3개의 값을 더해서 반환한다.
#define STNUM(Y, S, P) Y ## S ## P

int main()
{
    printf("학번 : %d \n", STNUM(10, 65, 175));
    printf("학번 : %d \n", STNUM(10, 65, 075));
    return 0;
}