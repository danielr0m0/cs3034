#include <iostream>
#include <vector>
#include <string>

#include "employee.h"
#include "paycheck.h"
#include "payrollSystem.h"


using namespace std;

PayrollSystem::PayrollSystem(){};
PayrollSystem::PayrollSystem(string n):cName(n){}

void PayrollSystem:: addEmployee(string id, string fn, string ln, double w, double h){
    Employee e (id, fn,ln,w,h);
    list.push_back(e);
}
void PayrollSystem:: addEmployee(string id, string fn, string ln, double w){
    Employee e (id, fn,ln,w,0);
    list.push_back(e);
}
int PayrollSystem:: findById(string eId){
    
    for(int i = 0; i < (int) list.size(); i++)
    {
        if(((list.at(i)).getId().compare(eId)) == 0){
            return i;
        }
    } 
    return -1;
}
vector<Employee> PayrollSystem:: getList(){
    return list;
}

void PayrollSystem:: removeEmployee(string eId){
    list.erase(list.begin() +findById(eId));
}

//record the hours s/he worked during the current pay period
void PayrollSystem:: recordHours(string eId, double hours){
    int pos = findById(eId);
    Employee e = list.at(pos);
    e.setHours(hours);
    list.at(pos)= e;
}

void PayrollSystem:: issuePayCheck(){
    
    cout<<"Payroll for "<<cName<<":"<<endl;

    
    for(int i = 0; i < (int) list.size(); i++)
    {
        Employee e = list.at(i);
        PayCheck p (e.calcPay(),e.getId(),e.getFname(),e.getLname());
        p.print();
        e.setHours(0);
        list.at(i)=e;
    }
}
