#include <iostream>
#include <vector>
#include "child.h"
 
using namespace std;

int main()
{
    Child child;

    int repeat =6;
    for(int i = 0; i < repeat; i++)
    {
        child.askPlace();
        child.recite();
    }
    
    

    return 0;
}
