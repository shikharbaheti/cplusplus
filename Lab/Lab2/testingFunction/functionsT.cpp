#include <iostream>
#include "functions.h"
using namespace std;

int countDigitOccurrences (int n, int digit) {
  int ones;
  int tens;
  int huns;
  int thous;
  int tthous;
  int numOfTimes;
  int number;

  ones = n % 10;
  number = n / 10;

  tens = number % 10;
  number = number / 10;

  huns = number % 10;
  number = number / 10;

  thous = number % 10;
  number = number / 10;

  tthous = number % 10;


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
