#include <iostream>

using namespace std;

int main(){

  float num;
  int counter;
  float average;
  float sum = 0 ;

  cin >> num;

if (num == 0){
  cout << "empty" << endl;
  exit(0);
}
else {
  while (num !=0){
    sum = sum + num;
    cin >> num;
    counter++;
  }
}


//cout << sum << endl;
//cout << counter << endl;

average = sum / counter;

cout << "avg: " << average;

return 0;

}
