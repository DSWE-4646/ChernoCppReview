#include<iostream>
//#include<string>

class Entity
{
	mutable int m_X, m_Y;

public:
	int GetX() const
	{
		std::cout << m_X << std::endl;
		return m_X;
	}

	void SetX(int x) const
	{
		m_X = x;
	}
};

void PrintrEntityX(const Entity& e)
{
	//e = nullptr;
	e.SetX(3);
	e.GetX();
	//e.GetX();
	std::cout<<e.GetX();
}

int main()
{
	Entity e;

	std::cin.get();
}