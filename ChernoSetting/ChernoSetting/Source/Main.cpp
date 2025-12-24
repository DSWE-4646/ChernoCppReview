#include <iostream>
#include<array>

int main() {
	std::array<int, 5> arr = { 1, 2, 3, 4, 5 };
	std::array<int, 5> arr2;
	arr2.fill(0);

	std::cout << arr[3] << std::endl;
	std::cout << arr2.at(3) << std::endl;

	std::cout << "Size of arr: " << arr.size() << std::endl;
	std::cout << "Max Size of arr2: " << arr2.max_size() << std::endl;
	std::cout << "Is Empty Of array:" << arr.empty() << std::endl;

	const int* p = arr.data();
	std::cout << "First Element of arr using data(): " << p[3] << std::endl;

}
