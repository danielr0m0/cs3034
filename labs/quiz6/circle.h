#ifndef CIRCLE
#define CIRCLE

class Circle{
  public:
  Circle(double radiusIn);
  double getArea() const;
  bool operator== (const Circle &other);
  Circle operator+ (const Circle &other);
  Circle operator- (const Circle &other);
  Circle operator++(int);
  private:
  double radius;		
};
#endif
