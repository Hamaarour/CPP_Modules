#ifndef DEF_ARME
#define DEF_ARME

#include <iostream>
#include <string>
 
class Arme 
{
    public:
        int id;
    Arme();
    Arme(int x);
    Arme(Arme const& armeACopier);
};
 
#endif