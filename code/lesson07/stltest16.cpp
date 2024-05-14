// g++ -std=c++11 hoge.cpp  とコンパイル

#include <algorithm>
#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
  vector<int> v1(3);
  list<int> l1;
  v1[0] = 2;
  v1[1] = 1;
  v1[2] = 7;

  l1.push_back(5);
  l1.push_back(3);
  l1.push_back(9);

  for_each(v1.begin(), v1.end(), [](int n) { cout << n << endl; });
  for_each(l1.begin(), l1.end(), [](int n) { cout << n << endl; });

  return 0;
}