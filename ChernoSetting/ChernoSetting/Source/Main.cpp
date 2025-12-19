#include<iostream>
#include<tuple>
#include<string>

std::tuple<std::string, std::string, int> pass_shader()
{
	std::string vs = "顶点着色器代码";
	std::string fs = "片段着色器代码";
	int version = 330;

	return std::make_tuple(vs, fs, version);
}

int main()
{
	//auto [vertex_shader_code, fragment_shader_code] = pass_shader();  // C++17 structured binding
	auto shaders = pass_shader(); // C++14 compatible
	std::cout << "Vertex Shader Code: " << std::get<0>(shaders) << std::endl;
	std::cout << "Fragment Shader Code: " << std::get<1>(shaders) << std::endl;
	std::cout << "Version ist: " << std::get<2>(shaders) << std::endl;
	return 0;
}