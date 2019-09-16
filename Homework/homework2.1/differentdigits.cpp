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
  int counter;
  bool valid;
  int numCounter;

  int totalNums = bNumber - aNumber;

// cout << countDigitOccurrences(111, 1);

  // if (aNumber > 0 && bNumber >= aNumber && bNumber <= 10000){
  //   for (int i = aNumber; i <= bNumber; i++){
  //     counter++;
  //     for (int q = 0; q <= 9; q++) {
  //        if (countDigitOccurrences(i, q) < 2)
  //        {
  //          i++;
  //        }
  //       }
  //     }
  //     cout << i;
  //   //cout << counter;
  //   cout << "There are " << howManyNums << " valid numbers between " << aNumber << " and " << bNumber << endl;
  //   }
  // else {
  //   cout << "Invalid input" << endl;
  // }
// cout << howManyNums;

if (aNumber > 0 && bNumber >= aNumber && bNumber <= 10000){
  for (int q = 0; q <= 9; q++) {
    for (int i = aNumber; i <= bNumber; i++){
       if (countDigitOccurrences(i, q) < 2)
       {

       }
      }
    }
  cout << counter << endl;
  cout << "There are " << howManyNums << " valid numbers between " << aNumber << " and " << bNumber << endl;
  }
}
else {
  cout << "Invalid input" << endl;
}

return 0;
}
