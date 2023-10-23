#include <iostream>

int main()
{
    int value;
    std::cout << "출력할 구구단의 숫자를 입력 : ";
    std::cin >> value;
    
    std::cout << value << "단의 구구단을 출력합니다 : " << std::endl;
    for(int i=1 ; i < 10 ; i++)
    {
        std::cout << i << " * " << value << " = " << i * value << std::endl;
    }

    return 0;
}