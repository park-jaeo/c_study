#include <iostream>
using namespace std;

void Counter()
{
    static int cnt;
    cnt++;
    cout << "Current cnt : " << cnt << endl;
}
int main()
{
    for(int i=0; i <10; i++)
    {
        // static int 변수를 사용하여 함수가 끝나도 지역변수가 초기화되지 않는다.
        Counter();
    }
    return 0;
}