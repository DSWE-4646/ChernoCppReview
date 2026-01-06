#include <iostream>

struct Entity
{
	int x,y;
};

int main()
{
	struct Entity e;
	e.x = 2;
	e.y = 3;

	//int* value = (int*)&e;
	int value = *(int*)((char*)&e + sizeof(int));
	//std::cout << value[0] << "\n" << value[1] << std::endl;
	std::cout << value;
	std::cin.get();
}