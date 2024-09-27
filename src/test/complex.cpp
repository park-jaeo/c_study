#include "include/complex.h"

int main(){
    Complex c1(10,5), c2(2,4);
    Complex c3 = c1 + c2; // Constructor 호출과 함께 연산자를 호출할 수도 있다.
    c3.print();
}