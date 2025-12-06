#include<iostream>
//#include<string>

class Example
{
public:
	Example()
	{
		std::printf("Initial Example\n");
	}

	Example(int x)
	{
		std::cout << ("Initial Example and x ist ") << x << std::endl;
		//std::printf("Initial Example and x ist %d", x);
	}

};

class Entity
{
	

public:
	std::string m_Name;
	Example m_Example;

	Entity(std::string& name)
		: m_Name("Wakawaka")
	{

	}

	Entity()
	{
		m_Name = "name";
		m_Example = Example(5);
	}

};


int main()
{
	Entity e;
	std::printf("Name is %s\n", e.m_Name.c_str());
	std::cin.get();
}