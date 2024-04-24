#include <iostream>

void hoge(double d){
    std::cout << "double : " << d << std::endl;
}

void hoge(int i){
    std::cout << "int : " << i << std::endl;
}

void hoge(double d, int i){
    std::cout << "first double : " << d << std::endl;
    std::cout << "second int : " << i << std::endl;
}

int main(){
    hoge(1.0);
    hoge(10);
    hoge(2.0, 30);
}
