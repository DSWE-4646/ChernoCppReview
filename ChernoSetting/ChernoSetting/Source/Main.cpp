#include<iostream>
#include<vector>
#include<string>

std::vector<std::string> pass_shader()
{
	std::vector<std::string> shaders(2);
	shaders[0] ="顶点着色器代码";
	shaders[1] = "片段着色器代码";
	
	return shaders;
}

int main()
{
	//auto [vertex_shader_code, fragment_shader_code] = pass_shader();  // C++17 structured binding
	auto shaders = pass_shader(); // C++14 compatible
	std::cout << "Vertex Shader Code: " << shaders[0] << std::endl;
	std::cout << "Fragment Shader Code: " << shaders[1] << std::endl;
	return 0;
}