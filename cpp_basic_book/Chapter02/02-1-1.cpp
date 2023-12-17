#include <iostream>
using namespace std;

void PlusOne(int &ref1)
{
    ref1 +=1;
}

void ReverseSymbol(int & ref1)
{
    ref1 = -ref1;
}

int main()
{
    int val;
    cout << "Input Number : "; cin >> val;
    PlusOne(val);
    cout << "Plus Number : " << val << endl;
    ReverseSymbol(val);
    cout << "ReverseSymbol Number : " << val << endl;
    
}