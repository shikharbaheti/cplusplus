#include <iostream>
#include "functions.h"
using namespace std;

// int numDigits(int number){
//   int digits = 0;
//   while (number){
//     number = number / 10;
//     digits++;
//   }
//   return digits;
// }

int countDigitOccurrences(int n, int digit){
  int howManyTimes = 0;
  int number;
  int one;
  int oneN;
  int ten;
  int tenN;
  int hundred;
  int hundredN;
  int thousand;
  int thousandN;
  int tthousand;
  int tthousandN;

  one = n % 10;
  oneN = n / 10;
  if (one == digit){
    howManyTimes ++;
  }
  ten = oneN % 10;
  tenN = oneN / 10;
  if (ten == digit && oneN == 0){
  } else if (ten == digit){
    howManyTimes++;
  }
  hundred = tenN % 10;
  hundredN = tenN / 10;
  if (hundred == digit && tenN == 0){
  } else if (hundred == digit){
    howManyTimes++;
  }
  thousand = hundredN % 10;
  thousandN = hundredN / 10;
  if (thousand == digit && hundredN == 0){
  } else if (thousand == digit){
    howManyTimes++;
  }
  tthousand = thousandN;
  
  if (tthousand == digit && thousandN == 0){
  } else if (tthousand == digit){
    howManyTimes++;
  }

  return howManyTimes;
}
