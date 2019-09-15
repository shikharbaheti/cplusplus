#include <iostream>
#include "functions.h"
using namespace std;

int countDigitOccurrences (int n, int digit) {
  int ones;
  int tens;
  int huns;
  int thous;
  int tthous;
  int numOfTimes = 0;
  int number;


//for(i = 0, i <= 9; )
//
// ones = n % 10;
// number = ones / 10;
//
// tens = number % 10;
// number = tens / 10;
//
// huns = number % 10;
// number = huns / 10;
//
// thous = number % 10;
// number = thous / 10;
//
// tthous = number % 10;
//number = tthous / 10;

// if (n > 1000) {
//   ones = n % 10;
//   number = n / 10;
//   tens = number % 10;
//   number = number / 10;
//   huns = number % 10;
//   number = number / 10;
//   thous = number % 10;
//   number = number / 10;
//   tthous = number;
// }
// else if (n >= 100){
//   ones = n % 10;
//   number = n / 10;
//   tens = number % 10;
//   number = number / 10;
//   huns = number;
// }
// else if (n >= 10){
//   ones = n % 10;
//   number = n / 10;
//   tens = number;
// }
// else {
//   ones = n;
// }

if (n < 10) {
  ones = n;
  //number = n / 10;                                          
}
else if (n < 100) {
  ones = n % 10;
  number = n / 10;
  tens = number;
  //number = number / 10;
}
else if (n < 1000) {
  ones = n % 10;
  number = n / 10;
  tens = number % 10;
  number = number / 10;
  huns = number;
  //number = number / 10;
}
//else (n < 10000) {
else {
  ones = n % 10;
  number = n / 10;
  tens = number % 10;
  number = number / 10;
  huns = number % 10;
  number = number / 10;
  thous = number % 10;
  number = number / 10;
  tthous = number;
}

if (ones == digit){
  numOfTimes++;
}
if (tens == digit){
  numOfTimes++;
}
if (huns == digit){
  numOfTimes++;
}
if (thous == digit){
  numOfTimes++;
}
if (tthous == digit){
  numOfTimes++;
}

return numOfTimes;
}
