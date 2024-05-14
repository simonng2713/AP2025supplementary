#include <iostream>
#include <list>
using namespace std;

int main(){
  list<int> i_list;
  for(auto i=0;i<10;i++) i_list.push_back(i);

  auto p = i_list.begin();
  while( p != i_list.end()){
    cout << *p << endl;
    p++; 
  }

  return 0;
}
