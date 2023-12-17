#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

//문자열을 사전순으로 정렬하는 코드이다.
int main()
{
    int n;
    char str[20][20], temp[20];
    scanf("%d", &n);
    for(int i=0; i<n; i++) 
        scanf("%s", str[i]);
    // index i는 검사 대상 문자의 자릿수를 의미한다.
    // index j는 비교할 다른 문자를 의미한다.

    // index i =0일때 
    // index j는 1~n을 순회하며 스왑한다.
    for(int i=0; i <n-1; i++){
        for(int j=i+1; j<n;j++){
            // swap code
            if(strcmp(str[i],str[j]) > 0){
                strcpy(temp, str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    for(int i=0; i<n; i++) {
        printf("%s", str[i]);
        printf("\n");
    }
        return 0;
}