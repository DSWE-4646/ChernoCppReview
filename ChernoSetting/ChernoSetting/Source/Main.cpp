#include<iostream>
#include<array>
#include<string>

std::array<std::string, 2> pass_shader()
{
	std::string vshader = "顶点着色器代码";
	std::string fshader = "片段着色器代码";
	
	return { vshader, fshader };
}

int main()
{
	//auto [vertex_shader_code, fragment_shader_code] = pass_shader();  // C++17 structured binding
	auto shaders = pass_shader(); // C++14 compatible
	std::cout << "Vertex Shader Code: " << shaders[0] << std::endl;
	std::cout << "Fragment Shader Code: " << shaders[0] << std::endl;
	return 0;
}