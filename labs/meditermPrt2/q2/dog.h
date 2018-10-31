#ifndef DOG
#define DOG

#include <string>
using namespace std;


class Dog
{
    friend ostream &operator<<( ostream &, const Dog &dog);

protected:
    string name;
    double weight;
public:
    Dog(string name, double weight);
    ~Dog() { }
    string getName();
    double getWeight();
    void eat(double amount);
    virtual void bark()=0;
    virtual void attack()=0;
    Dog& operator+ (const Dog &other);

};

#endif
