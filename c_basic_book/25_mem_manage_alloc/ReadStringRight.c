#include <stdio.h>
#include <stdlib.h>

char * ReadUserName()
{
    // 메모리 동적 할당으로 배열의 메모리가 함수가 끝난 후에도 남아있게 했다.
    char * name = (char *)malloc(sizeof(char)*30);
    printf("What's your name?");
    
    // gets는 버퍼의 경계를 체크하지 않기 때문에 버퍼 오버플로우를 일으킬 수 있다.
    // 이러한 보안 취약점 때문에 gets함수는 fgets함수로 대체되었다.
    // gets(name);
    fgets(name, 30, stdin);
    
    return name;
}

int main()
{
    char * name1;
    char * name2;
    name1 = ReadUserName();
    printf("name1: %s \n", name1);
    name2 = ReadUserName();
    printf("name2: %s \n", name2);
    
    printf("again name1: %s", name1);
    printf("again name2: %s", name2);
    free(name1);
    free(name2);
    return 0;
}