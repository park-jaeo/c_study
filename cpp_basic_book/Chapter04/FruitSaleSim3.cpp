#include <iostream>
using namespace std;

class FruitSeller
{
private:
    const int APPLE_PRICE;
    int numOfApples;
    int myMoney;
public:
    FruitSeller(int price, int num, int money)
        :APPLE_PRICE(price), numOfApples(num), myMoney(money)
    {}
    int SaleApples(int money)
    {
        // 돈을 받아 사과 몇개를 줘야하는지 계산
        int num = money/APPLE_PRICE;
        // 사과를 건내주고, 사과 재고에서 제한다
        numOfApples -=num;
        // 받은 돈을 지갑에 넣는다
        myMoney+=money;
        // 판매한 사과를 구입자에게 전달한다.
        return num;
    }
    void ShowSalesResult() const
    {
        cout << "남은 사과 : " << numOfApples << endl;
    }
};

class FruitBuyer
{
private:
    int myMoney;
    int numOfApples;
public:
    FruitBuyer(int money)
        :myMoney(money), numOfApples(0)
    {
    }
    void BuyApples(FruitSeller &seller, int money)
    {
        // 판매자 주소로 SalesApples 함수를 호출한다.
        // 이 경우 인자로는 돈을 전달한다.

        // SalesApples 함수의 반환값(사과, return num)를 
        // 자신의 사과 갯수에 더한다.
        numOfApples += seller.SaleApples(money);
        // 돈을 건내주었으므로 지갑에서 건내준 돈을 제한다.
        myMoney -= money;
    }
    void ShowBuyResult() const
    {
        cout << "현재 잔액 : " << myMoney << endl;
        cout << "사과 개수 : " << numOfApples << endl;
    }
};

int main()
{
    FruitSeller seller(1000, 20, 0);
    FruitBuyer buyer(5000);
    buyer.BuyApples(seller, 2000);

    cout << "과일 판매자의 현황 : " << endl;
    seller.ShowSalesResult();
    cout << endl;
    cout << "과일 구매자의 현황 : " << endl;
    buyer.ShowBuyResult();
    return 0;

}
















