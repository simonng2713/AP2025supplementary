#include <iostream>

class Circle {
private:
    double radius;

public:
    Circle() { radius = 1.0; }
    Circle(double radius_) { radius = radius_; }

    double getRadius() { return radius; }
};

int main() {
  Circle c1;       //デフォルトコンストラクタが呼び出される
  Circle c2(2.0);  //引数があるコンストラクタが呼ばれる

  std::cout << c1.getRadius() << std::endl;
  std::cout << c2.getRadius() << std::endl;
}
