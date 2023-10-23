#include <iostream>
#define BASE_PAY 50

int main()
{
    int sal;

    while(1)
    {
        std::cout << "판매 금액을 만원 단위로 입력(-1 to end)";
        std::cin >> sal;

        if(sal == -1){
            std::cout << "프로그램을 종료합니다." << std::endl;
            return 0;
        }
        else
            std::cout << "이번 달 급여 : " << BASE_PAY + (sal * 0.12) << std::endl;
        
    }
}