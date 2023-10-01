#include <stdio.h>

typedef struct student
{
    char name[20];
    char stdnum[20];
    char school[20];
    char major[20];
    int year;
} Student;

void ShowStudentInfo(Student * sptr)
{
    printf("학생 이름 : %s", sptr->name);
    printf("학생 고유번호 : %s", sptr->stdnum);
    printf("학교 이름 : %s", sptr->school);
    printf("선택 전공 : %s", sptr->major);
    printf("학년 : %d", sptr->year);
}

int main()
{
    // 구조체 배열을 선언했다.
    Student arr[7];
    int i;

    // iterator을 이용해 각 구조체에 정보를 입력한다.
    for(i=0 ; i < 7 ; i++)
    {
        printf("이름: ") ; scanf("%s", arr[i].name);
        printf("번호: ") ; scanf("%s", arr[i].stdnum);
        printf("학교: ") ; scanf("%s", arr[i].school);
        printf("전공: ") ; scanf("%s", arr[i].major);
        printf("학년: ") ; scanf("%d", &arr[i].year);
    }
    
    // iterator을 이용해 각 구조체를 출력한다.
    for(i=0 ; i < 7 ; i++)
        ShowStudentInfo(&arr[i]);
    return 0;
}