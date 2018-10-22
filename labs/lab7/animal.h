#ifndef ANIMAL
#define ANIMAL

#include <string>
using namespace std;

class Animal{
protected:
    string name;
    double weight;
public:
    Animal(string name, double weight);
    ~Animal(){}
        void eat(double fWeight); //weight of the food item
        virtual void call()=0;
        string getName();
        double getWeight();
};

#endif
