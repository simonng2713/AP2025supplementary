#include <iostream>
#include <map>
using namespace std;

int main(){
  map<string, int> score;
  score.insert(pair<string, int>("sueoka", 90));
  score.insert(pair<string, int>("nakanishi", 80));
  score.insert(pair<string, int>("naniwa", 60));
  score.insert(pair<string, int>("honda", 55));
  map<string, int>::iterator p;
  p = score.find("sueoka");
  if(p!=score.end()){
    cout << p->second << endl;
  }else{
    cout << "Key not in map" << endl;
  }
  return 0;
}
