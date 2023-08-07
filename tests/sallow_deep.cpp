/*
*Shallow Copy:
* A shallow copy creates a new object that is a copy of the original object,
* but it does not duplicate the underlying data. Instead, the new object shares
* the same data as the original object. This can lead to problems if one of the
*  objects modifies the shared data, affecting the other object as well.
*/

#include <iostream>

/*class ShallowCopye {
public:
    int* data;

    ShallowCopye(int value) {
        data = new int(value);
    }

    // Destructor to release the dynamically allocated memory
    ~ShallowCopye() {
        delete data;
    }
};

int main() {
    ShallowCopye original(42);
    ShallowCopye shallowCopy = original; // Shallow copy

    // Modifying the data in the shallowCopy also affects the original
    *shallowCopy.data = 100;

    std::cout << *original.data << std::endl; // Output: 100
    

    return 0;
}
*/
class DeepCopyExample {
public:
    int* data;

    DeepCopyExample(int value) {
        data = new int(value);
    }

    // Deep copy constructor
    DeepCopyExample(const DeepCopyExample& other) {
        data = new int(*other.data);
    }

    // Destructor to release the dynamically allocated memory
    ~DeepCopyExample() {
        delete data;
    }
};

int main() {
    DeepCopyExample original(42);
    DeepCopyExample deepCopy = original; // Deep copy

    *deepCopy.data = 100;

    std::cout << *original.data << std::endl; // Output: 42
    std::cout << *deepCopy.data << std::endl; // Output: 100

    return 0;
}