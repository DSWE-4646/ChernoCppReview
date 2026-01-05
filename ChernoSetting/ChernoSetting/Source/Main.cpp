#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main()
{
	std::vector<int> numbers = { 5, 3, 8, 1, 2 };
	std::sort(numbers.begin(), numbers.end(), [](int a, int b) {
		if (a == 1) return false;
		if (b == 1) return true;
		return a < b;
		});
	for (const auto& num : numbers)
	{
		std::cout << num << " ";
	}
}