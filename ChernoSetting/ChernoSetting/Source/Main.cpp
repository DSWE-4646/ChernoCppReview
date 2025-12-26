#include <iostream>



int main()
{
    int a = 5;
	int b = 10;

    auto lambda1 = [=]() {
        //a = 7;
        std::cout << "Lambda1: a = " << a << ", b = " << b << std::endl;
		};

    lambda1();

    auto lambda2 = [&]() {
        a = 7;
        b = 12;
        std::cout << "Lambda2: a = " << a << ", b = " << b << std::endl;
        };
	lambda2();

    auto lambda3 = [a, &b]() mutable {
        a = 20;
        b = 25;
        std::cout << "Lambda3: a = " << a << ", b = " << b << std::endl;
		};
	lambda3(); 
    return 0;
}