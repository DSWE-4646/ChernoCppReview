#include <iostream>
#include<thread>
#include<chrono>

int main() 
{
	auto start = std::chrono::high_resolution_clock::now();
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	auto duration = std::chrono::high_resolution_clock::now() - start;
	auto seconds = std::chrono::duration_cast<std::chrono::duration<float>>(duration);
	std::cout << "Time ist: " << seconds.count() << " seconds" << std::endl;
    return 0;
}
