#include "pch.h"
#include <string_view>

static uint32_t s_AllocCount = 1;

void* operator new(size_t size)
{
	s_AllocCount++;
	std::cout << "Allocating " << size << " bytes\n";
	return malloc(size);
}

void operator delete(void* ptr)
{
	s_AllocCount--;
	std::cout << "Freeing memory\n";
	free(ptr);
}


void PrintFirstName(std::string_view name)
{
	std::cout << "First name: " <<name << std::endl;
}

void PrintSecondName(std::string_view name)
{
	std::cout << "Second name: " <<name << std::endl;
}

int main()
{
	std::string fullname = "SiberianSledCat";
	std::string_view FirstName(fullname.c_str(), 6);
	std::string_view SecondName (fullname.c_str() + 7, 13);
	PrintFirstName(FirstName);
	PrintFirstName(FirstName);
	//std::string FirstName = fullname.substr(0, 7);
	//PrintFirstName(FirstName);
	//PrintSecondName(fullname.substr(7, 13));

	//PrintFirstName("SiberianSledCat");
	//PrintSecondName("SledCat");
	std::cout << "Allocations: " << s_AllocCount << std::endl;

	std::cin.get();
	return 0;
}