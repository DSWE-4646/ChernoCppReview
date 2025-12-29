#include <iostream>

namespace apple 
{
    namespace v1
    {
        void test() {
            std::cout << "apple namespace v1" << std::endl;
        }
    }
    
    inline namespace v2
    {
        void test() {
            std::cout << "apple namespace v2" << std::endl;
        }
    }
}
int main() {
    using apple::test;
	using oldversion = apple::v1;
	apple::test(); // 调用的是v2版本的test函数
	oldversion::test(); // 调用的是v1版本的test函数

    return 0;
}
