#include <iostream>
#include<array>
#include <algorithm>

void printArray(const std::array<int, 5>& a) {
	for (size_t i = 0; i < a.size(); i++) {
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
}

int main() {
	std::array<int, 5> arr = { 7, 2, 5, 9, 3 };
	std::array<int, 3> arr2 = { 1, 2, 3};

	for (auto var : arr) {
		std::cout << var << std::endl;
	}
	

}
