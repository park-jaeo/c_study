#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
// s_cnt = suffix count
// c_size = charactor size
char** solution(const char* my_string) {
    int s_cnt = 100; int c_size = 100;
    int slen = strlen(my_string);
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char** answer = (char**)malloc(sizeof(char*) * s_cnt);
    for(int i=0; i < s_cnt; i++)
    {
        answer[i] = (char*)malloc(sizeof(char) * c_size);
        char * temp = my_string+i; // 포인터 연산;
        for(int j=slen; j > 0; j--)
        {
            answer[i][j] = temp;
        }
    }
    
    
    
    for(int i=0; i < s_cnt; i++)
        free(answer[i]);
    free(answer);
    
    return answer;
}