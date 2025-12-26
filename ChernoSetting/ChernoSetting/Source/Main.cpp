#include <iostream>
#include<vector>

using CallbackFunc = void(*)(int);
void ForEach(const std::vector<int>& values, CallbackFunc CallFunc)
{
    for (auto val : values)
        CallFunc(val);
}

void PrintValue(int value)
{
    std::cout << "Value: " << value << std::endl;
}

void PrintSquare(int value)
{
    std::cout << "Square: " << value * value << std::endl;
}

int main()
{
	std::vector<int> values = { 1, 2, 3, 4, 5 };
    std::cout << "原始元素：";
	ForEach(values, PrintValue);
    std::cout << "\n元素平方：";
	ForEach(values, PrintSquare);
    ForEach(values, [](int val) {std::cout << "\nLambda: " << val * 5 << std::endl; });

    return 0;
}
