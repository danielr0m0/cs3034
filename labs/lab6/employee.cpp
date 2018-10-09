#include <iostream>
#include "employee.h"
using namespace std;

Employee::Employee(){}

Employee::Employee(string idIn, string fnameIn, string lnameIn, double wageIn, double hoursIn)
            :id(idIn), fname(fnameIn), lname(lnameIn), wage(wageIn), hours(hoursIn) {}

Employee::Employee(string idIn, string fnameIn, string lnameIn, double wageIn)
            :id(idIn), fname(fnameIn), lname(lnameIn), wage(wageIn) {}

void Employee::setId(string in){
    id=in;
}
void Employee::setId(double in){
    id="E"+to_string(in);
}

string Employee::getId(){
    return id;
}
void Employee::setFname(string in){
    fname= in;
}

string Employee::getFname(){
    return fname;
}

void Employee::setLname(string in){
    lname=in;
}

string Employee::getLname(){
    return lname;
}

void Employee::setWage(double w){
    wage=w;
}

double Employee::getWage(){
    return wage;
}

void Employee::setHours(double h){
    hours=h;
}

double Employee::getHours(){
    return hours;
}

double Employee::calcPay(){
        return wage*hours;
}

string Employee::toString(){
    return "info";
}
