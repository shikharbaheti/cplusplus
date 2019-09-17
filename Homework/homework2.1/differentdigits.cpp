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
  int repeatedDigits;

  int totalNums = (bNumber - aNumber) + 1;
  //cout << totalNums;



  if (aNumber > 0 && bNumber >= aNumber && bNumber <= 10000){
    for (int i = aNumber; i <= bNumber; i++) {
      for (int q = 0; q <= 9; q++) {
        //cout << i << " " << q << " " << countDigitOccurrences(i, q) << endl;
         if (countDigitOccurrences(i, q) > 2){
         // {
           repeatedDigits++;
           cout << repeatedDigits;
         }
         // cout << repeatedDigits << endl ;
        }
      }
    // totalNums = totalNums - (repeatedDigits/10);
    // cout << totalNums << endl;
    //cout << "There are " << howManyNums << " valid numbers between " << aNumber << " and " << bNumber << endl;
    }
  else {
    cout << "Invalid input" << endl;
  }
//
// if (aNumber > 0 && bNumber >= aNumber && bNumber <= 10000){
//   for (int q = 0; q <= 9; q++) {
//     for (int i = aNumber; i <= bNumber; i++){
//        if (countDigitOccurrences(i, q) < 2)
//        {
//
//        }
//       }
//     }
//   cout << counter << endl;
//   cout << "There are " << howManyNums << " valid numbers between " << aNumber << " and " << bNumber << endl;
//   }
// }
// else {
//   cout << "Invalid input" << endl;
// }

return 0;
}
