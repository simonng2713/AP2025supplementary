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

  vector<int>::iterator vp = find(v1.begin(), v1.end(), 2);
  if (vp != v1.end()) {
    cout << "v found " << endl;
  }

  list<int>::iterator lp = find(l1.begin(), l1.end(), 2);
  if (lp != l1.end()) {
    cout << "l found " << endl;
  }

  return 0;
}
