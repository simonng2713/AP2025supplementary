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
    Square s = Square(3.0);
    Rectangle r1 = s;   // sをコピーしている．
                        // その際Squareクラスで追加されているものが削除される（スライシング）
    Rectangle *r2 = &s; // sの参照を渡している
    
    std::cout << r1.getShapeName() << std::endl;  //Rectangleと表示される
    std::cout << r2->getShapeName() << std::endl; //Squareと表示される
}
