#include <iostream>

using namespace std;

class Circle {
private:
  double radius;

public:
  Circle(double radius_) : radius(radius_) {}
  double getRadius() { return radius; }
  void setRadius(double radius_) { radius = radius_; }
};

void callByPointer(Circle *c, double *r) {
  cout << "example of call by pointer" << endl;
  (*c).setRadius(*r);
  cout << c->getRadius() << endl;
}

void callByReference(Circle &c, double &r) {
  cout << "example of call by reference" << endl;
  c.setRadius(r);
  cout << c.getRadius() << endl;
}

int main() {

  Circle c1(1.0);
double r= 2.0;
  callByPointer(&c1, &r);
  r= 3.0;
  callByReference(c1, r);
}