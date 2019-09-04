#include <iostream>

using namespace std;

int main(){

  float num;
  float high;

  cin >> num;
  high = num;

if (num == 0){
  cout << "empty" << endl;
  exit(0);
}
else {
  while (num !=0) {
    if (num > high){
      high = num;
    }
    cin >> num;
  }

  }

cout << "max: " << high << endl;;
  return 0;
  }
