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
    int i = 1;
    double *array = new double[10];
    for (i = 1; i < 11; i++)
    {
        array[i-1] = i;
    }
    i = 1;
    for (i = 1; i < 11; i++)
    {
        std::cout << array[i-1] << std::endl;
    }
    delete [] array;
} 