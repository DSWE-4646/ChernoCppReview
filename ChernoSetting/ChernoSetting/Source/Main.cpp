#include<iostream>
#include<string>
#include<memory>

struct VectorSample
{
	int x, y, z;
	long long int i;
};


int main()
{
	int offset = (int)&((VectorSample*)0)->i;
	std::cout<< offset<< std::endl;
	std::cin.get();
}