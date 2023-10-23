#include <stdio.h>

char name[30];

char * ReadUserName()
{
    printf("What's your name? ");
    fgets(name,30,stdin);
    // 전역변수를 반환한다.
    return name;
}

int main()
{
    char * name1;
    char * name2;
    
    // name의 정보를 얻은 후
    // 배열 포인터 name1가 전역변수 배열 name[30]을 가리키게 한다
    name1 = ReadUserName();
    printf("name1: %s \n", name1);

    // name의 정보를 얻은 후
    // 배열 포인터 name2가 전역변수 배열 name[30]을 가리키게 한다
    name2 = ReadUserName();
    printf("name2: %s \n", name2);
    
    // ReadUserName 함수의 첫 번째 실행시
    // fgets함수로 얻은 정보는 소멸된다.
    printf("name1: %s \n", name1);
    printf("name2: %s \n", name2);
    return 0;
}