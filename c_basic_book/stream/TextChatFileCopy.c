#include <stdio.h>

int main()
{
    FILE * src = fopen("src.txt", "rt");
    FILE * des = fopen("dst.txt", "wt");
    int ch;

    if(src==NULL || des==NULL){
        puts("파일오픈 실패!");
        return -1;
    }

    // int 변수 ch에 파일 포인터 src의 feof를 할당한다.
    // src로부터 읽어온 한 문자 ch가 eof가 아닌 동안 
    // 계속 한 문자를 des에 출력한다.
    while((ch = fgetc(src)) != EOF)
        fputc(ch,des);

    // src가 eof라면 완료 문구를 출력하고
    // eof가 아니라면 실패 문구를 출력한다.
    if(feof(src) != 0)
        puts("파일 복사 완료!");
    else
        puts("파일 복사 실패!");

    // 파일 입출력을 닫는다.
    fclose(src);
    fclose(des);
    return 0;
}