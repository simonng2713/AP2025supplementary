#include <iostream>

class Rectangle {
private:
  double width_;
  double height_;

public:
  Rectangle(double w, double h) : width_(w), height_(h) {}
  virtual std::string getShapeName();
  double getArea(){return width_ * height_;}
};

class Square : public Rectangle {
private:
public:
  Square(double w) : Rectangle(w, w) {}
  virtual std::string getShapeName();
};