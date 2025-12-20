#include <iostream>
#include <string>

void print(int value) {
    std::cout << value << std::endl;
}

void print(std::string value) {
    std::cout << value << std::endl;
}

int main() {
    print(5);
    print("Hello, World!");
    return 0;
}