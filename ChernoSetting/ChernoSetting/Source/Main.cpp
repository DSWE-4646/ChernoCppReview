#include<iostream>
//#include<string>

int main()
{
	const int MAX_AGE = 90;

	int* const a = new int;

	*a = 2;
	a = (int*)&MAX_AGE; // This is bad practice and leads to undefined behavior
	std::cout << *a << std::endl;

	std::cin.get();
}