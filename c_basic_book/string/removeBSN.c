#include <stdio.h>
#include <string.h>

//
void RemoveBSN(char str[])
{
    // strlen은 문자열의 길이를 반환한다.
    int len=strlen(str);
    // str문자열의 마지막 요소 \n을 제거한다.
    str[len -1] =0;
}

int main()
{
    char str[100];
    printf("문자열 입력:");
    fgets(str,sizeof(str),stdin);
    printf("길이 : %ld, 내용 : %s \n", strlen(str),str);

    RemoveBSN(str);
    printf("길이 : %ld, 내용 : %s \n", strlen(str),str);
    return 0;
}