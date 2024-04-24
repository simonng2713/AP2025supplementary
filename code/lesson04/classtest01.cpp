#include <iostream>

class Circle {
private:
  double radius;

public:
  Circle() { radius = 1.0; }
  void setRadius(double radius_) { radius = radius_; }
  double getRadius() { return radius; }
  double calcArea() { return radius * radius * 3.1415; }
};

int main() {
  Circle c1;
  // コンストラクタが呼ばれ，c1.radiusに1.0が代入されている

  std::cout << c1.getRadius() << std::endl;
  // 1が表示される．
}