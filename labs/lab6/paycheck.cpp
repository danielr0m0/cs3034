#include <iostream>
#include "paycheck.h"

using namespace std;

PayCheck::PayCheck(){};
PayCheck::PayCheck(double a, string id, string f, string l)
        :amount(a), eId(id), eFname(f), eLname(l){};
    //TODO getters and setters


void PayCheck::print(){
    cout<< "Paycheck for $" << amount << " issued to " << eFname <<" "<< eLname << ",employee #"<<eId<<endl;
}
