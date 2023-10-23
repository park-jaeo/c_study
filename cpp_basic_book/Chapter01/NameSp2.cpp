#include <iostream>

// namespace함수의 선언
namespace BestComImp1
{
    void SimpleFunc();
}

namespace ProgComImp1
{
    void SimpleFunc();
}

// 메인 코드
int main()
{
    BestComImp1::SimpleFunc();
    ProgComImp1::SimpleFunc();
    return 0;
}

// namespace 함수의 정의(구현)
void BestComImp1::SimpleFunc()
{
    std::cout << "BestCom이 구현한 함수" << std::endl;
}

void ProgComImp1::SimpleFunc()
{
    std::cout << "ProgCom이 구현한 함수" << std::endl;
}