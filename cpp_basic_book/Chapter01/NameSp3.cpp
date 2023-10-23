#include <iostream>

// namespace함수의 선언
namespace BestComImp1
{
    void SimpleFunc();
}

namespace BestComImp1
{
    void PrettyFunc();
}

namespace ProgComImp1
{
    void SimpleFunc();
}

// 메인 코드
int main()
{
    BestComImp1::SimpleFunc();
    return 0;
}

// namespace 함수의 정의(구현)
void BestComImp1::SimpleFunc()
{
    std::cout << "BestCom이 구현한 함수" << std::endl;
    PrettyFunc();
    // 한 이름공간 내 함수의 구현에서, 다른 이름공간의 함수를 실행했다.
    ProgComImp1::SimpleFunc();
}

void BestComImp1::PrettyFunc()
{
    std::cout << "So Pretty!!" << std::endl;
}

void ProgComImp1::SimpleFunc()
{
    std::cout << "ProgCom이 구현한 함수" << std::endl;
}













