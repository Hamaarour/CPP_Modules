#include <iostream>

class Fixed {
public:
    Fixed() : fixed_point_value(0) {}
    explicit Fixed(int value) : fixed_point_value(value << fractional_bits) {}
    Fixed(double value) : fixed_point_value(static_cast<int>(value * (1 << fractional_bits))) {}

    int getRawBits() const {
        return fixed_point_value;
    }

    double toDouble() const {
        return static_cast<double>(fixed_point_value) / (1 << fractional_bits);
    }

    // Non-static member function (min)
    Fixed& min(Fixed &other) {
        fixed_point_value = (fixed_point_value < other.fixed_point_value) ? fixed_point_value : other.fixed_point_value;
        return *this;
    }

    // Const member function (min)
    const Fixed& min(const Fixed &other) const {
        return (fixed_point_value < other.fixed_point_value) ? *this : other;
    }

    // Non-static member function (max)
    Fixed& max(Fixed &other) {
        fixed_point_value = (fixed_point_value > other.fixed_point_value) ? fixed_point_value : other.fixed_point_value;
        return *this;
    }

    // Const member function (max)
    const Fixed& max(const Fixed &other) const {
        return (fixed_point_value > other.fixed_point_value) ? *this : other;
    }

private:
    int fixed_point_value;
    static const int fractional_bits = 8; // For simplicity, let's use 8 fractional bits
};

int main() {
    Fixed a(2.5);
    Fixed b(1.75);

    // Using the non-const member functions (min and max)
    a.min(b);
    std::cout << "Min Non-Const: " << a.toDouble() << std::endl; // Output: Min Non-Const: 1.75

    a.max(b);
    std::cout << "Max Non-Const: " << a.toDouble() << std::endl; // Output: Max Non-Const: 2.5

    // Using the const member functions (min and max)
    const Fixed c(3.0);
    const Fixed d(4.25);

    Fixed minResult = c.min(d);
    std::cout << "Min Const: " << minResult.toDouble() << std::endl; // Output: Min Const: 3.0

    Fixed maxResult = c.max(d);
    std::cout << "Max Const: " << maxResult.toDouble() << std::endl; // Output: Max Const: 4.25

    return 0;
}