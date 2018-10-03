#include <iostream>
#include "child.h"
using namespace std;


void Child::recite(){
    cout << "I do not like green eggs and ham. \n"<<
            "I will not eat them, Sam I Am,"<<endl;
        
        for(int i = 0; i < strings.size; i++)
        {
            cout<<strings[i]<<endl;
        }
        
        
};
void Child::askPlace(){
    string input;
    getline(cin,input);
    strings.push_back(input);
};
