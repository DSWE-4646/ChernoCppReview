#include <iostream>
#include<thread>
#include<chrono>
#include<atomic>

std::atomic<bool> IsFinished(false);

void DOWork(int& x)
{
	std::cout << "Thread name ist" << std::this_thread::get_id() << std::endl;
	std::cout << "x ist ein ref: " << x << std::endl;

	while (!IsFinished)
	{
		std::cout << "Doing Work..." << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));

	}
	
}

int main() 
{
	std::cout << "This PC has " << std::thread::hardware_concurrency() << " cores" << std::endl;
	std::cout << "Main thread name ist" << std::this_thread::get_id() << std::endl;

	int x = 5;
	std::thread worker(DOWork, std::ref(x)); //注意这里是函数名，不是函数调用

	std::cout << "按下回车退出..." << std::endl;
	std::cin.get();
	IsFinished = true;

	//worker.join();
	worker.detach(); // 子线程独立执行,退出main时销毁，未定义行为

	std::cout << "程序结束" << std::endl;
    return 0;
}
