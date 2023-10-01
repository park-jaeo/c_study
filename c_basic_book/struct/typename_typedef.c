#include <stdio.h>

//int형의 자료형을 INT 라고도 부른다.
typedef int INT;
// int * 형의 자료형을 PTR_INT라고도 부른다.
typedef int * PTR_INT;

typedef unsigned int UINT;
typedef unsigned int * PTR_UINT;

typedef unsigned char UCHAR;
typedef unsigned char * PTR_UCHAR;

int main()
{
    INT num1 = 120;
    PTR_INT pnum1 = &num1;
    
    UINT num2 = 190;
    PTR_UINT pnum2 = &num2;
    
    UCHAR ch = 'Z';
    PTR_UCHAR pch = &ch;
    
    printf("%d, %u, %c \n", *pnum1, *pnum2, *pch);
    return 0;
}