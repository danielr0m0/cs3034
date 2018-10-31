#include <iostream>
#include "doberman.h"

double Doberman::getAppetite(){
    return appetite;
}

void Doberman::setAppetite(double d){
    appetite = d;
}

void Doberman::bark(){
    cout<< "Humf Humf Humf" <<endl;
}

void Doberman::attack(){
    cout<< getName() <<" rips its victim to shreds"<< endl;
    eat(appetite);
}

Doberman Doberman::operator+(const Doberman &other){
    weight+=other.weight;
    return *this;
}
