// g++ -std=c++11 hoge.cpp  とコンパイル

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

int main(){
  vector<int> v1(3);
  list<int> l1;
  v1[0] = 2;
  v1[1] = 1;
  v1[2] = 7;
  l1.push_back(5);
  l1.push_back(3);
  l1.push_back(9);

  for(int n: v1){
    cout << n << endl;
  }
  for(int n: l1){
    cout << n << endl;
  }
  
  return 0;
}
