#include <iostream>
#include<string>
#include<vector>
#include <cstdlib>
#include <time.h>
#include "mouse.h"
#include "cat.h"
#include "bird.h"

int main()
{
    srand(time(NULL));
    Cat *persian = new Cat("Persian",32123.5);
    vector<Prey *> preys;
    Bird *pidgey = new Bird("Pidgey", 1800);
    Bird *starly = new Bird("Starly", 2000);
    Mouse *rattata = new Mouse("Rattata", 3500);
    Mouse *marill = new Mouse("Marill", 8500);

    preys.push_back(pidgey);
    preys.push_back(starly);
    preys.push_back(rattata);
    preys.push_back(marill);

    cout<< *persian<<endl;

    for(Prey *p : preys)
    {
        p->call();
        
        double c = (double)rand()/RAND_MAX;
        if(c<.5)
            persian->predate(*p);
         else
            p->flee();
    }
    


    cout<< *persian<<endl;
    return 0;
}
