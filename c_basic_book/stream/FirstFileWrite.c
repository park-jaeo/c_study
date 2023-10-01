#include <stdio.h>

int main()
{
    FILE * fp = fopen("data.txt", "wt");
    if(fp==NULL)
    {
        puts("파일오픈 실패!");
        // 비정상적 종료를 반환한다.
        return -1;
    }

    fputc('A', fp);
    fputc('B', fp);
    fputc('C', fp);
    // fclose 함수 실행시 스트림이 종료되며 데이터가 저장된다.
    
    // fclose 함수를 실행해야 운영체제의 
    // 버퍼에 저장된 데이터가 반환된다(파일에 입력된다)
    
    // fclose 함수를 실행해야 할당받은 데이터를 
    // 다시 운영체제에 반환할 수 있다.
    fflush(fp);
    fclose(fp); 
}