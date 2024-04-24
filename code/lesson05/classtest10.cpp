#include <iostream>

class Shape {
private:
  double x_;
  double y_;

public:
  Shape(double x, double y) : x_(x), y_(y) {}
  double getXpos() { return x_; }
  double getYpos() { return y_; }
};

class Circle : public Shape {
private:
  double radius_;

public:
  Circle(double x, double y, double r) : Shape(x, y), radius_(r) {}
  double getR() { return radius_; }
};

int main() {
    Circle c1(1.2, 3.4, 5.6);
    std::cout << c1.getXpos() << std::endl;
    std::cout << c1.getYpos() << std::endl;
    std::cout << c1.getR() << std::endl;
}
