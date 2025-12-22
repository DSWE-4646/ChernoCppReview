#include <iostream>


#define PRINT(x) std::cout<< x<<std::endl
#define WAIT std::cin.get()


#if PRE_DEBUG  ==  1
	#define LOG(x) std::cout<< x<<std::endl
#else 
	#define LOG(x) 
#endif

int main() {
	LOG("This is a log");
	WAIT;
}
