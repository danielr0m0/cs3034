#include <iostream>
#include<string>

#include"person.h"

using namespace std;

Person::Person (string fN, string lN, int m, int d, int y, char g): fName(fN), LName(lN), month(m), day(d), year(y), gender(g){};

ostream &operator << (ostream &output, const Person &p){
    output << p.fName << " "<< p.LName << " DOB: "<< p.month<<"/"<< p.day<<"/"<< p.year;
    return output;
}
