#include<iostream>
//#include<string>

class Entity
{
	

public:
	std::string m_Name;

	Entity(std::string& name)
		: m_Name("Wakawaka")
	{

	}

	Entity()
	{
		m_Name = "Wagawaga";
		
	}

};


int main()
{
	Entity* e;
	{
		Entity* entity = new Entity;
		e = entity;
	}
	
	std::cout << e->m_Name << std::endl;
	std::cin.get();
	delete e;
}