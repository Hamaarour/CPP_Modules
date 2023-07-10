#include <iostream>


class test{
private:
    int _a;
public:
    test(int a){
        this->_a = a;
    };
    
    void print()
    {
        std::cout << _a << std::endl;
    };
};
int main()
{
    test t(5);
    t.print();
    return 0;
} 