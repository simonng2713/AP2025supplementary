#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> i_vector;
  i_vector.push_back(5);
  i_vector.push_back(4);
  i_vector.push_back(3);
  i_vector.pop_back();
  if(!i_vector.empty()){
    for(int i=0;i<i_vector.size();i++){
      cout << i_vector[i] << endl;
    }
  }
  return 0;
}
