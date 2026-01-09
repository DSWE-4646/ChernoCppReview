#include <iostream>
class Base
{
public:
    Base()
    {
        std::cout << "Base Constructor Called" << std::endl;
    }

    virtual ~Base()
    {
        std::cout << "Base Destructor Called" << std::endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        std::cout << "Derived Constructor Called" << std::endl;
    }
    
    ~Derived()
    {
        std::cout << "Derived Destructor Called" << std::endl;
    }
};

int main()
{
    std::cout<<"This is Base ==============================="<<std::endl;
    Base* base = new Base();
    delete base;

    std::cout<<"This is Derived ==============================="<<std::endl;
    Base* derived = new Derived();
    delete derived;

    std::cin.get();
    return 0;
}