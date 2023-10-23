#include <iostream>

int main()
{
    int value;
    int hap=0;
    for(int i=0 ; i < 5 ; i++)
    {
        std::cout << i+1 <<"번째 정수 입력 : ";
        std::cin >> value;
        hap += value;
    }
    std::cout << "합계 : " << hap << std::endl;
    return 0;    
}