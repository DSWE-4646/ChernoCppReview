#include<iostream>
#include<utility>
#include<string>

std::pair<std::string, std::string> pass_shader()
{
	std::string vs = "顶点着色器代码";
	std::string fs = "片段着色器代码";

	return std::make_pair(vs, fs);
}

int main()
{
	//auto [vertex_shader_code, fragment_shader_code] = pass_shader();  // C++17 structured binding
	auto shaders = pass_shader(); // C++14 compatible
	std::cout << "Vertex Shader Code: " << shaders.first << std::endl;
	std::cout << "Fragment Shader Code: " << shaders.second << std::endl;
	return 0;
}