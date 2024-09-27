#include <iostream>
using namespace std;

class Complex{
private:
    // 실수부, 허수부
    int real, imag;
public:
    Complex(int r = 1, int i = 1) {real = r, imag = i;}

    // 연산자 overloading
    // A + B = C 일경우
    // A.operator+(B) -> return C 구조이다.
    Complex operator + (Complex const &obj){
        Complex res;
        // C.real = A.real + B.real
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print() { cout << real << " + i" << imag << endl;}
};