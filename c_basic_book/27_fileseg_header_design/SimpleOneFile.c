#include <stdio.h>
int num = 0;

void Increment()
{
    num++;
}

int GetNum()
{
    return num;
}

int main()
{
    printf("num: %d \n", GetNum());
    Increment();
    printf("num: %d \n", GetNum());
    Increment();
    printf("num: %d \n", GetNum());
    return 0;    
}