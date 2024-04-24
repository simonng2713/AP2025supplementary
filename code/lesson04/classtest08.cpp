#include <iostream>

void hoge1(double d, int i) {
  std::cout << "first double : " << d << std::endl;
  std::cout << "second int : " << i << std::endl;
}

void hoge1(double d) { 
    hoge1(d, 10); 
}

void hoge2(double d, int i=10) {
  std::cout << "first double : " << d << std::endl;
  std::cout << "second int : " << i << std::endl;
}

int main() {
  hoge1(1.0);
  hoge1(2.0, 30);
  hoge2(2.0);
  hoge2(4.0, 60);
}
