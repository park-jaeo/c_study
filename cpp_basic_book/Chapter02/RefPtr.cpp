#include <iostream>
using namespace std;



int main()
{
	// 변수,포인터 정의
	int num = 12;
	int * ptr =  &num;
	int ** dptr = &ptr;

	// 참조자 정의
	int &ref = num;
		// 포인터를 나타내는 &pref를
		// * (&pref)의 형태로 정의해 주었다.
	int * (&pref) = ptr;
		// 더블 포인터를 나타내는 &dpref를
		// ** (&dpref)의 형태로 정의해 주었다.
	int ** (&dpref) = dptr;
	
	// 참조자 출력
	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;
	return 0;
}