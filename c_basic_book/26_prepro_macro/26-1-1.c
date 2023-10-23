#include <stdio.h>
#define THREESUM(A,B,C) ((A)+(B)+(C))
#define THREEMUL(A,B,C) ((A)*(B)*(C))

int main()
{
    int one,two,three;
    printf("덧셈, 곱셈 인자 3개 입력\n");
    scanf("%d %d %d", &one, &two, &three);
    printf("합 : %d, 곱 : %d\n",\
            THREESUM(one, two, three), THREEMUL(one, two, three));

    return 0;
}