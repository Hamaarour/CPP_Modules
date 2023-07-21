#include <iostream>
#include <cmath>

int main() {
    float num = 3.7;
    int roundedValue = roundf(num);
    std::cout << "Original number: " << num << std::endl;
    std::cout << "Rounded value: " << roundedValue << std::endl;
    return 0;
}