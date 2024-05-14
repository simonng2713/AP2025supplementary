#include <iostream>
#include <list>
using namespace std;

int main(){
  list<int> i_list;
  for(int i=0;i<10;i++) i_list.push_back(i);

  list<int>::reverse_iterator p = i_list.rbegin();
  while( p != i_list.rend()){
    cout << *p << endl;
    p++; 
  }

  return 0;
}
