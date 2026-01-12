#include <iostream>

int main()
{
    /* ----------------------Static Cast---------------------- */
    int32_t a = 5;
    double value = 7.5f;

    int32_t result = static_cast<int32_t>(value);
    double result2  = static_cast<double>(a);

    std::cout<< "static_cast<int32_t>(value) ->" << result << std::endl;
    std::cout<< "static_cast<double>(a) ->" << result2 << std::endl;
    
    /* ----------------------Reinterpret Cast---------------------- */
    std::cout<<"----------------------Reinterpret Cast----------------------"<<std::endl;

    //这里就是当作类型双关使用
    int32_t b = 5;
    int32_t* ptr = &b;
    int32_t result3 = reinterpret_cast<int32_t>(ptr);
    float value3 = *(reinterpret_cast<float*>(ptr));
    std::cout<< "reinterpret_cast<int32_t>(ptr) ->" << result3 << std::endl;
    std::cout<< "*(reinterpret_cast<float*>(ptr)) ->" << value3 << std::endl;

    /* ----------------------Dynamic Cast---------------------- */
    std::cout<<"----------------------Dynamic Cast----------------------"<<std::endl;
    class Base
    {
    public: //必须加public，否则dynamic_cast会报错, 因为dynamic_cast是通过vtable来判断的，而private的vtable是无法访问的
        virtual ~Base()
        {
            std::cout<<"Base Destructor"<<std::endl;
        }
        virtual void foo() { std::cout << "Base::foo()" << std::endl; }
    };

    class Derived : public Base
    {
        
    };

    class AnotherDerived : public Base
    {};

    Base* base = new Base();
    Derived* derived = new Derived();
    AnotherDerived* anotherDerived = new AnotherDerived();

    std::cout << "dynamic_cast<Derived*>(Base) ->" << dynamic_cast<Derived*>(base) << std::endl;
    std::cout << "dynamic_cast<AnotherDerived*>(Base) ->" << dynamic_cast<AnotherDerived*>(base) << std::endl;
    std::cout << "dynamic_cast<AnotherDerived*>(AnotherDerived) ->" << dynamic_cast<Derived*>(anotherDerived) << std::endl;

    base = derived;
    derived = dynamic_cast<Derived*>(base);
    std::cout << "dynamic_cast<Derived*>(base) ->" << derived << std::endl;
    
    delete base;
    //delete derived;
    delete anotherDerived;
    // 这里会抛出异常，因为base已经被释放了，所以derived也被释放了，所以这里会报错

    const int32_t c = 5;
    int32_t* ptr2 = const_cast<int32_t*>(&c);
    *ptr2 = 10;
    std::cout << "const int32_t c = 5; int32_t* ptr2 = const_cast<int32_t*>(&c); *ptr2 = 10;" << std::endl;

    std::cin.get();
    return 0;
}







