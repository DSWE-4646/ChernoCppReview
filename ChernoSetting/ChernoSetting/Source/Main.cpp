#include<iostream>
#include<string>

struct Entity
{
	int x, y;

	Entity(int x, int y)
	{
		//x = x;
		Entity* e = this;
		this->x = x;
		e->x = x;
		(*this).x = x;

		PrintEntity(*this);

		delete this;
	}

	int GetX() const 
	{
		const Entity* e = this;
	}
};

void PrintEntity(const Entity& e)
{

}



int main()
{
	
	std::cin.get();
}