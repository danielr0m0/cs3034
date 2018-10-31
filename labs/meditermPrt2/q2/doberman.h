#ifndef DOBERMAN
#define DOBERMAN

#include "dog.h"


class Doberman : public Dog
{
private:
    double appetite;
public:
    Doberman (string n, double w): Dog(n,w){};
    double getAppetite();
    void setAppetite(double d);
    void bark();
    void attack();
    Doberman operator+ (const Doberman &other);
    ~Doberman () { }
};

#endif
