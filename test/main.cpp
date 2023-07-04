#include <iostream>
#include <string>
#include "Arme.hpp"

int main()
{
    Arme *arme1 = new Arme();
    Arme *arme2 = new Arme(5);
    Arme *arme3 = new Arme(*arme2);


    std::cout << "1 " << arme1->id << std::endl;
    std::cout << "2 " << arme2->id << std::endl;
    std::cout << "3 " << arme3->id << std::endl;
    
    delete arme1;
    delete arme2;
    
  
    return 0;
}