#include "animal.h"
#include<string>

Animal::Animal(string n, double w) :name(n), weight(w){};

void Animal::eat(double fWeight){
    weight +=fWeight;
};

string Animal::getName(){
    return name;
}

double Animal::getWeight(){
    return weight;
}
