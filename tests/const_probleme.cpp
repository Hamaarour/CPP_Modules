#include <iostream>

// class MyClass {
// public:
//     int getRawBits() const; // Const member function
//     void setRawBits(int value); // Non-const member function
// };
// /*
// //const qualifier at the end. This indicates that getRawBits() 
// //is a const member function, meaning it guarantees not to modify
// //the state of the object it is called on.
// */
// int MyClass::getRawBits() const {
//     return 0;
// }

// void MyClass::setRawBits(int value)  {
//     // Do something
//     return;
// }

// void someFunction(const MyClass& obj) {
//     int x = obj.getRawBits(); // OK, calling const member function on const object
//     obj.setRawBits(10); // Error! Cannot call non-const member function on const object
// }

class cc{
    public: 
        const int x;
        cc(int a);
        cc();
        void pr(void);
};

cc::cc(int a):x(a)
    {
        std::cout << "hello Mr." << a << std::endl;
    }

cc::cc()
    {
        std::cout << "hello Mr." << std::endl;
    }


int main ()
{
    cc c;
    return 0;
}