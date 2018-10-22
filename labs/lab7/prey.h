#ifndef PREY
#define PREY

#include "animal.h"

class Prey : public Animal{
    public: 
        Prey(string name, double weight):Animal(name,weight){}
        ~Prey(){}
        virtual void flee(){}
};

#endif
