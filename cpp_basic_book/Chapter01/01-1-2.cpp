#include <iostream>

int main()
{
    char name[20];
    char phonenum[30];

    std::cout << "이름을 입력하세요 : ";
    std::cin >> name;

    std::cout << "전화번호를 입력하세요 : ";
    std::cin >> phonenum;

    std::cout << std::endl;
    std::cout << "이름 : " << name << std::endl;
    std::cout << "전화번호 : " << phonenum << std::endl;

    return 0;
}