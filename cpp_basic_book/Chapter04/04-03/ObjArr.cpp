#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
    char * name;
    int age;
public:
    Person(char * myname, int myage)
    {
        int len=strlen(myname) + 1;
        name = new char[len];
        strcpy(name,myname);
        age = myage;
    }
    // 배열 생성시의 생성자를 정의하였다.
    Person()
    {
        name = NULL;
        age = 0;
        cout << "called Person()" << endl;
    }
    void SetPersonInfo(char * myname, int myage)
    {
        name = myname;
        age = myage;
    }
    void ShowPersonInfo() const
    {
        cout << "이름 : " << name << endl;
        cout << "나이 : " << age << endl;
    }
    ~Person()
    {
        delete []name;
        cout << "called destructor!" << endl;
    }
};

int main()
{
    Person parr[3];
    char namestr[100];
    // 넘겨주는 파라미터이다.
    char * strptr;
    int age;
    int len;

    for(int i=0; i < 3; i++)
    {
        cout << "이름 : ";
        cin >> namestr;
        cout << "나이 : ";
        cin >> age;
        len = strlen(namestr) + 1;
        strptr = new char[len];
        strcpy(strptr, namestr);
        parr[i].SetPersonInfo(strptr,age);
    }
    cout << endl;
    parr[0].ShowPersonInfo();
    parr[1].ShowPersonInfo();
    parr[2].ShowPersonInfo();
}