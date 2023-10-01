#include <stdio.h>

// point정의 + typedef 정의로
// Point 자료형 만으로 struct point 구조체 변수를 정의할 수 있게 했다.
struct point
{
    int xpos;
    int ypos;
};

typedef struct point Point;

typedef struct person
{
    char name[20];
    char phoneName[20];
    int age;
} Person;

int main()
{
    Point pos = {10,20};
    Person man = {"이승기", "010-2312-5953", 23};
    printf("%d %d \n", pos.xpos, pos.ypos);
    printf("%s %s %d \n", man.name, man.phoneName, man.age);
    return 0;
}