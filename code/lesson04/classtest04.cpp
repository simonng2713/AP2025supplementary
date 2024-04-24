#include <iostream>

class Circle1{
private:
    double radius;
public:
    double getRadius(){return radius;};
};

class Circle2{
private:
    double radius;
public:
    Circle2(double radius_){
        radius = radius_;
    }
    double getRadius(){return radius;}
};

int main(){
    Circle1 c1; //ok
    Circle2 c2(2.0); //ok
    Circle2 c3; //ng
}



