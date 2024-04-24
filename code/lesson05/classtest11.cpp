#include <iostream>

class Shape {
private:
  double x_;
  double y_;

protected:
  std::string color_;

public:
  Shape(double x, double y) : x_(x), y_(y), color_("red") {}
  double getXpos() { return x_; }
  double getYpos() { return y_; }
  void accessTest1() {
    std::cout << x_ << std::endl;     // ok
    std::cout << color_ << std::endl; // ok
  }
};

class Circle : public Shape {
private:
  double radius_;

public:
  Circle(double x, double y, double r) : Shape(x, y), radius_(r) {}
  double getR() { return radius_; }
  void accessTest2() {
    std::cout << x_ << std::endl;     // ng
    std::cout << color_ << std::endl; // ok
  }
};

int main() {}
