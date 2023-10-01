#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "1234567890";
    char str2[20];
    char str3[5];

    /*Case 1*/
    strcpy(str2, str1);
    puts(str2);

    /*Case 2*/
    // 최대 str3 크기만큼 복사한다.
    // 널 문자까지 덮어씌운다
    strncpy(str3, str1, sizeof(str3));
    //널 문자가 없어서 계속 출력한다.
    puts(str3);

    /*Case 3*/
    //널 문자를 제외하고 덮어씌운다.
    strncpy(str3, str1, sizeof(str3)-1);
    // str3 배열의 마지막 요소를 널 문자로 정의한다.
    str3[sizeof(str3)-1] = 0;
    puts(str3);

    return 0;

    
}