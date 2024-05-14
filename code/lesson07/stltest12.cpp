#include <algorithm>
#include <iostream>
#include <list>
#include <vector>
using namespace std;
int main() {
  vector<int> v1(3), v2(3);
  list<int> l1, l2;
  v1[0] = 2;
  v1[1] = 1;
  v1[2] = 7;
  l1.push_back(5);
  l1.push_back(3);
  l1.push_back(9);

  copy(v1.begin(), v1.end(), v2.begin());
  l2.resize(l1.size());
  copy(l1.begin(), l1.end(), l2.begin());

  for (int i = 0; i < v1.size(); i++) {
    cout << v2[i] << endl;
  }
  for (list<int>::iterator p = l2.begin(); p != l2.end(); p++) {
    cout << *p << endl;
  }

  return 0;
}
