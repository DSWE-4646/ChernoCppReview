#include<iostream>

void pass_shader(std::string& vertex_source, std::string& fragment_source)
{
	std::string vshader = "顶点着色器代码";
	std::string fshader = "片段着色器代码";
	
	vertex_source = vshader;
	fragment_source = fshader;
}

int main()
{
	std::string vertex_shader_code;
	std::string fragment_shader_code;
	pass_shader(vertex_shader_code, fragment_shader_code);
	std::cout << "Vertex Shader Code: " << vertex_shader_code << std::endl;
	std::cout << "Fragment Shader Code: " << fragment_shader_code << std::endl;
	return 0;
}