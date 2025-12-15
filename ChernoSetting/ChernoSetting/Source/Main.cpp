#include<iostream>
#include<string>
#include<memory>

class Entity
{

public:
	void PrintContent()
	{
		std::cout << "This is ene Entity Class" << std::endl;
	}
};

class ScopedPtr
{
private:
	Entity* EntityPtr;
public:
	ScopedPtr(Entity * Ptr)
		: EntityPtr(Ptr)
	{ }

	~ScopedPtr()
	{
		delete EntityPtr;
	}

	Entity* operator->()
	{
		return EntityPtr;
	}
};

int main()
{
	ScopedPtr e(new Entity());
	e->PrintContent();
	std::cin.get();
}