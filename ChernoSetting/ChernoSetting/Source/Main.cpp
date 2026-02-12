#include <iostream>
#include <any>
#include <string>

uint8_t AllocCount = 0;
void* operator new(size_t size)
{
	AllocCount++;
	std::cout << "Allocating " << size << " bytes" << std::endl;
	return malloc(size);
}

struct SmallStorge
{
	char SmallData[32];
};

struct BigStorge
{
	char BigData[1024];
};

int main()
{
	std::any data;
	data = 1135;
	std::cout << "The Type is:" <<data.type().name() << ",";
	std::cout << "The Value is:" <<std::any_cast<int>(data) << std::endl;

	data = 3.1415926;
	std::cout << "The Type is:" << data.type().name() << ",";
	std::cout << "The Value is:" << std::any_cast<double>(data) << std::endl;

	/*
	data = std::string("LessThan15B");
	std::cout << "The Type is:" << data.type().name() << ",";
	std::cout << "The Value is:" << std::any_cast<std::string>(data) << std::endl;
	*/

	/*
	try
	{
		std::cout << "The Type is:" << data.type().name() << ",";
		std::cout << "No Type Check lead to exception: " << std::any_cast<int>(data) << std::endl;
	}
	catch (const std::bad_any_cast& e)
	{
		std::cout << e.what() << std::endl;
	}
	*/

	data = SmallStorge{};
	data = BigStorge{};
	
}
