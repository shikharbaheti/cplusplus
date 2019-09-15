#include <iostream>
using namespace std;



int main() {
  float number1 = 0;
  float number2 = 0;
  int size = 0;
  int tempWave = 1;
  int wave = 1;

  cin >> size;
  cin >> number1;

  if (size == 1) {
    cout << size;
  } else {
  for (int i=1; i < size; i++) {
    cin >> number2;
    if (number2 > number1){
        tempWave++;
        if (tempWave > wave) {
        wave = tempWave;
        }
    } else {
        tempWave=1;
      }
    number1 = number2;
  }
  cout << endl;
  cout << wave << endl;
  return 0;
 }
}
