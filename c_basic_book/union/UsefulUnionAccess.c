#include <stdio.h>

typedef struct dbshort
{
    unsigned short upper;
    unsigned short lower;
} DBShort;

typedef union rdbuf
{
    int iBuf;
    char bBuf[4];
    DBShort sBuf;
}  RDBuf;

int main()
{
    RDBuf buf;
    printf("정수 입력 : ");
    // Union 구조체의 int형 멤버 변수에 값을 입력한다.
    scanf("%d", &buf.iBuf);

    // 각 바이트에 쓰인 자료를 출력한다.
    printf("상위 2바이트: %u \n", buf.sBuf.upper);
    printf("하위 2바이트: %u \n", buf.sBuf.lower);
    printf("상위 1바이트: %c \n", buf.bBuf[0]);
    printf("하위 1바이트: %c \n", buf.bBuf[3]);
    return 0;
}