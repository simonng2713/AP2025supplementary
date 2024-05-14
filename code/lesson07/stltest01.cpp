#include <iostream>
#include <vector>
using namespace std;

int main(){

  vector<int> i_vector;
  i_vector.push_back(5);
  i_vector.push_back(4);
  i_vector.push_back(3);

  for(int i=0;i<3;i++){
    cout << i_vector[i] << endl;
  }
  return 0;
}
