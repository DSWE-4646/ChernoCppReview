#include <iostream>

//饿汉式单例模式，线程安全，但不支持延迟初始化，程序启动时就创建实例
/*
class Singleton
{
	//私有化默认构造函数，防止外部实例化，等效于私有空实现，是推荐写法
	Singleton() = default;
public:

	//删除拷贝构造函数和赋值运算符，防止复制实例。移动构造函数此时被编译器隐式删除
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;

	//显式删除移动构造函数和赋值运算符，防止移动实例
	Singleton(const Singleton&&) = delete;
	Singleton& operator=(const Singleton&&) = delete;

	static const Singleton& Get()
	{
		return Instance;
	}

private:
	//类内声明静态唯一实例
	static Singleton Instance;
};

Singleton Singleton::Instance; //类外初始化,必须执行
*/

//懒汉式单例模式，支持延迟初始化，线程安全（C++11及以上标准）
class Singleton
{
	//私有化默认构造函数，防止外部实例化，等效于私有空实现，是推荐写法
	Singleton() = default;
public:

	//删除拷贝构造函数和赋值运算符，防止复制实例。移动构造函数此时被编译器隐式删除
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;

	static const Singleton& Get()
	{
		//局部静态变量，延迟初始化，线程安全
		static Singleton Instance;
		return Instance;
	}

	void PrintHello() const
	{
		std::cout << "Hello Singleton!" << std::endl;
	}

	//频繁使用的成员函数，可以封装一个静态调用接口，避免每次都要获取实例
	void TestPrintHello() const
	{
		Get().PrintHello();
	}
};