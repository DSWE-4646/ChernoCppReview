#include <string>
#include <fstream>
#include <iostream>
#include <optional>

// 传统方案：返回空字符串表示失败
std::optional<std::string> ReadFileAsString(const std::string& filepath) //1.添加Optional
{
    std::ifstream file(filepath);
    std::string result;
    if (!file.is_open()) {
        return {}; // 空字符串：无法区分“文件打开失败”和“文件本身为空”
    }
    // 读取文件内容到result...
    file>>result;
    file.close();
    return result;
}

int main() {
    //std::string data = ReadFileAsString("data.txt");
    auto data = ReadFileAsString("data.txt");
    //if (data.empty()) // 歧义：是文件打不开？还是文件本身是空的？
    if (data) //2.检验Optional包裹的有效性，也可以使用data.has_value()
    {
        std::cout << "data opened and is not empty" << std::endl; //
        std::cout << "The data is(*data):" << *data <<std::endl; //
        std::cout << "The data is(data.value()):" << data.value() << std::endl; //
        std::cout << "the data is(data.value_or)" << data.value_or("数据不存在") << std::endl; //带默认值的访问
    }
    else
    {
        std::cout << "文件打开失败" << std::endl;
    }
        
    //std::cout << data << std::endl;
    std::cin.get();
    return 0;
}

