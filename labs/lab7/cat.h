#ifndef CAT
#define CAT

#include "predator.h"

class Cat :public Predator
{

friend ostream &operator<<( ostream &, const Cat &cat);

public:
    Cat(string name, double weight): Predator(name,weight){};
    ~Cat(){}
    void call();
    void predate(Prey &prey);
};

#endif

