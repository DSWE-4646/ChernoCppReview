#include<iostream>
#include<string>
#include<vector>

struct Vertex
{
	float x, y, z;

	Vertex(float x, float y, float z)
		: x(x), y(y), z(z)
	{
	}

	Vertex(const Vertex& vertex)
		: x(vertex.x), y(vertex.y), z(vertex.z)
	{
		std::cout << "Copied!" << std::endl;
	}
};


int main()
{

	std::vector <Vertex> vertices;

	vertices.emplace_back( 3, 2, 1 );
	vertices.emplace_back({ 6, 5, 4 });
	
	vertices.push_back({ 3, 2, 1 });
	vertices.push_back({ 6, 5, 4 });
	vertices.push_back({ 9, 8, 7 });

	std::cin.get();
}