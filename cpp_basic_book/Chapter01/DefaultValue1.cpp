#include <iostream>

int Adder(int num1 = 1, int num2 = 2)
{
    return num1+num2;
}

int main()
{
    // 1+2
    std::cout << Adder() << std::endl;
    
    // 5+2
    std::cout << Adder(5) << std::endl;
    
    // 3+5
    std::cout << Adder(3,5) << std::endl;
    
    return 0;
}