#include<iostream>
#include "cat.h"

using namespace std;

void Cat::call(){
    cout << "meow" <<endl;
}

void Cat::predate(Prey &prey){
    cout << name <<" pounces and devours "<< prey.getName()<<", who weighs "<<prey.getWeight()<<" grams"<<endl;
    eat(prey.getWeight());
}

ostream &operator << (ostream &output, const Cat &cat){
    output << cat.name << "is a cat weighing "<< cat.weight << " grams";
    return output;
}
