#include <iostream>

class Rectangle {
private:
  double width_;
  double height_;

public:
  Rectangle(double w, double h) : width_(w), height_(h) {}
  virtual std::string getShapeName(){return "Rectangle";}
};

class Square: public Rectangle {
private:

public:
  Square(double w) : Rectangle(w, w) {}
  virtual std::string getShapeName(){return "Square";}
};

int main() {
    Rectangle r(1.0, 2.0);
    Square s(3.0);
    std::cout << r.getShapeName() << std::endl;
    std::cout << s.getShapeName() << std::endl;
}
