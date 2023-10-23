#include <stdio.h>

int main()
{
    long fpos;
    
    /* 파일 개방 */
    FILE * fp = fopen("text.txt", "rt");
    
    fseek(fp, 0, SEEK_END);
    fpos = ftell(fp);
    printf("파일의 크기는 %ld 바이트 입니다 \n", fpos);
    fseek(fp, 0, SEEK_SET);

    fclose(fp);

}