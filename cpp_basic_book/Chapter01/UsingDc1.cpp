#include <iostream>

namespace Hybrid
{
    void HybFunc()
    {
        std::cout << "So Simple Func!" << std::endl;
        std::cout << "In namespace Hybrid" << std::endl;
    }
}

int main()
{
    // 키워드 using을 사용하여,
    // namespace Hybrid의 HybFunc 함수를 호출할 때에는
    // 별도의 명시 없이 호출하겠다고 선언하고 있다.
    using Hybrid::HybFunc;
    HybFunc();
    return 0;
}
