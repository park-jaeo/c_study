#include <stdio.h>
#include <string.h>

int main()
{
//  int : 4byte , char : 1byte
    char str1[20];
    char str2[20];
    char str3[40];
    
    
    //    printf("%ld , %ld", sizeof(int) , sizeof(char));
    // - int 배열을 선언할 경우, int는 4바이트이기 때문에
    //   ▷ 배열의 요소 수를 반환하기 위해 sizeof(arr)/4을 해야 하지만

    // - char 배열을 선언할 경우 , char은 1바이트이기 때문에
    //   ▷ sizeof(arr) 가 곧 배열 요소의 수가 된다.
    fgets(str1, sizeof(str1), stdin);
    //널 문자를 삭제한다.
    str1[strlen(str1) - 1] = 0;

    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2) - 1] = 0;

    strcpy(str3,str1);
    strcat(str3,str2);
    printf("조합의 결과 : %s\n", str3);


    printf("strlen : %ld\n sizeof : %ld",strlen(str1) - 1, sizeof(str1) - 1);
    // str1 = 'hello'일때
    //strlen : 4
    //sizeof : 19
    // strlen함수는 배열의 할당된 부분만의 크기를 반환한다.

    //따라서 sizeof로 
    //str2[sizeof(str2) - 1] = 0;을 같이 사용하면 널 문자가 지워지지 않는다.
    return 0;
}