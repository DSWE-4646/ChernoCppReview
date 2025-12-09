#include<iostream>
//#include<string>

class Entity
{
	

public:
	std::string m_Name;
	int m_Age;

	Entity(std::string& name)
		: m_Name("name"), m_Age(-1)
	{

	}

	Entity(int age)
		:m_Name("Unkonwn"), m_Age(age){ }

};


int main()
{
	Entity a = Entity("wagagwaga");
	Entity b = Entity(23);

	std::cin.get();
}