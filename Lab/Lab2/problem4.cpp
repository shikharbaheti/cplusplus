#include <iostream>

using namespace std;

int main(){

  float num;
  float num_higher;
  float num_lower;

  cin >> num;
  low = num;

if (num == 0){
  cout << "empty" << endl;
  exit(0);
}
else {
  while (num !=0) {
    if (num < low){
      low = num;
    }
    cin >> num;
  }

  }

cout << "min: " << low << endl;;
  return 0;
  }
