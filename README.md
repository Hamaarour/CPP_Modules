# CPP_Modules
 These modules aim to acquaint us with the concept of Object-Oriented Programming, serving as the initial step in our C++ expedition.



## Namespaces

- In C++, a namespace is a way to group related identifiers (e.g. names of functions, variables, etc.) together and give them a separate identity. Namespaces are typically used to avoid name collisions, which can occur when two different parts of a program use the same identifier for different purposes.

Here's an example of how to use namespaces in C++:
```C++
#include <iostream>

// Declare a namespace called "my_namespace"
namespace my_namespace {
    // Declare a function called "foo" in the "my_namespace" namespace
    void foo() {
        std::cout << "Hello from my_namespace::foo()!" << std::endl;
    }
}

int main() {
    // Call the "foo" function from the "my_namespace" namespace
    my_namespace::foo();

    return 0;
}
```

- In this example, we define a function called foo inside the my_namespace namespace. To call this function from outside the namespace, we use the :: operator followed by the function name. This is known as "qualifying" the function name with the namespace.

You can also define multiple namespaces in the same program, and you can nest namespaces inside each other to create a hierarchy. For example:

```C++
namespace outer {
    namespace inner {
        void foo() {
            std::cout << "Hello from outer::inner::foo()!" << std::endl;
        }
    }
}
```

>To call the foo function in this example, you would use the following syntax:
```C++
outer::inner::foo();
```
- You can also use the using keyword to import identifiers from a namespace into the current scope, which allows you to use them without qualifying them with the namespace name. For example:
```C++
#include <iostream>

namespace my_namespace {
    void foo() {
        std::cout << "Hello from my_namespace::foo()!" << std::endl;
    }
}

int main() {
    // Import the "foo" function from the "my_namespace" namespace
    using my_namespace::foo;

    // Call the "foo" function without qualifying it with the namespace name
    foo();

    return 0;
}
```
- In this example, we use the using keyword to import the foo function from the my_namespace namespace, so we can call it directly without qualifying it with the namespace name.

## Standard input-output streams

- in C++, the stdio streams are a group of classes that provide input and output functionality for reading from and writing to files and other input/output devices. The stdio streams are part of the C++ standard library and are defined in the <iostream> header file.

The stdio streams include the following classes:

◦ `std::istream`: A class for input streams, which are used to read data from a file or other input source.

◦ `std::ostream`: A class for output streams, which are used to write data to a file or other output destination.

◦ `std::iostream`: A class that combines the functionality of `std::istream` and `std::ostream`, allowing you to read from and write to a file or other input/output device.

- The `stdio` streams use a concept called "stream buffer" to manage the flow of data between the stream and the underlying input/output device. The stream buffer is an abstract class that defines the interface for reading and writing data, and the `stdio` stream classes (`istream`, `ostream`, and `iostream`) are derived from the stream buffer class.

- The `stdio` stream classes also have constructors and destructors, which are special member functions that are called when an object of the class is created or destroyed. The constructors are used to initialize the object's data members, and the destructors are used to clean up any resources that the object may have allocated.

Here's an example of how to use the `std::cout` output stream to write to the console:

```C++
#include <iostream>

int main() {
    // Write a message to the console using the "<<" operator
    std::cout << "Hello, world!" << std::endl;

    return 0;
}
```
- In this example, we use the `<<` operator to write a message to the `std::cout` output stream, which sends the message to the console. The `std::endl` manipulator is used to insert a newline character at the end of the message.

## Class and Instances

<!-- ## Member attributes & functions -->
- A class is a user-defined type that represents a collection of data and functions (also known as methods) that operate on that data. A class definition specifies the data and functions that are associated with a class, but does not create any actual objects of the class.

- To create an object of a class, you can use the class name followed by parentheses (()). This is called creating an instance of the class, or simply an instance. For example:
    
 ```C++
#include <iostream>

class MyClass {
   // class data and functions go here
};

int main() {
   MyClass instance; // create an instance of MyClass
   return 0;
}
```
    
- The data and functions that are defined within a class are known as members of the class. The data members represent the state of an object, while the functions (methods) represent the behavior of an object.

For example, consider the following class definition:
```C++
class Person {
   std::string name;
   int age;
public:
   void setName(std::string n) { name = n; }
   void setAge(int a) { age = a; }
   std::string getName() { return name; }
   int getAge() { return age; }
};
```
- This class defines a `Person` type, which has two data members: `name` and `age`. It also has four methods: `setName`, `setAge`, `getName`, and `getAge`, which allow you to set and get the values of the `name` and `age` data members.
- To create an instance of the `Person` class and use its methods, you can do the following:
    ```C++
    int main() {
   Person p;
   p.setName("Alice");
   p.setAge(30);
   std::cout << p.getName() << " is " << p.getAge() << " years old." << std::endl;
   return 0;
    }
    ```
    > This will output the following to the console:
    ```C++
    Alice is 30 years old.
    ```
 
- In C++, you can also define a class using a struct, which is similar to a class but with all members defaulting to public access (we are not suppossed to work it struct in this module, but still good to know about struct in OOP). For example:
    
    ```C++
    struct MyStruct {
   // struct data and functions go here
    };
    ```
- The main difference between a class and a struct is the default accessibility of their members. In a class, the members are private by default, while in a struct they are public by default.
    
## This pointer
- In C++, the this pointer is a special pointer that holds the address of the current object. It is automatically defined and passed to class methods when they are called, and it can be used to refer to the object itself within the method.

- The this pointer is typically used to distinguish between a class data member and a local variable with the same name, or to pass the object as an argument to a member function.

Here is an example of how to use the this pointer in a class method:
```C++
#include <iostream>

class MyClass {
   int x;
public:
   MyClass(int x) : x(x) {}
   void printX() {
      std::cout << this->x << std::endl; // prints the value of the x data member
   }
};

int main() {
   MyClass obj(5);
   obj.printX(); // outputs 5
   return 0;
}
```
- In this example, the `MyClass` class has a single data member `x` and a method `printX`that prints the value of `x` to the console. The `printX` method uses the `this` pointer to access the `x` data member of the object, rather than a local variable named `x`.

You can also use the `this` pointer to pass the object as an argument to another member function. For example:

```C++
#include <iostream>

class MyClass {
   int x;
public:
   MyClass(int x) : x(x) {}
   void setX(int x) { this->x = x; }
   void printX() {
      std::cout << x << std::endl; // prints the value of the x data member
   }
};

int main() {
   MyClass obj(5);
   obj.setX(10);
   obj.printX(); // outputs 10
   return 0;
}
```
- In this example, the setX method sets the value of the x data member using the this pointer. The printX method then prints the updated value of x.

- It's important to note that the this pointer is only available within the body of a non-static member function. It is not available within the body of a static member function, or outside the class.
    
## Initialization list

- the initialization list is a feature that allows you to specify the initial values for the member variables of a class when you create an object of that class. It is typically used in the constructor of the class.
Here is an example of a class with a constructor that uses an initialization list:
```C++
class Point
{
private:
    int x;
    int y;

public:
    Point(int x, int y) : x(x), y(y)
    {
        // Body of the constructor
    }
};
```
    
    
- In the above example, the constructor of the `Point` class has two parameters, `x` and `y`, which correspond to the member variables of the same name. The initialization list appears after the colon (`:`) and specifies the initial values for the member variables.

Using an initialization list has several benefits:
    
- 1- Improved performance: Initializing member variables using the initialization list is generally more efficient than assigning values to them in the body of the constructor. This is because the initialization list is executed before the constructor's body, so the member variables are initialized directly rather than being assigned values later on.
    
- 2- Better control over member initialization: The initialization list allows you to specify the order in which member variables are initialized, which can be important if one member variable depends on the value of another.
- 3- Ability to initialize const and reference members: The initialization list is the only way to initialize const and reference member variables. These types of variables cannot be assigned values after they are declared, so they must be initialized in the initialization list.
- 4- Ability to call base class constructors: The initialization list can also be used to call base class constructors and pass arguments to them. This allows you to initialize base class members before the derived class constructor is executed.
## The difference between the two classes is the way they initialize the name and age members


The difference between the two classes is the way they initialize the name and age members. The first class uses the initializer list syntax, while the second class uses the member initializer syntax.

Initializer list syntax

The initializer list syntax is a more concise way to initialize members. It is also more efficient, as it allows the compiler to optimize the code. The initializer list syntax is used in the first class:
```
class Human {
private:
  std::string name;
  int age;

public:
  Human(const std::string& name, int age) : name{name}, age{age} {}
};
```
The initializer list syntax consists of a comma-separated list of initializers. Each initializer is a pair of the member name and the value to initialize it with. In the case of the Human class, the initializer list is name{name}, age{age}. This tells the compiler to initialize the name member with the value of the name parameter, and to initialize the age member with the value of the age parameter.

Member initializer syntax

The member initializer syntax is a more verbose way to initialize members. It is also less efficient, as it does not allow the compiler to optimize the code. The member initializer syntax is used in the second class:

```class Human {
private:
  std::string name;
  int age;

public:
  Human(const std::string& name, int age) {
    this->name = name;
    this->age = age;
  }
};
```

The member initializer syntax consists of a colon followed by the member name and the value to initialize it with. In the case of the Human class, the member initializers are this->name = name and this->age = age. This tells the compiler to initialize the name member with the value of the name parameter, and to initialize the age member with the value of the age parameter.

In general, the initializer list syntax is preferred over the member initializer syntax. However, the member initializer syntax can be used if you need to initialize members that are not passed as parameters to the constructor.



#####
> **Note**
> It is important to note that the initialization list must always come before the body of the                      constructor. If you try to initialize the member variables in the body of the constructor, the              compiler will give an error.

    
## Benifits of using Setters and Getters!
-In object-oriented programming (OOP), setter and getter functions, also known as "accessor" methods, are used to manage the value of an object's private data members. Setter functions, are used to set the value of a private data member, while getter functions, also called "accessor methods," are used to retrieve the value of a private data member.

Using setters and getters has several benefits:

- Encapsulation: Setters and getters allow you to hide the implementation details of a class from other objects and control how the class' data is accessed and modified. This is known as encapsulation.

- Data validation: Setter functions can be used to perform data validation, ensuring that only valid data is assigned to an object's data members. For example, a setter function for a person's age might only allow ages greater than zero to be set.

- Flexibility: Using setters and getters allows you to change the implementation of a class without affecting the code that uses it. For example, you could change the way an object's data is stored without affecting the code that sets or retrieves the data.

- Code reusability: Setters and getters can be used in multiple classes, which allows you to reuse the same accessor and mutator code in different parts of your program.

Overall, setters and getters are useful tools for implementing encapsulation and data hiding in C++ and other object-oriented programming languages. They allow you to control how objects' data is accessed and modified, which can make your code more robust, flexible, and maintainable.

##  New and delete

- Malloc() and free() are not specific to C++ and can be used in C++ programs just as they can be used in C programs. However, C++ provides alternative ways to allocate and deallocate memory that may be more convenient and safer to use in some cases.
- One difference between malloc() and free() and the C++ alternatives is that malloc() and free() operate on raw memory, while the C++ alternatives often provide additional functionality, such as constructors and destructors for objects.
- In C++, you can use the `new` and `delete` operators to dynamically allocate and deallocate memory for objects. These operators call constructors and destructors for the objects as needed, which can make it easier to manage the lifetime of objects and avoid memory leaks.

For example, to dynamically allocate memory for an object in C++, you can use the `new` operator like this:
```C++
#include <iostream>

class MyClass
{
public:
    MyClass()
    {
        std::cout << "Constructor called" << std::endl;
    }

    ~MyClass()
    {
        std::cout << "Destructor called" << std::endl;
    }
};

int main()
{
    MyClass* p = new MyClass;
    delete p;
    return 0;
}
```
- This code will output "Constructor called" when the object is created and "Destructor called" when it is deleted.

## Stack vs heap memory

In C++, the stack and the heap are two regions of memory where data can be stored and accessed during the execution of a program.
- The stack is a region of memory that is used to store local variables and function call data. When a function is called, a block of memory is reserved on the stack for the function's local variables and any temporary data that the function needs. When the function returns, this block of memory is freed and the stack pointer is adjusted accordingly.
- The heap is a region of memory that is dynamically allocated at runtime and is not automatically deallocated when a function returns. Objects and data that are stored on the heap are usually accessed via pointers, and it is the responsibility of the programmer to deallocate the memory when it is no longer needed.

There are several key differences between the stack and the heap:

  - Lifetime: The lifetime of an object on the stack is limited to the duration of the function in which it is declared. Objects on the heap have a longer lifetime and are typically deallocated when they are no longer needed or when the program terminates.

  - Access: Objects on the stack are accessed directly, while objects on the heap are accessed through pointers.

  - Allocation: Memory on the stack is automatically allocated and deallocated by the system, while memory on the heap must be dynamically allocated and deallocated by the program.

  - Speed: Accessing and manipulating data on the stack is generally faster than accessing and manipulating data on the heap, because the stack is managed by the system and the memory is contiguous. The heap, on the other hand, is managed by the program and may contain fragments of unused memory.
  
## Reference vs dereference
In C++, references and pointers are both used to refer to the memory address of a variable, but they have some key differences that you should be aware of.
 ### References
 - A reference in C++ is a way to refer to the memory address of a variable without using a pointer. You can create a reference by using the `&` operator to get the address of a variable, and then using the `&` operator again to create a reference to that address.
 
 Here is an example of how to create a reference in C++:
 ```C++
int x = 5;
int&y = x;
 ```
 
 - In this example, the `y` reference is created to refer to the memory address of the `x` variable. That means any changes made to the `y` reference will be reflected in the `x` variable, because they both refer to the same memory address.
 - References are often used as function parameters to pass variables by reference, rather than by value. This allows you to modify the original variable within the function, rather than creating a copy of the variable and modifying the copy.
 
 Here is an example of a function that uses a reference parameter:
 ```C++
 void increment(int& number) {
  number++;
    }
 ```

In this example, the `increment()` function takes a reference to an integer as a parameter, When the function is called, it increments the value of the integer by 1. Because the parameter is a reference, any changes made to the parameter within the function are reflected in the original variable.

### Pointers
 A pointer in C++ is a variable that stores the memory address of another variable.
 - You can create a pointer by using the `*` operator to declare a pointer variable, and the using the `&` operator to get the addresss of a variable.
 
 Here is an example of how to create a pointer in C++:
 
 ```C++
 int x = 5;
 int *p = &x;
 ```
 In this example, the `p` pointer is created to store the memory address of the `x` variable. You can use the dereference operator `*` to access the value stored at the memory address pointed to - by the pointer.
 - Pointers are often used to dynamically allocate memory on the heap, using the `neew` and `delete` operators. They are also often used to pass variables by reference, similar to references.
 
 Here is an example of a function that uses a pointer parameter:
 ```C++
 void   increment(int   *number)
    (*number)++;
 ```
 In this example the `increment()` function takes a pointer to an integer as a parameter. When the function is called, it increments the value of the integer by 1 using the dereference operator `*`.
 
 ### Key Differences
 
 There are many differences between references and pointers that you should be aware of:
    - References must be initialized when they are created, and they cannot be changed to refer to a different memory address after they are created. Pointers, on the other hand, ca be initialized later and can be changed to refer to a different memory address using the assignement operator `=`.
    - References are generally easier to use and less error-prone than pointers, because you do not have to worry about allocating and deallocating memory or about the possibility of a null pointer. Pointers, on the other hand, require more careful management and can be a source of bugs if they are not used correctly.
    - References are safer to use than pointers, because they cannot be null a. Pointers, on the other hand, can be null and can be changed to refer to a different memory address, which can lead to bugs if the pointer is not properly initialized or if the pointer is not checked for null before it is derefenced.
    - References are often more efficient than pointers, because they do not require the extra level of indirection involved in derefencing a pointer. However, this difference in efficiency is usually small and is not usually a significant factor in most programs.
    - References cannot be used to refer to an array of elements, because an array decays into a pointer to it's first element when it is passed as an argument to a function. Pointers, on the other hand, can be used to refer to an array of elements or to perform pointer arithmetic.
    
    In general, you should use references when you want to pass a variable by reference or when you want to refer to an object without using a pointer. You should use pointers when you need to dynamically allocate memory on the heap or when you need to perform pointer arithmetic.

## Lifetime and Scope

In C++, the lifetime of a variable or object refers to the period of time during which the variable or object exists in memory. The lifetime of a variable or object can be affected by the storage duration and the scope of the variable or object.


### Storage Duration
 The storage duration of a variable or object determines how long the variable or object persists in memory. There are three storage durations in C++, `static`, `automatic`, `dynamic`.
 ### Static storage duration : 
 Variables and objects with static storage duration are created at the begining of the program and persist until the end of the program. They are also initialized before main is called.
 
 You can create a variable with a static storage duration by using the `static` keyword:
 ```C++
 static int x = 5;
 ```
 
 In this example, the `x` variable is created with static storage duration and is initialized to 5. The `x` variable will persist in memory for the entire lifetime of the program.
 
 ### Automatic Storage Duration :
 Variables and objects with automatic storage duration are created when they are encountered in the program and are destroyed when they go out of scope. Automatic storage duration is the default storage duration for variables and objects in C++.
 
 You can create a variable with automatic storage duration by simply declaring the variable without using the `static` keyword:
 ```C++
 int x = 5;
 ```
 
 In this example, the `x` variable is created with automatic storage duration and is initialized to 5. The `x` variable will be created when it is encountered in the program and will be destroyed when it goes out of scope.
 
 ### Dynamic Storage Duration :
 
 Variables and objects with dynamic storage duration are created at runtime using the `new` operator and are destroyed using the `delete` operator
 
 You can create a variable with dynamic storage duration by using the `new` operator:
 ```C++
 int *p = new int;
 *p = 5;
 ```
 
In this example, the `p` pointer is created with dynamic storage duration and is initialized to point to a dynamically allocated integer with the value 5. The dynamically allocated integer will persist in memory until it is deallocated using the `delete` operator. 

### Scope

The scope of a variable or object determines where the variable or object is visible in the program. There are three types of scope in C++ : `global`, `local` and `class`
    - Global scope : Variables and objects with global scope are visible throughout the entire program. You can create a global variable or object by declaring it outside of any function of class.
    - Local scope: Variables and objects with local scope are visible only within the block of code in which they are defined. You can create a local variable or object by declaring it within a function or block of code.
    - Class scope: Variables and objects with class scope are visible only within the class in which they are defined. You can create a class vairbale or object by declaring it within the class definition.

### In Short

1- Objects not created with new have automatic lifetime (created in the stack as you say, but that is an implementation technique chosen by most compilers), they are automatically freed once they go out of scope.

2- The lifetime of objects created with new (created in the heap, again as an implementation technique of most compilers), need to be managed by the programmer. Notice that deleting is NOT setting the pointer to NULL, it should happen before. The simple rule is:

Each new must be matched with one an only one delete
each new[] (creation of dynamic arrays) must be matched with one an only one delete[]

p.s: matched here concerns one-vs-one occurrence in the program's runtime, 
not necessarily in the code itself (you have control over when and where to delete any newed object).

## function pointer 
A function pointer in C++ is a variable that stores the address of a function. This allows you to call the function indirectly, by calling the function pointer instead of the function name.

Function pointers can be used for a variety of purposes, including:

Passing functions as arguments to other functions. This is called callback. For example, you can pass a function pointer to a sorting function, so that the sorting function can call the function pointer to perform some custom sorting logic.
Creating menus or dialog boxes with multiple options. Each option can be represented by a function pointer, so that when the user selects an option, the corresponding function pointer is called.
Implementing polymorphism. Polymorphism is the ability of an object to behave differently depending on its type. Function pointers can be used to implement polymorphism by storing the address of the function that should be called for a particular object.
Here is an example of a function pointer in C++:
```c++
int (*my_function_pointer)(int, int);

int add_numbers(int a, int b) {
  return a + b;
}

int main() {
  my_function_pointer = add_numbers;
  int result = my_function_pointer(10, 20);
  std::cout << result << std::endl;
  return 0;
}
```
In this example, the function pointer my_function_pointer is declared to store the address of a function that takes two integers as arguments and returns an integer. The function add_numbers is assigned to the function pointer my_function_pointer. In the main function, the function pointer my_function_pointer is called with the arguments 10 and 20. The result of the function call is printed to the console.

Function pointers can be a powerful tool for C++ programmers. They can be used to achieve a variety of programming goals, such as passing functions as arguments to other functions, creating menus or dialog boxes with multiple options, and implementing polymorphism
 
 ## member function pointer, Function pointer
 The difference between the two statements is that the first statement creates a member function pointer, while the second statement creates a normal function pointer.

A member function pointer is a pointer to a member function of a class. It is used to call member functions of an object indirectly. A normal function pointer is a pointer to a regular function. It is used to call regular functions indirectly.

In your example, you are creating an array of pointers to member functions of the Harl class. Therefore, you need to use the Harl::*p syntax to create member function pointers. If you use the void (*p[4])(void) syntax, you will create an array of normal function pointers, which will not be able to call member functions of the Harl class.