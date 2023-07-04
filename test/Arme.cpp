#include "Arme.hpp"
#include <iostream>
using namespace std;
 
Arme::Arme()
{
    std::cout <<"Default Constructor called "<< endl;
}
Arme::Arme(int x)
{
    std::cout <<"Parameterized Constructor called "<< endl;
    id = x;
}
Arme::Arme(Arme const& armeACopier) : id(armeACopier.id)
{
    std::cout <<"Copy Constructor called "<< endl;
}