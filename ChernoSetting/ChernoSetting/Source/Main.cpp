#include <iostream>


void HelloWorld() {
	std::cout << "Hello, World!" << std::endl;
}

void PrintNumber(int number) {
	std::cout << "Number: " << number;
}

int main() {
	void(*func1)() = HelloWorld;
	func1();
	(*func1)();

	void(*PrintNummer)(int) = PrintNumber;
	PrintNummer(42);
}
