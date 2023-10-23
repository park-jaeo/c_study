#include <stdio.h>
#define HIT_NUM 6

/*
if문에 else를 쓸 수 있는것처럼
#if ~ #endif 문에도 else문을 사용할 수 있다.

#if 조건
    ---codes---

#else
    ---codes---

#endif

예제이다.


*/
int main()
{
#if HIT_NUM == 5
    puts("매크로 상수 HIT_NUM은 현재 5입니다");
#elif HIT_NUM == 6
    puts("매크로 상수 HIT_NUM은 현재 6입니다");
#elif HIT_NUM == 7
    puts("매크로 상수 HIT_NUM은 현재 7입니다");
#else
    puts("매크로 상수 HIT_NUM은 현재 5,6,7이 아닙니다.");
#endif
    return 0;

}