// initilizer 
// g++ initialize.cpp --std=c++11   
#include <iostream>

class Rectangle {
private:
  double width_;
  double height_;

public:
  Rectangle(double w, double h) : width_(w), height_(h) {}
  virtual std::string getShapeName(){return "Rectangle";}
  double getWidth() { return width_; }
};

class Square: public Rectangle {
private:

public:
  Square(double w) : Rectangle(w, w) {}
  virtual std::string getShapeName(){return "Square";}
};

int main() {
    Rectangle r1(1.0, 2.0);
    Rectangle r2{2.0, 3.0};
    Rectangle r3 = {3.0, 4.0};
    Rectangle r4 = Rectangle(4.0, 5.0);
    Rectangle r5 = Rectangle{5.0, 6.0};

    std::cout << r1.getWidth() << std::endl;
    std::cout << r2.getWidth() << std::endl;
    std::cout << r3.getWidth() << std::endl;
    std::cout << r4.getWidth() << std::endl;
    std::cout << r5.getWidth() << std::endl;
}
