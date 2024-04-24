#include <iostream>

class Circle {
private:
  double radius;

public:
  ~Circle() { std::cout << "end" << std::endl; }
  void setRadius(double radius_) { radius = radius_; }
  double getRadius() { return radius; }
  double calcArea() { return radius * radius * 3.1415; }
};

int main() {

  {
    std::cout << "c1 is created." << std::endl;
    Circle c1;
    std::cout << "c1 is focusout." << std::endl;
    // c1のフォーカスはここまで
  }
  std::cout << "This program reaches end." << std::endl;
}