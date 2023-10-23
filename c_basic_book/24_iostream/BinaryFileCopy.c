#include <stdio.h>

// 바이너리 파일 복사 코드이다.

int main()
{
    FILE * src = fopen("src.bin", "rb");
    FILE * des = fopen("dst.bin", "wb");
    char buf[20];
    int readCnt;

    // 함수 포인터가 파일을 가리키지 못하면 실패 문구를 출력한다
    if(src==NULL || des==NULL)
    {
        puts("파일오픈 실패!");
        return -1;
    }

    // while문
    // : 파일에 대하여 버퍼 무한 반복
    //      if문1
    //      : True, 버퍼가 가득 차지 않았을 경우
    //      (데이터를 모두 읽은 경우이다.)
    //      : False, 버퍼가 가득 찬 경우
    //      (읽을 데이터가 남은 경우이다.)
    //          if문2
    //          : True, 읽은 데이터가 있고 파일의 끝이 아닌 경우
    //          : False, 읽은 데이터가 있는데 파일의 끝인경우





    while(1)
    {
        // fread 함수는 buf 배열에 데이터를 저장하는 함수이다.
        // readcount 변수에는 데이터를 읽은 횟수를 저장한다.
        // sizeof(buf)의 크기만큼 src로부터 1번 데이터를 읽어
        // buf 배열에 전달한다.
        readCnt = fread((void*)buf, 1, sizeof(buf), src);

        // fread 함수의 반환값 readCnt와 sizeof(buf)를 비교한다
        // fread 함수의 반환값은 읽어들인 데이터의 값이다.

        // if 문은 데이터를 읽은 경우에 실행된다.
        // 데이터를 읽었으면 , readCnt 변수가 sizeof(buf)가 된다.
        if(readCnt<sizeof(buf))
        {
            // feof 함수는 FILE stream 포인터를 대상으로
            // 파일 끝이 아니면 0을 반환하고
            // 파일 끝이면 True (0이 아닌 값)를 반환한다.

            // if문1 조건 : 데이터를 읽었는데,
            // = EOF가 0이 아니여서 src 포인터가 True이면
            // (파일의 끝에 도달하면) 문구를 출력한다.
            if(feof(src) != 0)
            {
                fwrite((void*)buf,1,readCnt,des);
                // fwrite 함수로 배열 buf에 쓴다.
                puts("파일복사 완료!");
                break;
            }
            // if문1 조건 : 데이터를 읽었는데,
            // = src 포인터가 False(==0)이면
            // (파일의 끝에 도달하지 못했으면) 문구를 출력한다.
            else
                puts("파일복사 실패");
            break;
            // sizeof(buf)의 크기 만큼 파일 포인터 des에 저장한다.
            
        }
        // buf 배열을 파일 포인터 des에 쓴다
        fwrite((void*)buf,1,sizeof(buf), des);
        
    }
    fclose(src);
    fclose(des);
    return 0;
}