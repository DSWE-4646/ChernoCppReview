#include <iostream>

int main()
{
	int a = 50;

	double value = *(double*)&a;
	double RichtigValue = a;
	std::cout << value << std::endl;

	std::cin.get();
}