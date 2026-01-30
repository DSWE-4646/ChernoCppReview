#include<iostream>
#include<chrono>

class Benchmark
{
public:
	Benchmark()
		: m_StartTimepoint(std::chrono::high_resolution_clock::now())
	{

	}

	~Benchmark()
	{
		Timer();
	}
private:
	std::chrono::time_point<std::chrono::high_resolution_clock> m_StartTimepoint;
	std::chrono::high_resolution_clock::time_point m_EndTimepoint;

	void Timer()
	{
		m_EndTimepoint = std::chrono::high_resolution_clock::now();
		auto start = std::chrono::time_point_cast<std::chrono::duration<float, std::micro>>(m_StartTimepoint);
		auto end = std::chrono::time_point_cast<std::chrono::duration<float, std::micro>>(m_EndTimepoint);
		auto duration = end - start;
		float us = duration.count();
		float ms = us / 1000.0f;
		std::cout << "耗时：" << us << "us (" << ms << "ms)" << std::endl;

	}
};

int main()
{
	long long value = 0;
	{
		Benchmark timer;
		for (int i = 0; i < 1000000; ++i) {
			value += 2;
		}
	}
	std::cout << "最终结果：" << value << std::endl;
	return 0;
}