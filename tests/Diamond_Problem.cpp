#include <iostream>

class A{
    public:
        int a;
};

class B : virtual public A{
    public:
        // in a
        int b;
};

class C : virtual public A{
    public:
        // int a
        int c;
};

class D : public B, public C{
    public:
        // int b
        //int c
        int d;
};

int main(void)
{
    D d;
    d.a = 1;
    d.b = 2;
    d.c = 3;
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