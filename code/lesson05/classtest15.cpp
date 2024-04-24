// is-a2
// g++ classtest16.cpp --std=c++11   
#include <iostream>

class Rectangle {
private:
  double width_;
  double height_;

public:
  Rectangle(double w, double h) : width_(w), height_(h) {}
  virtual std::string getShapeName() { return "Rectangle"; }
};

class Square : public Rectangle {
private:
public:
  Square(double w) : Rectangle(w, w) {}
  virtual std::string getShapeName() { return "Square"; }
};

int main() {
  Rectangle *rects[3];

  rects[0] = new Rectangle(1.0, 1.0);
  rects[1] = new Square(1.0);
  rects[2] = new Rectangle(1.0, 1.0);

  for (auto r : rects) {
    std::cout << r->getShapeName() << std::endl;
  }
}
