#include <iostream>
#include "Rectangle.h"

int main() {
  Rectangle *rects[3];

  rects[0] = new Rectangle(1.0, 1.0);
  rects[1] = new Square(1.0);
  rects[2] = new Rectangle(1.0, 1.0);

  for (auto r : rects) {
    std::cout << r->getShapeName() << std::endl;
  }
}
