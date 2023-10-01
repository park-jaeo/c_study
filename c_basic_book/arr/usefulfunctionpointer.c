#include <stdio.h>

// 3번째 인자로 함수 포인터를 지정해서
// 인자로 함수를 전달할 수 있게 했다.
int WhoIsFirst(int age1, int age2, int(*cmp) (int n1,int n2))
{
    return cmp(age1, age2);
}

int OlderFirst(int age1, int age2)
{
    if(age1>age2)
        return age1;
    else if(age1<age2)
        return age2;
    else
        return 0;
}

int YongerFirst(int age1, int age2)
{
    if(age1<age2)
        return age1;
    else if(age1>age2)
        return age2;
    else
        return 0;
}

int main()
{
    int age1=20;
    int age2=30;
    int first;

    printf("입장순서1 \n");
    first = WhoIsFirst(age1,age2, OlderFirst);
    printf("%d세와 %d세 중 %d세가 먼저 입장합니다. \n",age1,age2,first);

    printf("입장순서2 \n");
    first = WhoIsFirst(age1,age2, YongerFirst);
    printf("%d세와 %d세 중 %d세가 먼저 입장합니다. \n",age1,age2,first);
}