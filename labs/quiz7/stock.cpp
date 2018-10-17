#include <iostream>
#include "stock.h"

using namespace std;

    Stock::Stock(int m, int d, int y, string n, double op, double cp): month(m), day(d), year(y), name(n),oprice(op),cprice(cp){};

    void Stock:: print(){
        cout << month<<"/"<<day<<"/"<<year<<":"<<name<<": \nopening price: $"<<oprice<<" , closing price: $"<<cprice<<endl;
    }

    string Stock::getCSVString() const{
        return  to_string(month)+","+to_string(day)+","+to_string(year)+","+name+","+to_string(oprice)+","+to_string(cprice)+"\n";

    }
