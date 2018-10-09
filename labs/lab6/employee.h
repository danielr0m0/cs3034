#ifndef EMPLOYEE
#define EMPLOYEE

#include <iostream> 
using namespace std;

class Employee{
    public:
        Employee();
        Employee(string idIn, string fnameIn, string lnameIn, double wageIn, double hoursIn);
        Employee(string idIn, string fnameIn, string lnameIn, double wageIn);
        string toString();
        double calcPay();
        void setFname(string fnameIn);
        string getFname();
        void setLname(string lnameIn);
        string getLname();
        void setId(string idIn);
        string getId();
        void setId(double idIn);
        void setWage(double wageIn);
        double getWage();
        void setHours(double hoursIn);
        double getHours();

    private:
        string id;
        string fname;
        string lname;
        double wage;
        double hours;
};

#endif
