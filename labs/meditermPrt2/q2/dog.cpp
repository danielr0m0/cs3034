#include<string>
#include<typeinfo>
#include<iostream>
#include "dog.h"

Dog::Dog(string n, double w): name(n), weight(w){};

string Dog::getName(){
    return name;
}

double Dog::getWeight(){
    return weight;
}

void Dog::eat(double amount){
    weight+=amount;
}

//type has an id in front of type need to trim the numbers infront by getting the starting possition of the first char
ostream &operator << (ostream &output, const Dog &dog){
    string type =  typeid(dog).name();
    string numbers= "0123456789";
    int n=type.find_first_not_of(numbers);
    type = type.substr(n);
    output << dog.name <<" is a "<< type <<" weighing "<< dog.weight << " grams";
    return output;
}
