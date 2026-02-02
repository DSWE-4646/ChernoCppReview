#include<iostream>
#include<chrono>
#include<vector>

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
		std::cout << "ºÄÊ±£º" << us << "us (" << ms << "ms)" << std::endl;

	}
};

class Vector2D
{
public:
	float XPosition = 0.f;
	float YPosition = 0.f;
};

int main()
{
	const int count = 1000000;
	long long value = 0;
	{
		Benchmark timer;
		std::vector< std::shared_ptr<Vector2D> > TestSharedPtr;
		TestSharedPtr.reserve(count);
		for (int i = 0; i < count; ++i) {
			TestSharedPtr.emplace_back(std::make_shared<Vector2D>());
		}
		std::cout << "SharedPtr ";
	}

	{
		Benchmark timer;
		std::vector< std::unique_ptr<Vector2D> > TestUniquePtr;
		TestUniquePtr.reserve(count);
		for (int i = 0; i < count; ++i) {
			TestUniquePtr.emplace_back(std::make_unique<Vector2D>());
		}
		std::cout << "UniquePtr ";
	}

	{
		Benchmark timer;
		std::vector< std::shared_ptr<Vector2D> > TestSharedAndNewPtr;
		TestSharedAndNewPtr.reserve(count);
		for (int i = 0; i < count; ++i) {
			TestSharedAndNewPtr.emplace_back(std::shared_ptr<Vector2D>(new Vector2D()));
		}
		std::cout << "SharedPtr and New ";
	}

	return 0;
}