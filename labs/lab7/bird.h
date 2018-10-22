#ifndef BIRD
#define BIRD

#include <string>
#include "prey.h"


class Bird : public Prey
{
public:
    Bird(string name, double weight): Prey (name,weight) {}
    void call();
    void flee();
};
#endif
