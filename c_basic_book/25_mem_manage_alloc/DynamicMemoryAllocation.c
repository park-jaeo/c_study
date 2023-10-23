#include <stdio.h>
#include <stdlib.h>

int main()
{
    int * ptr1 = (int *)malloc(sizeof(int));
    int * ptr2 = (int *)malloc(sizeof(int)*7);
    int i;

    // 변수 정의에서의 * 사용은 변수가 포인터를 저장한다는 것을 의미한다
    // 수식 내에서의 * 사용은 변수에 대한 역참조 연산을 의미한다.
    
    // 포인터 변수 ptr1에 대하여 역참조 연산을 한 후에 (변수를 대상으로)
    // 20을 할당한다.
    *ptr1 = 20;

    // for문으로 ptr2 포인터가 가리키는 배열을 채운다.
    for(i=0 ; i < 7 ; i++)
        ptr2[i]=i+1;

    printf("%d\n", *ptr1);

    for(i=0 ; i < 7 ; i++)
        printf("%d ", ptr2[i]);

    printf("\n");

    free(ptr1);
    free(ptr2);
    
    return 0;
}