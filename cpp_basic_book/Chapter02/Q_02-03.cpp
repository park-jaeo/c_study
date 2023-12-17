#include <iostream>
using namespace std;

typedef struct __Point
{
    int xpos;
    int ypos;
} Point;

// Point구조체를 참조로 전달했다.
Point & PntAdder(const Point &p1, const Point &p2)
{
    Point * center = new Point;
    // 인자들은 포인터가 아닌 참조로 전달했기 때문에 p1->xpos 형식이 아닌
    // p1.xpos의 형태로 사용한다.
    center->xpos = (p1.xpos+p2.xpos)/2;
    center->ypos = (p1.ypos+p2.ypos)/2;
    // 함수 형식이 Point & 이기 때문에(포인터가 아니라 value)
    // p3 포인터의 value를 반환했다. (*p3)
    return *center;
}

int main()
{
    Point * p1 = new Point;
    p1->xpos = 10;
    p1->ypos = 20;

    Point * p2 = new Point;
    p2->xpos = 20;
    p2->ypos = 30;

    Point & p3 = PntAdder(*p1,*p2);
    cout << "Print p3 location "<< endl;
    cout << " X position : " << p3.xpos << endl;
    cout << " Y position : " << p3.ypos << endl;
    delete p1;
    delete p2;
    delete &p3;
    return 0;
}