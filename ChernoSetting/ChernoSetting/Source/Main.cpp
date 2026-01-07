#include <iostream>

struct Vector2
{
	int x, y;
};

/* 共享内存导致y出现类型双关中同样的垃圾值
union Entity
{
		int x;
		float y;
};
*/

struct Vector4
{
		int x, y, z, w;
		Vector2& GetFront()
		{
			return *(Vector2*)&x;
		}
};

int main()
{
	Vector4 e;
	Vector2& f = e.GetFront();
	e.x = 333;
	e.y = 444;
	std::cout << e.x << std::endl;
	std::cout << e.y << std::endl;
	f.x = 555;
	f.y = 666;
	std::cout << e.x << std::endl;
	std::cout << e.y << std::endl;
	
	std::cin.get();
}