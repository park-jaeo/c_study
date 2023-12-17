#include <iostream>
using namespace std;

int main()
{
    const int num = 12;
    const int *ptr = &num;
    
    const int & ref = num;

    printf("print num : %d \n", num);
    printf("print ptr : %d \n", *ptr);
    printf("print ref : %d \n", ref);
}