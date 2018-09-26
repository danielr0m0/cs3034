#include <iostream> 
#include <vector>
using namespace std;

int main()
{
    vector<double> vDouble;
    double input;
    bool error = false;
    

    while(!error){
        cout << "input double greater or equale to 0"<<endl;
        cin  >> input;
        if(input >= 0 )
            vDouble.push_back(input);
        else
            error= true;
    } 
    
    cout << "-----------\n\n"<<endl;
    
    for(int i = 0; i <(int) vDouble.size(); i++)
        cout << vDouble[i] << endl;

    vDouble[(int)vDouble.size() -1]= 42.1;

    cout << "-----------\n\n"<<endl;
    
    for(int i = 0; i <(int) vDouble.size(); i++)
        cout << vDouble[i] << endl;

    return 0;
}
