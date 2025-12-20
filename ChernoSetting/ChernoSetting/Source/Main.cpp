#include <iostream>
#include <string>

template<typename T>
void print(T value) {
    std::cout << value << std::endl;
}


int main() {
    print(5);
    print("Hello, World!");
    print<float>(3.1415926);
    return 0;
}