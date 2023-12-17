#include <iostream>
#include <cstring>
using namespace std;

class Gun
{
private:
    int bullet; // 장전된 총알의 수
public:
    Gun(int bnum) : bullet(bnum)
    {}
    void Shot()
    {
        cout << "BBANG!" << endl;
        bullet--;
    }
};

class Police : public Gun
{
private:
    int handcuffs; // 소유한 수갑의 수

};