int main()
{
    int v = 0;

    int & r1 = v; // l-value 참조
//  int & r2 = 10; //레퍼런스의 r-value 참조로 에러 발생 
    // r-value는 임시 값으로 소멸되는 값이기 때문에 참조하지 못한다.

    const int & r3 = v; // l-value 참조
    const int & r4 = 10;
    // r-value 참조를 const 키워드를 사용해서 l-value 참조로 바인딩해 주엇다.
    // 바인딩이란?
    // 프로그램 소스에 쓰인 내부 요소, 이름 식별자들에 대해 값 또는 속성을 
    // 확정하는 과정을 바인딩이라고 한다.
    // = 프로그램 구성 요소의 성격을 정해주는 것이다.

//  int&& r5 = v; // &&은 r-value 레퍼런스인데 l-value 레퍼런스를 가리키면
//  컴파일 에러를 발생시킨다
    int&& r6 = 10; // r-value 레퍼런스로 r-value를 가리켜서 문제 없다.


}