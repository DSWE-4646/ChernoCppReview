#include<iostream>
#include<string>
#include<memory>

class Entity
{
private:
	Entity* m_Ptr;
public:
	Entity()
	{
		std::printf("Initial ScopePtr\n");
	}

	~Entity()
	{
		std::printf("delete ScopePtr");
	}

	void Print() {}
};

int* CreateArray()
{
	int array[50];
	return array;
}

int main()
{
	{
	//std::unique_ptr<Entity> entity(new Entity());
	std::unique_ptr<Entity> entity = std::make_unique<Entity>(); //为了异常安全
	//std::unique_ptr<Entity> e0 = entity;

	{
		std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>(); //为了异常安全
		std::shared_ptr<Entity> e0 = sharedEntity;
		std::weak_ptr<Entity> weakEntity = sharedEntity;
		entity->Print();
	}
	
	}
	
	std::cin.get();
}