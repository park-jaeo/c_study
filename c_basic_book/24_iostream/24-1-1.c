#include <stdio.h>

int main()
{
    FILE * mys = fopen("mystory.txt","wt");
    fputs("#이름 : 윤성우\n", mys);
    fputs("#주민번호 : 900208-1012589\n",mys);
    fputs("#전화번호 : 010-1111-2222\n",mys);

    fclose(mys);
    return 0;
}