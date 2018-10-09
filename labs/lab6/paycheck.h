#ifndef PAYCHECK
#define PAYCHECK

#include <iostream> 
using namespace std;

//TODO getters and setters
class PayCheck{
    public:
        PayCheck();
        PayCheck(double amount, string eId, string fname, string lname);
        void print();
    private:
        double amount;
        string eId;
        string eFname;
        string eLname;
};

#endif
