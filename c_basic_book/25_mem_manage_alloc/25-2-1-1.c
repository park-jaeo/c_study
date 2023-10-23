#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int count;
    int i,j = 0;
    int scount;
    int strlen1;

    //최대 문자열 갯수를 받음
    printf("역으로 출력할 문자열의 최대 길이를 입력하세요 : \n");
    scanf("%d", &count);
    
    // scanf 함수로 얻은 '\n'을 소비하여 fgets 함수가 바로 종료되지 않도록 한다.
    getchar();

    char * text = (char *)malloc(sizeof(char)*count+1);
    char * result = (char *)malloc(sizeof(char)*count+1);
    printf("역으로 출력할 문자열을 입력하세요(구분 단위: 스페이스) : \n");
    fgets(text, count+1, stdin);
    text[strlen(text)-1] = '\0';
    scount = strlen(text);

    strlen1 = scount;
    // 스페이스를 기준으로 단어 순서를 뒤집어 출력한다.
    for(i = 0 ; i <= scount ; i++)
    {
        // strlen1은 단어 길이를 측정한다
        if(text[i] == ' ' || text[i] == '\0')
        {
            // \n을 만날경우 단어 길이를 초기화한다.
            // 단어를 result에 저장한다.
            for(j= strlen1 ; j < i ; j++)
            {
                result[scount - j] = text[j];
            }
            result[scount - i] = ' ';
            strlen1 = i + 1;
        }
        // \n이 아니면 단어 길이를 누적한다.
        else
        {
            strlen1++;
        }
    }

    printf("%s\n",result);

    free(text);
    free(result);

    return 0;
}