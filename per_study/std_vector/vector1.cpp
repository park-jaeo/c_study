#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // std::vector 변수 선언
    vector<int> array;
    vector<int> array2 = {9,7,5,3,1};
    vector<int> array3 {9,7,5,3,1};

    // 배열요소 접근
    array2[1] = 2;
    array2.at(3) = 1;
    
    // 배열요소 출력
    for(int i=0 ; i < array2.size() ; i++)
    {
        cout << array2.at(i) << ", ";
    }

    return 0;
}