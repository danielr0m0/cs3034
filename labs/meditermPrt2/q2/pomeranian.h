#ifndef POMERANIAN
#define POMERANIAN

#include "dog.h"


class Pomeranian: public Dog
{
public:
    Pomeranian(string n, double w): Dog(n,w) { };
    void bark();
    void attack();
    Pomeranian operator+ (const Pomeranian &other);
    ~Pomeranian() { }
};

#endif
