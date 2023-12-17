#include <iostream>
using namespace std;

class FruitSeller
{
private:
    int APPLE_PRICE;
    int numOfApples;
    int myMoney;

public:
    void InitMembers(int price, int num, int money)
    {
        APPLE_PRICE = price;
        numOfApples = num;
        myMoney = money;
    }
    int SalesApples(int money)
    {
        int num = money/APPLE_PRICE;
        numOfApples-=num;
        myMoney+=money;
        return num;
    }
    void ShowSalesResults() const
    {
        cout << "남은 사과 : " << GetAppleNums() << endl;
        cout << "판매 수익 : " << myMoney << endl;
    }
    int GetAppleNums() const
    {
        if(numOfApples < 0){
            cout << "사과 갯수가 잘못되었습니다" << endl;
            return 0;
        }
        else
            return numOfApples;
    }
};

class FruitBuyer
{
private:
    int myMoney;
    int numOfApples;

public:
    void InitMembers(int money)
    {
        myMoney = money;
        numOfApples = 0;
    }
    void BuyApples(FruitSeller &seller,int money)
    {
        numOfApples += seller.SalesApples(money);
        myMoney -= money;
    }
    void ShowBuyResults() const
    {
        cout << "현재 잔액 : " << myMoney << endl;
        cout << "사과 개수 : " << GetAppleNums() << endl;
    }
    int GetAppleNums() const
    {
        if(numOfApples < 0){
            cout << "사과 갯수가 잘못되었습니다" << endl;
            return 0;
        }
        else
            return numOfApples;
    }
};

int main()
{
    FruitSeller seller;
    seller.InitMembers(1000, 5, 0);
    FruitBuyer buyer;
    buyer.InitMembers(5000);
    buyer.BuyApples(seller, 10000);

    cout << "과일 판매자의 현황 : " << endl;
    seller.ShowSalesResults();
    cout << "과일 구매자의 현황 : " << endl;
    buyer.ShowBuyResults();
    return 0;
}
