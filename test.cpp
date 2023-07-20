#include <string>
#include <iostream>
class Hello{
  public:
    Hello(){
      std::cout << *this << std::endl;
    }
};

int main ()
{
   Hello h;
}