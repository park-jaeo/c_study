#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 20;


void ShowMenu();
void MakeAccount();
void DepositMoney();
void WithdrawMoney();
void ShowAllAccInfo();



enum {MAKE = 1,DEPOSIT,WITHDRAW, INQUIRE, EXIT};

typedef struct
{
    int accID;
    int balance;
    char cusName[NAME_LEN];
} Account;

// 구조체를 전역변수로 선언했다.
Account accArr[100];
int accNum = 0;

int main()
{
    int choice;
    
    while(1)
    {
        ShowMenu();
        cout << "선택 : "; cin >> choice;
        switch(choice)
        {
            case MAKE:
            MA
                MakeAccount();
                break;
            case DEPOSIT : 
                DepositMoney();
            case WITHDRAW:
            
        }
    }
}


void ShowMenu()
{
    cout << "-----Menu-----" << endl;
    cout << "1. 계좌 개설" << endl;
    cout << "2. 입금" << endl;
    cout << "3. 출금" << endl;
    cout << "4. 계좌정보 전체 출력" << endl;
    cout << "5. 프로그램 종료" << endl;   
}

void MakeAccount();
{
    int id;
    int bal;
    char name[NAME_LEN];

    cout << "계좌ID : " ; cin >> id;
    cout << "초기 잔액 : " ; cin >> bal;
    cout << "이름 : " ; cin >> name;
    
    accArr[accNum].

}


void DepositMoney();
void WithdrawMoney();
void ShowAllAccInfo();

















