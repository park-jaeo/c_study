#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int cmp_name_age(char * name1, char * name2)
{
    int name = 0;
    char * ptr1 = strtok(name1, " ");
    char * ptr2 = strtok(name2, " ");

    while((ptr1 != NULL) && (ptr2 != NULL))
    {
        if((name == 0) && (strcmp(ptr1 ,ptr2) == 0))
        {
            name = 1;
        }
        else if((name == 0) && (strcmp(ptr1 ,ptr2) != 0))
        {
            name = 2;
        }
        else if((name == 1) && (strcmp(ptr1 ,ptr2) == 0))
        {
            return 1;
        }
        else if((name == 2) && (strcmp(ptr1 ,ptr2) == 0))
        {
            return 2;
        }
        else if((name == 1) && (strcmp(ptr1 ,ptr2) != 0))
        {
            return 3;
        }
        else if((name == 2) && (strcmp(ptr1 ,ptr2) != 0))
        {
            return 4;
        }
    }
}

int main()
{
    char name1[10];
    char name2[10];
    int age1,age2;
    bool name,age;

    printf("첫 번째 사람의 이름과 나이를 입력하세요.\n");
    printf("형식 : (이름 나이)\n");
    fgets(name1,sizeof(name1),stdin);
    name1[strlen(name1) -1] = 0;

    printf("두 번째 사람의 이름과 나이를 입력하세요.\n");
    printf("형식 : (이름 나이)\n");
    fgets(name2, sizeof(name2), stdin);
    name2[strlen(name2) -1] = 0;

    if((cmp_name_age(name1,name2)) == 1){
        name = 1;
        age = 1;}
    else if((cmp_name_age(name1,name2)) == 2){
        name = 0;
        age = 1;}
    else if((cmp_name_age(name1,name2)) == 3){
        name = 1 ;
        age = 0;
    }
    else if((cmp_name_age(name1,name2) == 4))
    {
        name = 0;
        age = 0;
    }

    printf("입력한 이름과 나이 : \n%s \n%s \n" , name1,name2);    

    printf("두 이름은 같습니다 : ");
    printf(name ? "true\n" : "false\n");
    
    printf("두 명의 나이는 같습니다 :");
    printf(age ? "true\n" : "false\n");
    return 0;
}