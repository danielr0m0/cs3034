
#include <iostream>
#include <math.h>
#include "circle.h"

using namespace std;

Circle::Circle(double radiusIn) :radius(radiusIn) {}
  double Circle::getArea() const{return 3.14 *          pow(radius,2);}
  bool Circle::operator== (const Circle &other) {
	if(abs(other.radius - radius) < 0.0001)	return   true; 
	else return false;
  }

Circle Circle::operator+(const Circle &other){
	double combinedArea = 3.14 * pow(radius, 2) +   	other.getArea();
	double newRadius = sqrt(combinedArea/3.14); 	
	return Circle(newRadius);
}

Circle Circle::operator-(const Circle &other){
    if(other.radius<radius)
	    radius = radius - other.radius;
	return Circle(radius);
}
Circle Circle::operator++(int){
	radius++;
    return *this;
}

