#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string>

// my_strings_len은 배열 my_strings의 길이입니다.
// parts_rows는 2차원 배열 parts의 행 길이, parts_cols는 2차원 배열 parts의 열 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_strings[], size_t my_strings_len,
             int** parts, size_t parts_rows, size_t parts_cols) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(my_strings_len * sizeof(char));
    
    for(int i= 0; i < parts_rows; i++)
    {
        my_strings[i].substr(parts[i][1], parts[i][2] - parts[i][1]);
    }
    return answer;
}

/*
hat
전달해주신 코드는 C/C++로 작성된 코드입니다. 참고로 Python에서는 substr() 대신 슬라이싱을 사용합니다. 또한, 코딩 테스트 문제 같아 보이는데, 복사/붙여넣기할 때 이상하게 붙은 것 같습니다.

하지만, 질문의 의도를 유추해보자면, 문자열에서 특정 부분을 추출하는 방법에 대한 질문 같습니다.

C/C++에서 문자열에서 일부분을 추출하려면 substr() 함수를 사용합니다. substr() 함수는 첫 번째 인자로 시작 인덱스를, 두번째 인자로 길이를 받습니다.

예를 들어, my_strings[i]가 "hello"이고, parts[i][1]이 1, parts[i][2]가 3일 경우, 다음과 같이 작성하면 됩니다.

std::string temp = std::string(my_strings[i]).substr(parts[i][1], parts[i][2] - parts[i][1]);

이렇게 하면 temp에는 "hello"의 1번 인덱스에서 시작해서, 길이가 2인 부분문자열, 즉 "el"이 저장이 됩니다.

참고로, 이 코드는 C++ 용입니다. C에서는 문자열 관련 기능이 제한적이므로 더 복잡한 코드를 작성해야 합니다.

그리고 이렇게 추출한 문자열을 어떻게 이용할지는 문제의 다른 부분과 연관이 있으니, 그 부분을 고려해 코드를 작성해야 합니다.
*/