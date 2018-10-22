#ifndef  PREDATOR
#define PREDATOR
#include<string>
#include "animal.h"
#include "prey.h"

class Predator : public Animal {
    public: 
        Predator(string name, double weight): Animal(name, weight){};
        virtual void predate(Prey &prey)=0;
};

#endif
