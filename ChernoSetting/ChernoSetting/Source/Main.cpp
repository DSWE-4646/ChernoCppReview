#include<iostream>
#include<tuple>
#include<string>

struct ShaderData
{
	std::string vertex_shader;
	std::string fragment_shader;
};


ShaderData pass_shader()
{
	ShaderData Shader;
	Shader.vertex_shader = "顶点着色器代码";
	Shader.fragment_shader = "片段着色器代码";
	return Shader;
}

int main()
{
	//auto [vertex_shader_code, fragment_shader_code] = pass_shader();  // C++17 structured binding
	auto shaders = pass_shader(); // C++14 compatible
	std::cout << "Vertex Shader Code: " << shaders.vertex_shader << std::endl;
	std::cout << "Fragment Shader Code: " << shaders.fragment_shader << std::endl;
	return 0;
}