#ifndef PERSON
#define PERSON

#include<string>
using namespace std;

class Person
{
    friend ostream &operator<<( ostream &, const Person &p);

protected:
    string fName;
    string LName;
    int month;
    int day;
    int year;
    char gender;
public:
    Person(string fN, string lN, int m, int d, int y, char g);
    ~Person() { }
};

#endif
