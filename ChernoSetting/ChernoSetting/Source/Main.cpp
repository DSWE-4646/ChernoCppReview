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
	Entity* b = new Entity[50];
	
	std::cout << e->m_Name << std::endl;
	std::cin.get();
	delete e;
}