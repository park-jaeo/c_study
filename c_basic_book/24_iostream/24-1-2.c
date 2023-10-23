#include <stdio.h>

int main()
{
    FILE * mys = fopen("mystory.txt","at");
    fputs("#즐겨먹는 음식 : 짬뽕, 탕수육\n", mys);
    fputs("#취미 : 축구\n",mys);

    fclose(mys);
    return 0;
}