#include <iostream>
#include <cstring>
using namespace std;

class MyFriendInfo
{
private:
    char * name;
    int age;
public:
    MyFriendInfo(char * fname, int fage) : age(fage)
    {
        cout << "MyFriendInfo Constructor Called\n";
        // 배열 동적 할당법
        // int * name = new char[length]
        name = new char[strlen(fname)];
        strcpy(name,fname);
    }
    ~MyFriendInfo()
    {
        cout << "MyFriendInfo Destructor Called" << endl;
    }
    void ShowMyFriendInfo()
    {
        cout << "이름 : " << name << endl;
        cout << "나이 : " << age << endl;
    }
};

class MyFriendDetailInfo : public MyFriendInfo
{
private:
    char * addr;
    char * phone;
public:
    MyFriendDetailInfo(char * fname, int fage, char * faddr, char * fphone) : MyFriendInfo(fname,fage), phone(fphone)
    {
        cout << "MyFriendDetailInfo Constructor Called\n";
        addr = new char[strlen(faddr)];
        phone = new char[strlen(fphone)];
        strcpy(addr,faddr);
        strcpy(phone,fphone);
    }
    ~MyFriendDetailInfo()
    {
        cout << "MyFriendDetailInfo Destructor Called" << endl;
    }
    void ShowMyFriendDetailInfo()
    {
        ShowMyFriendInfo();
        cout << "주소 : " << addr << endl;
        cout << "전화 : " << phone << endl;
        
    }
};

int main()
{

    char * name = "박광수";
    char * addr = "파주시 월롱동 342번지 32";
    char * phone = "010-2419-8832";
    int age = 32;
    MyFriendDetailInfo mfriend(name,age,addr,phone);
    mfriend.ShowMyFriendDetailInfo();
    return 0;
}


