#include <iostream>
#include "circle.h"	

using namespace std;

int main(){
  Circle *c1 = new Circle(5.0);
  Circle *c2 = new Circle(4.7);
  Circle *c3 = new Circle(4.7);

  cout << "area of c1: " << c1->getArea() << " area of c2: " << c2->getArea() << " area of c3: "<<
    c3->getArea() << endl;
  cout << "c1 == c2? " << (*c1==*c2) << endl << "c2 == c3? " << (*c2 == *c3) << endl;
  Circle c4 = *c1 + *c2;  // have to put this on the stack; could copy it to the heap
  cout << "area of c4, created by adding c1 and c2: " << c4.getArea() << endl; 
  Circle c5 = *c1 - *c2;
  cout <<"area of c5, created by subtract c1 radius by c2 radius: "<< c5.getArea()<<endl;
  c5++;
  cout << "increase radius of c5: "<< c5.getArea()<<endl;
  return 0;
}
