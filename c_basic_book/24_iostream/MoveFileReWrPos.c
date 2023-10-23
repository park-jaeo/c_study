#include <stdio.h>

int main()
{
    /* 파일생성 */
    FILE * fp = fopen("text.txt", "wt");
    fputs("123456789",fp);
    fclose(fp);

    /* 파일 개방 */
    fp = fopen("text.txt", "rt");

    /* SEEK_END test */
    fseek(fp, -2, 2); // 8
    putchar(fgetc(fp));

    /* SEEK_SET test */
    fseek(fp, 2, SEEK_SET); // 3
    putchar(fgetc(fp));

    /* SEEK_CUR test */
    fseek(fp, 2, SEEK_CUR); // 5
    putchar(fgetc(fp));

    printf("\n");

    fclose(fp);
    return 0;
    // 835 (x)
    // 836 (o)
    // 이유는 파일 포인터는 3을 출력한 후에 4를 가리키는데, 
    // 4의 위치에서 2만큼 움직여주었기 때문이다.
}