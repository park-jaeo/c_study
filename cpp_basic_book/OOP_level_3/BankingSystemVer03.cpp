#include <iostream>
#include <cstring>
using namespace std;

class Account
{
private:
    int accID;
    int balance;
    char * cusName;
public:
    // Member variable Initialization
    Account(int id, int money, char * name)
    : accID(id), balance(money)
    {
        cusName = new char[strlen(name)+1];
        strcpy(cusName,name);
    }
    // Copy Constructor
    Account(const Account & ref)
        : accID(ref.accID), balance(ref.balance)
    {
        // Deep copy
        cusName = new char[strlen(ref.cusName)+1];
        strcpy(cusName,ref.cusName);
    }

    int GetAccID() { return accID; }

    void Deposit(int money)
    {
        balance+=money;
    }
    int Withdraw(int money)
    {
        if(balance<money)
            return 0;
        
        balance=-money;
        return money;
    }
    void ShowAccInfo()
    {
        cout << "계좌ID : " << accID << endl;
        cout << "이  름 : " << cusName << endl;
        cout << "잔  액 : " << balance << endl;
    }
    ~Account()
    {
        delete []cusName;
    }
};