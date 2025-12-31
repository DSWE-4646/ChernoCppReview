#include <iostream>
#include<thread>
#include<chrono>

struct Timer
{
	Timer()
	{
		start = std::chrono::high_resolution_clock::now();
	}
	~Timer()
	{
		auto duration = std::chrono::high_resolution_clock::now() - start;
		//auto seconds = std::chrono::duration_cast<std::chrono::duration<float, std::milli>>(duration);
		auto seconds = std::chrono::duration_cast<std::chrono::milliseconds>(duration);
		//std::cout << "Time ist: " << 1000 * seconds.count() << " mseconds" << std::endl;
		std::cout << "Time ist: " <<seconds.count() << " mseconds" << std::endl;
	}
private:
	std::chrono::time_point<std::chrono::high_resolution_clock> start;
};

void PrintHello()
{
	Timer timer;
	for (int i = 0; i < 100; i++)
	{
		//std::cout << "Hello World!\n";
		std::cout << "Hello World!" << std::endl;
	}
}

int main() 
{
	PrintHello();

    return 0;
}
