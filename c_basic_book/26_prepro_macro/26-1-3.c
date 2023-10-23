#include <stdio.h>
#define MAX(X,Y) \
    ((X)>(Y))?(X):(Y)

int main()
{
    int val1,val2;
    printf("비교할 두 값을 입력하세요.\n형식 : [%%d %%d] : ");
    scanf("%d %d",&val1,&val2);
    printf("두 값중에 더 큰값 : %d\n", MAX(val1,val2));

    return 0;
}