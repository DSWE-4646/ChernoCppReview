#include <iostream>
void PrintValue(int a) {
    std::cout << "Value: " << a << std::endl;
}
// 方案1：typedef定义别名（C风格，兼容旧代码）
typedef void (*PrintFuncType)(int);
// 方案2：using定义别名（C++11+，推荐，更易读）
using PrintFuncAlias = void (*)(int);
int main() {
    PrintFuncType func1 = PrintValue;
    PrintFuncAlias func2 = PrintValue;
    func1(10);  // 输出：Value: 10
    func2(20);  // 输出：Value: 20
    return 0;
}
