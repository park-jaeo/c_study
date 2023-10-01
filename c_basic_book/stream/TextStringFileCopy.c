#include <stdio.h>

int main()
{
    FILE * src = fopen("src.txt", "rt");
    FILE * des = fopen("dst.txt", "wt");
    char str[20];

    if(src==NULL || des==NULL){
        puts("파일오픈 실패!");
        return -1;
    }

    // NULL 신호를 받기 전까지
    // 파일 포인터 src에서 문자열 단위로 받아와서 검증한다
    // fgets 함수는 str - 1 갯수의 문자를 읽었거나(19개의 char 문자)
    // NULL 문자를 받을 경우
    // 읽은 문자열을 반환한다.
    while(fgets(str, sizeof(str), src) != NULL)
        fputs(str, des);

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