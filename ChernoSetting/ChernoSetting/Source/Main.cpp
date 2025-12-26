#include <iostream>
#include <vector>
#include <algorithm> // std::find_if头文件
int main() {
    std::vector<int> values = { 1, 0, 4, 9, 3 };
    // std::find_if：查找第一个满足条件的元素，Lambda作为谓词
    auto it = std::find_if(values.begin(), values.end(), [](int val) {
        return val > 3; // 条件：元素大于3
        });
    if (it != values.end()) {
        std::cout << "第一个大于3的元素：" << *it << std::endl; // 输出：5
    }
    return 0;
}
