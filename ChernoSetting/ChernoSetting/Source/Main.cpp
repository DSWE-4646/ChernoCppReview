#include<iostream>
#include<string>

struct Entity
{
	int x, y;

};

class ScopedPtr
{
private:
	Entity* m_Ptr;
public:
	ScopedPtr(Entity* Ptr)
		:m_Ptr(Ptr)
	{
		std::printf("Initial ScopePtr\n");
	}
	~ScopedPtr()
	{
		delete m_Ptr;
		std::printf("delete ScopePtr");
	}
	Entity& operator*()
	{
		return *m_Ptr;
	}
};

int* CreateArray()
{
	int array[50];
	return array;
}

int main()
{
	{
	ScopedPtr e = new Entity();
	}
	
	std::cin.get();
}