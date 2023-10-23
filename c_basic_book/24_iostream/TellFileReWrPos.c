#include <stdio.h>

int main()
{
    long fpos;
    int i;

    /* 파일 생성 */
    FILE * fp = fopen("text.txt", "wt");
    fputs("1234-", fp);

    // fclose를 하지 않으면 내용이 저장되지 않고, 출력 오류가 발생한다.
    fclose(fp);

    /* 파일 개방 */
    fp = fopen("text.txt", "rt");


    for(i=0 ; i < 4 ; i++)
    {
        putchar(fgetc(fp));
        fpos = ftell(fp);
        fseek(fp, -1, SEEK_END);
        putchar(fgetc(fp));
        fseek(fp, fpos, SEEK_SET);
    }
    fclose(fp);
    return 0;
}
/* 
시행 1 ( 1- )

1(putchar)
fpos 변수에 1을 할당한다 (fp의 위치는 두 번째이다.)
파일 포인터가 '-'을 가리키게 한다
파일 포인터가 가리키는 위치의 문자를 출력한다. ( '-' )
파일 포인터가 fpos의 위치를 가리키게 한다
( fpos의 위치는 1이다. (2를 가리킨다.))

출력결과
1-2-3-4-

*/