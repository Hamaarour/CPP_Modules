## Operator overload

Operator overloading enables you to write function members that enable the basic operators to be applied to class objects (source: Beginning C++). To do this, you write a function that redefines each operator that you want to use with your class

Groups operators in C++

    -> Arithmetic operators
    -> Assignment operators
    -> Comparison operators
    -> Logical operators
    -> Bitwise operators

Operator overloading allows you to define or change the behaviour of an operator in your program. Operators are essentially just functions

C++ gives you full control on operator overloading, however this can lead to a bad use of the language. Only use operator overloading when it makes perfect sense

The overload must be related to the natural semantics of the operator. There are not many cases with operator overload. Make sure there is a good use case for it, otherwise it's easy to make stupid mistakes with it

### what does const mean in c++ in different places


The const keyword in C++ can be used in different places in a function declaration to indicate that the function is constant, or that one or more of the function's parameters are constant.

Declaring a constant function: When the const keyword is used after the function's return type, it indicates that the function is constant. This means that the function cannot modify the state of the object on which it is called. For example, the following code declares a constant function named get_pi():
```c++
const double get_pi() {
  return PI;
}
```

Declaring constant parameters: When the const keyword is used before a parameter's type, it indicates that the parameter is constant. This means that the parameter cannot be modified by the function. For example, the following code declares a function named square() that takes a constant integer parameter named x:

```c++
double square(const int x) {
  return x * x;
}
```

Declaring a constant reference parameter: When the const keyword is used before a parameter's type, and the parameter is also preceded by an ampersand (&), it indicates that the parameter is a constant reference. This means that the parameter cannot be modified by the function, and it also means that the function cannot take ownership of the object that the parameter refers to. For example, the following code declares a function named print_pi() that takes a constant reference to a double as a parameter:

```c++
void print_pi(const double& pi) {
  std::cout << pi << std::endl;
}
```

Here are some of the benefits of using const in C++ functions:

It can help to prevent errors by making it clear that a function cannot modify the state of an object.
It can improve the performance of code by preventing unnecessary changes to objects.
It can make code more readable and maintainable by making it easier to understand the flow of control.