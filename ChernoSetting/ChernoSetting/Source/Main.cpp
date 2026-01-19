#include <iostream>
#include <tuple>
#include <string>

std::tuple<std::string, int, std::string> WhatAmI()
{
    return std::make_tuple("SiberianSledCat", 24, "Computer Graphics");
}

int main()
{
    /* C++17 新特性，结构绑定，方便快捷 */
    auto [name, age, subject] = WhatAmI(); //C++17 Needed
    std::cout << name << " is " << age << " years old and studies " << subject << std::endl;

    /* 传统std::tuple 绑定，需要先声明tuple */
    std::tuple<std::string, int, std::string> StudentEin =  WhatAmI();
    std::cout << std::get<0>(StudentEin) << " is " << std::get<1>(StudentEin) << " years old and studies " << std::get<2>(StudentEin) << std::endl;

    /* 传统std::tie 绑定，需要先声明变量 */
    std::string name2;
    int age2;
    std::string subject2;
    std::tie(name2, age2, subject2) = WhatAmI();
    
    std::cin.get();
    return 0;
}







