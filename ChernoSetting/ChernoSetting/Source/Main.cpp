#include <iostream>
#include <vector>
int main() {
    // 1. 基本类型（int，4字节）
    int value = 5;
    // 2. 数组（5个int，共20字节）
    int array[5];
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;
    // 3. 自定义类型（vector，3个float，共12字节）
    std::vector<float> vec(3);
    vec[0] = 10.0f;
    vec[1] = 11.0f;
    vec[2] = 12.0f;

    // 1. 基本类型（int）
    int* h_value = new int;
    *h_value = 5; // 解引用赋值
    // 2. 数组（5个int，注意数组释放用delete[]）
    int* h_array = new int[5];
    h_array[0] = 1;
    h_array[1] = 2;
    h_array[2] = 3;
    h_array[3] = 4;
    h_array[4] = 5;
    // 3. 自定义类型（vector）
    std::vector<float>* h_vec = new std::vector<float>(3);
    (*h_vec)[0] = 10.0f;
    (*h_vec)[1] = 11.0f;
    (*h_vec)[2] = 12.0f;
    // 手动释放堆内存（必须，否则内存泄漏）
    delete h_value;         // 基本类型释放
    delete[] h_array;       // 数组释放（带[]）
    delete h_vec;           // 自定义类型释放
    return 0;
}
