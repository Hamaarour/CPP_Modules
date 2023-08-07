#include <iostream>

class Base
{
public:
     virtual ~Base() {
        std::cout << "Base destructor called" << std::endl;
    }
};

class Direved : public Base {
public:
     ~Direved() {
        std::cout << "Direved destructor called" << std::endl;
    }
};

int main()
{
    Base *c = new Base();
    Base *b = new Direved();

    delete c;
    delete b;
    
    return 0;
}