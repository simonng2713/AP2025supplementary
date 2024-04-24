#include <iostream>

class Complex {
	double re_;
    double im_;
public:
	Complex operator + (Complex obj) {
		return Complex(this->re_ + obj.re_, this->im_ + obj.im_);
	}

	Complex(double re, double im):re_(re), im_(im) { }
    double real(){return re_;}
    double im(){return im_;}
    
};

int main(){
    Complex c1(2.0, 0.0), c2(1.0, 1.0);
    std::cout << (c1 + c2).real() << " " ;
    std::cout << (c1 + c2).im() << std::endl;
}