#include <stdio.h>

typedef struct fren
{
    char name[10];
    char sex;
    int age;
} Friend;

int main()
{
    FILE * fp;
    Friend myfren1;
    Friend myfren2;

    /*** file write ***/
    fp = fopen("friend.bin", "wb");
    printf("이름, 성별, 나이 순 입력 : ");
    scanf("%s %c %d", myfren1.name, &(myfren1.sex), &(myfren1.age));
    fwrite((void*)&myfren1, sizeof(myfren1), 1, fp);
    fclose(fp);

    /*** file read ***/
    fp = fopen("friend.bin", "rb");
    fread((void*)&myfren1, sizeof(myfren1), 1, fp);
    printf("%s %c %d", myfren1.name, myfren1.sex, myfren1.age);
    fclose(fp);

    return 0;

}