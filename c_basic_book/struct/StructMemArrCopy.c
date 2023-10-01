#include <stdio.h>

typedef struct person
{
    char name[20];
    char phoneNum[20];
    int age;
} Person;

// ReadPersonInfo는 인자가 void이고 return이 Person인 함수이다.
Person ReadPersonInfo()
{
    Person man;
    printf("name? : ");
    scanf("%s", man.name);

    printf("phoneNum? : ");
    scanf("%s", man.phoneNum);

    printf("age? : ");
    scanf("%d", &man.age);

    return man;
}

// ShowPersonInfo는 void return이고 인자를 받는 함수이다.
// 주의, 이 경우 인자의 자료형(type Person)을 명시한 후 변수(man)을 써줘야 한다
void ShowPersonInfo(Person man)
{
    printf("name : %s \n", man.name);
    printf("phoneNum : %s \n", man.phoneNum);
    printf("age : %d \n", man.age);
}

int main()
{
    Person man = ReadPersonInfo();
    ShowPersonInfo(man);
    return 0;
}