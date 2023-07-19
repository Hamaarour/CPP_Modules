#include <string>
#include <iostream>
double square(const int x) {
    x = 10;
  return x;
}

int main ()
{
   
    double k = square(5);

    std::cout << k << std::endl;
}