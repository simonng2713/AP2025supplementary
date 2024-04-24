#include <iostream>

class Circle{
private:
    double radius;
   
public:
    void setRadius(double radius_){
        radius = radius_;
    }
    double getRadius(){
        return radius;
    }
    double calcArea(){
        return radius*radius*3.1415;
    }
    double calcCircumference(){
        return 2.0*radius*3.1415;
    }
};


int main() {
  // Circleのインスタンスを生成
  Circle c1, c2;
  //動的にインスタンスを生成
  Circle *c3 = new Circle;

  c1.setRadius(1.0);
  c2.setRadius(2.0);
  c3->setRadius(3.0); // c3がポインターなので，-> を使う

  std::cout << c1.getRadius() << "," << c1.calcArea() << std::endl;
}
