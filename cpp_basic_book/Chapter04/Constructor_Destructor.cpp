#include <iostream>
#include <string>

using namespace std;

class A
{
private:
    std::string name;
public:
    A(const std::string& temp) : name(temp)
    {
        cout << "A Constructor" << endl;
        cout << "name : " << name << endl;
    }
    ~A()
    {
        cout << "A Destroctor" << endl;
    }
};

int main()
{
    A a("name");
    return 0;
}