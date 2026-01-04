#include <iostream>

int main() 
{
	int static_2D[5][5] = { {1, 2, 3, 4, 5},
							{6, 7, 8, 9, 10},
							{11, 12, 13, 14, 15},
							{16, 17, 18, 19, 20},
							{21, 22, 23, 24, 25} };

	//for( int (&row)[5] : static_2D) auto实质就是这个对数组的引用，加括号
	for (auto& row : static_2D)
		for(auto elem : row)
		std::cout << elem << std::endl;
    return 0;
}
