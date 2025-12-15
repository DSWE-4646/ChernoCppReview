#include<iostream>
#include<string>
#include<vector>

struct Vertex
{
	float x, y, z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& ver)
{
	stream << ver.x << "," << ver.y << "," << ver.z << std::endl;
	return stream;
}

int main()
{
	std::vector <Vertex> vertices = { {1, 2, 3}, { 4, 5, 6 }, { 7, 8, 9 } };
	//std::vector <Vertex> vertices;
	
	for(int i = 0; i < vertices.size(); i++)
	std::cout<< vertices[i]<< std::endl;
	vertices.clear();

	vertices.push_back({ 3, 2, 1 });
	vertices.push_back({ 6, 5, 4 });
	vertices.push_back({ 9, 8, 7 });

	vertices.erase(vertices.begin() + 1);

	for(const Vertex& v : vertices)
	std::cout << v << std::endl;

	std::cin.get();
}