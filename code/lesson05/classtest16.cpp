// 実行時ポリモーフィズム
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

int main(int argc, char *argv[]) {

  if (argc < 2) {
    fprintf(stdout, "Usage: %s number\n", argv[0]);
    return 1;
  }
  int inputValue = atoi(argv[1]);

  Rectangle *r;

  if (inputValue % 2 == 0) {
    r = new Rectangle(1.0, 2.0);
  } else {
    r = new Square(3.0);
  }
  std::cout << r->getShapeName() << std::endl;
}
