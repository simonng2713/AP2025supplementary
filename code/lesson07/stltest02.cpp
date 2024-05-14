#include <iostream>
#include <vector>
using namespace std;
const int SIZE=9;
int main(){
  vector<vector<int>> v_vector(SIZE, vector<int>(SIZE) );
  for(int i=0;i<SIZE;i++){
    for(int j=0;j<SIZE;j++){
      v_vector[i][j] = (i+1)*(j+1);
    }
  }
  for(int i=0;i<SIZE;i++){
    for(int j=0;j<SIZE;j++){
      cout << v_vector[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
