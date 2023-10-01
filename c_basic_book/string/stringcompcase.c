#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20];
    char str2[20];
    printf("문자열 입력 1 : ");
    scanf("%s", str1);
    printf("문자열 입력 2 : ");
    scanf("%s", str2);

    // 0은 거짓 0 이외의 값은 참이다
    // ! 연산을 붙혀, 0은 참, 양수와 음수는 거짓이 된다.
    if(!strcmp(str1,str2))
    {
        puts("두 문자열은 완벽히 동일합니다.");
    }
    else
    {
        puts("두 문자열은 동일하지 않습니다.");

        if(!strncmp(str1,str2,3))
            puts("그러나 앞 세 글자는 동일합니다");
    }
    return 0;
}