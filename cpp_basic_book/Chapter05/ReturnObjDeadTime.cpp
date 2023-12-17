#include <iostream>
using namespace std;

class SoSimple
{
private:
    int num;
public:
    // Constructor
    SoSimple(int n) : num(n)
    {
        cout << "New Object : " << this << endl;
    }
    // Copy Constructor
    SoSimple(const SoSimple& copy) : num(copy.num)
    {
        cout << "New Copy obj : " << this << endl;
    }
    // Destructor
    ~SoSimple()
    {
        cout << "Destroy obj : " << this << endl;
    }
};

SoSimple SimpleFuncObj(SoSimple ob)
{
    // Parameter Adress
    cout << "Pram ADR: " << &ob << endl;
    return ob;
}

int main()
{
    SoSimple obj(7);
    SimpleFuncObj(obj);

    cout << endl;
    SoSimple tempRef = SimpleFuncObj(obj);
    cout << "Return Obj : " << &tempRef << endl;
    return 0;
}












