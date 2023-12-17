#include <iostream>
#include <cstring>
using namespace std;

class PermanentWorker
{
private:
    char name[100];
    int salary;
public:
    PermanentWorker(char * name,int money)
        : salary(money)
    {
        strcpy(this->name, name);
    }
    int GetPay() const
    {
        return salary;
    }
    void ShowSalaryInfo() const
    {
        cout << "name: " << name << endl;
        cout << "salary : " <<GetPay() << endl << endl;
    }
};

// 이 클래스는 PermanentWorker 객체 배열을 저장 및 관리하는 클래스이다.
// 객체 배열과 직원 수를 저장한다.
class EmployHandler
{
private:
    PermanentWorker * empList[50];
    int empNum;
public:
    EmployHandler() : empNum(0)
    {}
    void AddEmployee(PermanentWorker *emp)
    {
        empList[empNum++] = emp;
    }
    void ShowAllSalaryInfo() const
    {
        for(int i=0; i <empNum ; i++)
            empList[i]->ShowSalaryInfo();
    }
    void ShowTotalSalary() const
    {
        int sum = 0;
        for(int i=0; i <empNum ; i++)
            sum += empList[i]->GetPay();
        cout << "salary sum : " << sum << endl;
    }
    ~EmployHandler() 
    {
        for(int i =0; i < empNum; i++)
            delete empList[i];
    }
};

// main 함수
int main()
{
    EmployHandler handler;

    // 1. AddEmployee의 매개변수는 PermanentWorker의 좌표이다.
    // 2. [new 키워드 + 데이터타입]의 반환값은 포인터가 되어야 한다.
    
    // 1. PermanentWorker의 생성자가 호출된다.
    // 2. 메모리가 할당되어 PermanetWorker 객체가 저장된다.
    // 3. new 표현식이 PermanentWorker 타입의 포인터를 반환한다.
    handler.AddEmployee(new PermanentWorker("KIN", 1000));
    handler.AddEmployee(new PermanentWorker("LEE", 1500));
    handler.AddEmployee(new PermanentWorker("JUN", 2000));
    /*
    이 코드는 기능적으로 아래 코드와 동일하다
    PermanentWorker * ptr = new PermanentWorker("KIN",1000);
    handler.AddEmplyee(ptr);
    */

    // 이번 달에 지불해야 할 급여의 정보
    handler.ShowAllSalaryInfo();

    // 이번 달에 지불해야 할 급여의 총합
    handler.ShowTotalSalary();
    return 0;
}