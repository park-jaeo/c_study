#include <stdio.h>

int main()
{
    int plus_one;
    int arr[2][3];
    int * ptr;

    ptr = &arr[0][0];
    printf("%p %p \n", arr, ptr);
    plus_one = sizeof(arr[0]) / sizeof(arr[0][0]);

    // sizeof(arr[0])은 12다
    //ptr은 4씩 증가한다
    //arr는 3씩 증가한다.
    //그러므로 plus_one은 sizeof(arr[0])이 아니라
    //sizeof(arr[0]) / sizeof(arr[0][0])이 되어야 한다
    printf("%p = %p\n", arr+1, ptr+plus_one);

    return 0;
}