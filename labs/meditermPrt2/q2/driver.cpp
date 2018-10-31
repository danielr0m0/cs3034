#include <iostream>
#include <string>
#include "pomeranian.h"
#include "doberman.h"

int main()
{
    Doberman *fido = new Doberman("Fido",20800);
    fido->setAppetite(250);
    cout<< *fido<<endl;
    Doberman *ben = new Doberman("Ben",20800);
    ben->setAppetite(250);
    cout<< *ben<<endl;
    Pomeranian *p = new Pomeranian("Pom", 8000);
    cout<< *p <<endl;
    Pomeranian *pam = new Pomeranian("Pam", 8000);
    cout<< *pam <<endl;

    cout<<endl;

    cout<< "Fido + Ben "<<endl;
    Doberman bigFido = *fido+*ben;
    cout<<bigFido<<endl;
    cout<< "Pom + Pam"<<endl;
    Pomeranian bigP= *p+*pam;
    cout<<bigP<<endl;

    cout<<endl;
    cout<<"Doberman methods"<<endl;
    bigFido.bark();
    bigFido.attack();
    cout<<"eat() is called in the attack method for doberman"<<endl;
    cout<<bigFido<<endl;

    cout<<endl;
    cout<<"pomeranian methods"<<endl;
    bigP.bark();
    bigP.attack();
    cout<<bigP<<"\neat is called on Pom"<<endl;
    bigP.eat(400);
    cout<<bigP<<endl;
    return 0;
}
