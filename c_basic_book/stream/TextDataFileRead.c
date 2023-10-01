#include <stdio.h>

int main()
{
    char str[30];
    int ch;
    FILE * fp = fopen("simple.txt", "rt");
    if(fp==NULL)
    {
        puts("파일오픈 실패!");
        return -1;
    }

    ch=fgetc(fp);
    if(ch == 'A')
        printf("True\n");
    else
        printf("False\n");


    ch=fgetc(fp);
    if(ch == 'B')
        printf("True\n");
    else
        printf("False\n");

    fgets(str, sizeof(str), fp);
    printf("%s", str);
    fgets(str, sizeof(str), fp);
    printf("%s", str);
    

}