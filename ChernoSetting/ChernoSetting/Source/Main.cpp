#include<iostream>
#include<array>
#include<string>

template<int N>
class Array
{
private:
	int m_Array[N];
public:
	int GetSize() const { return N; }
};


int main()
{
	Array<5> a;
	std::cout << "Array size: " << a.GetSize() << std::endl;
	return 0;
}