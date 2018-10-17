#ifndef STOCK
#define STOCK
#include <string>
#include <vector>

using namespace std;

class Stock{
		
	public:	
        Stock(int month, int day, int year, string name, double oprice, double cprice);
        void print();
		string getCSVString() const;
		
	private:
		int month;
        int day;
        int year;
		string name;
		double oprice;
		double cprice;	
};

#endif
