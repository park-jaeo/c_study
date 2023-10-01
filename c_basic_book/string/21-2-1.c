#include <stdio.h>
#include <string.h>

// 숫자 char값에서 '0'인 48을 빼서 int 형으로 반환하는 함수이다.
int ConvToInt(char c)
{
    static int diff = 0 - '0';
    return c + diff;
}

int main()
{
    char str[20];
    int len, i ;
    int sum =0;

    printf("문자열 입력 : ");
    // fgets함수는 문자열로부터 표준 입력을 받는 함수이다.
    fgets(str,sizeof(str) ,stdin);
    len = strlen(str);

    // 문자열의 각 요소를 int로 변환한 후 합을 누적한다.
    for(i=0 ; i < len ; i++)
    {
        if(str[i] >= '1' && str[i] <= '9')
            sum += ConvToInt(str[i]);
    }
    printf("총 합 : %d\n", sum);
    return 0;
}