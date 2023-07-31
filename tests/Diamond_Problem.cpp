#include <iostream>

class A{
    public:
        int a;
        A(){
            std::cout << "A constructor called" << std::endl;
            a = 0;
        }
};

class B : virtual public A{
    public:
        // in a
        int b;
        B(){
            std::cout << "B constructor called" << std::endl;
            a = 1;
        }
};

class C : virtual public A{
    public:
        // int a
        int c;
        C(){
            std::cout << "C constructor called" << std::endl;
            a = 2;
        }
};

class D : public B, public C{
    public:
        // int b
        //int c
        int d;
        D(){
            std::cout << "D constructor called" << std::endl;
            a = 3;
        }
};

int main(void)
{
    D d;
   
    d.d = 4;
    std::cout << "a "<<d.a << std::endl;
    std::cout << "b "<<d.b << std::endl;
    std::cout << "c "<<d.c << std::endl;
    std::cout << "d "<<d.d << std::endl;
    return (0);
}
/*
the virtual keyword when classes Father and Mother inherit 
the Person class. This is usually called “virtual inheritance,
" which guarantees that only a single instance of the inherited
 class (in this case, the Person class) is passed on.
*/