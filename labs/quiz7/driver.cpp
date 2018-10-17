#include <iostream>
#include <fstream>
#include <vector>
#include "stock.h"
#include "stockStorage.h"

using namespace std;


int main(){
	int choice;
	StockStorage storage;
	cout << "Enter 1 to write to file, 2 to read from file " << endl;
	cin >> choice;
	if(choice == 1) storage.writeHardCodedKnights();
	if(choice == 2) 
		for(Stock s: storage.readFromFile())
			s.print();
	return 0;
	
}

