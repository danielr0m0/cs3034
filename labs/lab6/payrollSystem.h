#ifndef PAYROLLSYSTEM
#define PAYROLLSYSTEM

#include <iostream> 
#include <vector>
#include"employee.h"
#include"paycheck.h"

using namespace std;

class PayrollSystem{
    public:
    PayrollSystem();
    PayrollSystem(string cName);
    void addEmployee(string eId, string eFname, string eLname, double wage, double hours);
    void addEmployee(string eId, string eFname, string eLname, double wage);
    int findById(string eId);
    void removeEmployee(string eId);
    void recordHours(string eId,double hours);
    void issuePayCheck();
    vector<Employee> getList();

    private:
    string cName;
    vector<Employee> list;
};

#endif
