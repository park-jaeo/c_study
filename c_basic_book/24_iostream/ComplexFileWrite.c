#include <stdio.h>

int main()
{
    char name[10];
    char sex;
    int age;

    FILE * fp = fopen("friend.txt","wt");
    int i;

    for(i=0 ; i < 3 ; i++)
    {
        printf("이름 성별 나이 순 입력 : ");
        // 이름을 string으로
        // 성별을 char으로
        // age를 int로 받는다.
        scanf("%s %c %d",name, &sex, &age);
        getchar(); // 버퍼에 남은 \n을 소멸시킨다.
        fprintf(fp, "%s %c %d", name, sex, age);
    }
    fclose(fp);
    return 0;
}