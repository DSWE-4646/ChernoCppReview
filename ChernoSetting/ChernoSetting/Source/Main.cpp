#include <string>
#include <iostream>
#include <variant>

int main()
{
    std::variant<int, std::string> data;
    data = 123;

    //按类型获取
    std::cout<< "By Type:" << std::get<int>(data) << std::endl;
    std::cout<< "Type Index is:" << data.index() << std::endl;
    data = "Hello World";
    std::cout << "By Type:" << std::get<std::string>(data) << std::endl;
    std::cout << "Type Index is:" << data.index() << std::endl;

    //按索引获取
    std::cout << "By Index:" << std::get<1>(data) << std::endl;

    //返回指向的指针，类型不匹配返回nullptr
    const std::string* ptr = std::get_if<std::string>(&data);
    if (ptr)
    {
        std::cout << "By Pointer:" << *ptr << std::endl;
    }

    
    
    std::cin.get();
    return 0;
}

