#include<iostream>
#include<string>
#include<memory>

class String
{
private:
	char* m_Buffer;
	unsigned int m_Size;
public:
	String(const char* string)
	{
		m_Size = strlen(string);
		//m_Buffer = new char[m_Size + 1];
		m_Buffer = new char[m_Size];
		memcpy(m_Buffer, string, m_Size);
		//m_Buffer[m_Size] = 0;
	}
	friend std::ostream& operator<<(std::ostream& stream, const String& string);

	char& operator[](unsigned int index) 
	{
		return m_Buffer[index];
	}

	~String()
	{
		delete[] m_Buffer;
	}

	String(const String& other)
	{
		m_Size = other.m_Size;
		//m_Buffer = new char[m_Size + 1];
		m_Buffer = new char[m_Size];
		memcpy(m_Buffer, other.m_Buffer, m_Size);
		//m_Buffer[m_Size] = 0;
	}
};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
	stream << string.m_Buffer;
	return stream;
}

int main()
{
	String string = "Wagawaga"; 
	String string2 = string;

	string2[2] = 'k';

	std::cout << string << std::endl;
	std::cout << string2 << std::endl;
	
	std::cin.get();
}