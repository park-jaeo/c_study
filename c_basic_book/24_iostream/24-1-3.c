#include <stdio.h>

int main()
{
    FILE * mys = fopen("mystory.txt","rt");
    int ch;
    char str[20];
    
    while((ch=fgetc(mys)) != EOF)
    {
        printf("%c", ch);
        fgets(str,sizeof(str),mys);
        printf("%s", str);
    }

    fclose(mys);
    return 0;
}