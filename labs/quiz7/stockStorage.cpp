#include <iostream>
#include <fstream>
#include <vector>

#include "stock.h"
#include "stockStorage.h"

using namespace std;

void StockStorage:: writeHardCodedKnights(){
    ofstream myFile;
	string filePath;
	string line;
	vector<Stock> stocks;

    Stock fstock (11,15,18, "first stock", 20.55, 21.55);
    Stock sstock (10,18,18, "second stock", 2.55, 2.55);
    Stock tstock (10,15,18, "third stock", 20, 21.55);

    stocks.push_back(fstock);
    stocks.push_back(sstock);
    stocks.push_back(tstock);

    cout<< "Enter full file path: ";
    cin >>filePath;
    myFile.open(filePath);

    for(Stock s : stocks){
        myFile << s.getCSVString();
    }
    myFile.close();
}

vector<Stock> StockStorage:: readFromFile(){
    ifstream myFile;
	string filePath;
	string line;
	vector<string> tokens;
		
	cout << "Enter full file path: " ;
	cin >> filePath;
	myFile.open(filePath);
	
	if(myFile.is_open()){
		while(getline(myFile, line)){
			
			tokens = tokenize(line);
			Stock s(stoi(tokens[0]), stoi(tokens[1]), stoi(tokens[2]), tokens[3], stod(tokens[4]), stod(tokens[5]));
			stocks.push_back(s);		
			if(myFile.eof()) cout << "reached eof" << endl;		
		}
		cout << stocks.size() << endl;
		
		myFile.close();		
	}
	else cout << "File open failed" << endl;
	cout << stocks.size() << endl;
	return stocks;
	
}

vector<string> StockStorage::tokenize(string in){
	// http://oopweb.com/CPP/Documents/CPPHOWTO/Volume/C++Programming-HOWTO-7.html
	vector<string> tokens;
	const string delimiter = ",";
	
	string::size_type lastPos = in.find_first_not_of(delimiter, 0);
    
    // Find first "non-delimiter".
    string::size_type pos     = in.find_first_of(delimiter, lastPos);

    while (string::npos != pos || string::npos != lastPos)
    {
        // Found a token, add it to the vector.
        tokens.push_back(in.substr(lastPos, pos - lastPos));
        // Skip delimiters.  Note the "not_of"
        lastPos = in.find_first_not_of(delimiter, pos);
        // Find next "non-delimiter"
        pos = in.find_first_of(delimiter, lastPos);
    }
    return tokens;
}
