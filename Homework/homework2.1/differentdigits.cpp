#include <iostream>
#include "functions.h"
using namespace std;

int main(){

  int aNumber;
  int bNumber;
  int howManyNums;
  cout << "Enter numbers a <= b: ";
  cin >> aNumber;
  cin >> bNumber;

  int totalNums = bNumber - aNumber;

// cout << countDigitOccurrences(111, 1);

  if (aNumber > 0 && bNumber >= aNumber && bNumber <= 10000){
    for (int i = aNumber; i <= bNumber; i++){
      for (int q = 0; q <= 9; q++) {
         if (countDigitOccurrences(i, q) < 2)
         {
           howManyNums = howManyNums + i;
         }
        }
      }
    cout << "There are " << howManyNums << " valid numbers between " << aNumber << " and " << bNumber << endl;
    }
  else {
    cout << "Invalid input" << endl;
  }
// cout << howManyNums;

return 0;
  }
