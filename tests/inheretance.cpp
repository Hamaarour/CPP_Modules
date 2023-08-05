#include <iostream>

class A{
    protected  :
        int a;
public:
    A(): a(10) {
        std::cout << "A " << a << std::endl;
    }

};

class B: public A{

    public:
        B(): A(){
            std::cout << "B  " << " + " << a <<std::endl;
        }
};
int main(){
    B b;
    return 0;
}
