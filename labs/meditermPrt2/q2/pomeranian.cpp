#include <iostream>
#include "pomeranian.h"

void Pomeranian::bark(){
    cout<<"Yap Yap Yap"<<endl;
}

void Pomeranian::attack(){
    cout<<"deafens its victim with high pitched yapping"<<endl;
}

Pomeranian Pomeranian::operator+(const Pomeranian &dog){
    weight+=dog.weight;
    return *this;
}
