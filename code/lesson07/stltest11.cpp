#include <iostream>
#include <map>
using namespace std;

int main(){
  map<string, int> score;
  score.insert(pair<string, int>("sueoka", 90));
  score.insert(pair<string, int>("nakanishi", 80));
  score.insert(pair<string, int>("naniwa", 60));
  score.insert(pair<string, int>("honda", 55));

  cout << score["sueoka"] << endl;
  cout << score["oki"] << endl;

  return 0;
}
