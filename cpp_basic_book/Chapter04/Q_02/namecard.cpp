#include <iostream>
#include <cstring>
using namespace std;






namespace COMP_POS
{
    // 이 네임스페이스 내의 모든 정수는 enum으로 간주된다.
    enum {CLERK,SENIOR,ASSIST,MANGER};
    
    // enum 규칙이 적용되는 함수이다.
    void ShowPositionInfo(int pos)
    {
        switch(pos)
        {
            case CLERK:
                cout << "직급 : 사원" << endl << endl;
                break;
            case SENIOR:
                cout << "직급 : 주임" << endl << endl;
                break;
            case ASSIST:
                cout << "직급 : 대리" << endl << endl;
                break;
            case MANGER:
                cout << "직급 : 매니저" << endl << endl;
                break;
        }
    }    
}




class NameCard
{
private:
    char *per_name;
    char *corp_name;
    char *p_num;
    int position;
public:
    NameCard(char *p_name, char *c_name, char *_p_num, int po)
    // 일반 변수는 멤버변수 리스트를 이용해서 초기화해 주었다
        : position(po)
    // char *포인터에 메모리를 동적으로 할당하기 위해서 별도의 코드를 사용해 주었다.
    {
        per_name = new char[strlen(p_name) + 1];
        corp_name = new char[strlen(c_name) + 1];
        p_num = new char[strlen(_p_num) + 1];
        strcpy(per_name, p_name);
        strcpy(corp_name, c_name);
        strcpy(p_num, _p_num);
    }
    void ShowNameCardInfo()
    {
        cout << "이름 : " << per_name << endl;
        cout << "회사 : " << corp_name << endl;
        cout << "전화번호 : " << p_num << endl;
        // NameCard클래스의 private변수인 position을 인자로 전달한다.
        COMP_POS::ShowPositionInfo(position);
    }
    ~NameCard()
    {
        delete []per_name;
        delete []corp_name;
        delete []p_num;
    }
};




int main()
{
    NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
    NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
    NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
    manClerk.ShowNameCardInfo();
    manSENIOR.ShowNameCardInfo();
    manAssist.ShowNameCardInfo();
    return 0;    
}