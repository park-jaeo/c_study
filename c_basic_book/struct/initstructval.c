#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};

struct person
{
    char name[20];
    char phoneNum[20];
    int age;
};

int main()
{
    struct point pose = {10,20};
    struct person man = {"이승기", "010-2381-4291", 34};
    printf("%d , %d\n", pose.xpos, pose.ypos);
    printf("%s , %s , %d\n", man.name, man.phoneNum, man.age);

    return 0;
}