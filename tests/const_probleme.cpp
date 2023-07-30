#include <iostream>

class Fixed {
public:
    Fixed(double value) : fixed_point_value(value) {}

    // Overloading the addition operator '+'
    Fixed  operator+(const Fixed &src) const {
        return Fixed(this->fixed_point_value + src.fixed_point_value);
    }

    // Getter method to access the fixed_point_value
    double getValue() const {
        return fixed_point_value;
    }

private:
    double fixed_point_value;
};

int main() {
    const Fixed a(3.14);
    const Fixed b(2.71);

    // Using the overloaded addition operator
    Fixed c = a + b;

    std::cout << "a: " << a.getValue() << std::endl; // Output: a: 3.14
    std::cout << "b: " << b.getValue() << std::endl; // Output: b: 2.71
    std::cout << "c: " << c.getValue() << std::endl; // Output: c: 5.85

    return 0;
}