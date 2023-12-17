#include <iostream>
#include <cstring>
using namespace std;

class Girl;

class Boy
{
private:
    int height;
    // private영역에서도 friend 선언이 가능하다
    friend class Girl;
public:
    Boy(int len) : height(len)
    { }
    void ShowYourFriendInfo(Girl &frn);
};

class Girl
{
private:
    char phNum[20];
public:
    Girl(char * num)
    {
        strcpy(phNum, num);
    }
    void ShowYourFriendInfo(Boy &frn);
    // friend 선언을 했다.
    friend class Boy;
};

void Boy::ShowYourFriendInfo(Girl &frn)
{
    cout << "Her phone number : " << frn.phNum << endl;
}

void Girl::ShowYourFriendInfo(Boy &frn)
{
    cout << "His height : " << frn.height << endl;
}

int main()
{
    Boy boy(170);
    Girl girl("010-1234-5678");
    boy.ShowYourFriendInfo(girl);
    girl.ShowYourFriendInfo(boy);
    return 0;
}