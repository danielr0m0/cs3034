#ifndef CHILD
#define CHILD

#include <iostream> 
#include <vector>
using namespace std;

class Child{
    public:
        Child();
        void recite();
        void askPlace();
    private:
        vector<string> strings;

}

#endif
