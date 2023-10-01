#include <stdio.h>

int main(int argc, char *argv[])
{
    int i=0;
    printf("전달된 문자열의 수 : %d \n", argc);

//  for(i=0 ; i < argc ; i++);
// 으로 실행하면 for문이 즉시 끝나서 아무것도 실행되지 않는다.

    for(i=0 ; i < argc ; i++)
        printf("%d 번째 문자열 : %s \n", i+1, argv[i]);
    return 0;
}