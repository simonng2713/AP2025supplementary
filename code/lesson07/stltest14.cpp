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

  sort(v1.begin(), v1.end());
  l1.sort();
  for (int i = 0; i < v1.size(); i++) {
    cout << v1[i] << endl;
  }
  for (list<int>::iterator p = l1.begin(); p != l1.end(); p++) {
    cout << *p << endl;
  }

  return 0;
}
