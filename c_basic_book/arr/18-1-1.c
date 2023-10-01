#include <stdio.h>

void issamepoint(int * ptr1, int * ptr2)
{
    if(ptr1 == ptr2)
        printf("두 포인터는 같습니다\n");
    else
        printf("두 포인터는 다릅니다\n\n");
}

int main()
{
    int * arr1[5];
    int * arr2[3][5];

    int * (*ptr1) [1] = arr1;
    int * (*ptr2) [5] = arr2;

    issamepoint(&arr1, **ptr1);
    issamepoint(&arr2, **ptr2);

}