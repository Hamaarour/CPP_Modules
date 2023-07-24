#include <iostream>

class A{
    public:
        int a;
};

class B : public A{
    public:
        int b;
};

class C : public A{
    public:
        int c;
};

class D : public B, public C{
    public:
        int d;
};

int main(void)
{
    D d;
    d.a = 1;
    d.b = 2;
    d.c = 3;
    d.d = 4;
    std::cout << d.a << std::endl;
    std::cout << d.b << std::endl;
    std::cout << d.c << std::endl;
    std::cout << d.d << std::endl;
    return (0);
}