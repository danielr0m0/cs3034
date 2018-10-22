#ifndef MOUSE
#define MOUSE

#include "prey.h"

class Mouse : public Prey
{
public:
    Mouse(string name, double weight):Prey (name,weight) {}
    ~Mouse(){}
    void call();
    void flee();
};
#endif
