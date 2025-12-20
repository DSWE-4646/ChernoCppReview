#include<iostream>
#include<array>
#include<string>

template<typename T, int N>
class Array
{
private:
	T m_Array[N];
public:
	int GetSize() const { return N; }
};


int main()
{
	Array<std::string, 5> a;
	std::cout << "Array size: " << a.GetSize() << std::endl;
	return 0;
}