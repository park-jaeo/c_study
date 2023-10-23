#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int maxlen, len, i;
    char * str;
    printf("문자열의 최대 길이 입력: ");
    scanf("%d", &maxlen);
    getchar();
    str = (char *)malloc(sizeof(char)*(maxlen+1));

    printf("문자열 입력 : ");
    fgets(str, maxlen+1, stdin);

    // \n 문자를 삭제한다
    // 배열 마지막 요소 인덱스는 strlen(str)-1이다.
    str[strlen(str)-1] = 0;
    len = strlen(str);
    
    // 공백 문자를 찾으면
    // 공백 문자부터 마지막까지 출력한다
    // + 공백 문자를 \n 문자로 치환하여
    // 다음 출력에 공백 문자 ~ \n 문자까지 출력되도록 한다.
    for(i=len ; i > 0 ;i--)
    {
        if(str[i]==' ')
        {
            printf("%s ", &str[i+1]);
            str[i] = 0;
        }
    }
    printf("%s", &str[0]);
    free(str);
    return 0;
}