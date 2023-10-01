#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20];
    printf("정수 입력 : ");
    scanf("%s", str);
    printf("%d \n", atoi(str));

    printf("실수 입력 : ");
    scanf("%s", str);
    printf("%g \n", atof(str));
}
// 서식
// %e는 지수형식으로 표현하고
// %g는 범위를 벗어나면 지수형식으로 표현한다.

// ASCII to Integer
// ASCII to Long
// ASCII to Float
