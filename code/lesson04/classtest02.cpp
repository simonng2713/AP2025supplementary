#include <iostream>

class Circle {
private:
  double radius;
  double area;
  void calcArea(double radius_) { area = radius_ * radius_ * 3.1415; }

public:
  Circle() {
    radius = 1.0;
    calcArea(radius);
  }
  double getRadius() { return radius; }
  double getArea() { return area; }
};

int main() {
  Circle c1;
  // c1.radiusとc1.areaに値が入れられている．

  std::cout << c1.getRadius() << std::endl;
  std::cout << c1.getArea() << std::endl;
}
