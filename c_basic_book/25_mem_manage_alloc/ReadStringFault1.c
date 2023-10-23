#include <stdio.h>

char * ReadUserName()
{
    char name[30];
    printf("What's your name? ");
    gets(name);
    return name;
    // 반환형은 char * 형이다. (배열 주소이다)
    // 지역 배열 name을 리턴해도 char 배열을 반환하지 못한다.
}

int main()
{
    char * name1;
    char * name2;
    name1=ReadUserName();
    printf("name1: %s \n", name1);
    name2=ReadUserName();
    printf("name2: %s \n", name2);
    
    return 0;
}

