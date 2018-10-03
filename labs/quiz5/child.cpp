#include <iostream>
#include "child.h"
using namespace std;

Child::Child(){};

void Child::recite(){
    cout << "I do not like green eggs and ham. \n"<<
            "I will not eat them, Sam I Am,"<<endl;
        
        for(int i = 0; i < (int) strings.size(); i++)
        {
            cout<<Child::strings[i]<<endl;
        }
        
        
};

void Child::askPlace(){
    string input;
    getline(cin,input);
    strings.push_back(input);
};
