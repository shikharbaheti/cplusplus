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
  // cout << "Number: " << n << endl;
  // cout << "One: " << one << endl;
  // cout << "Number after one: " << oneN << endl;
  ten = oneN % 10;
  tenN = oneN / 10;
  // cout << "Ten: " << ten << endl;
  // cout << "Number after ten: " << tenN << endl;
  if (ten == digit && oneN == 0){
  } else if (ten == digit){
    howManyTimes++;
  }
  hundred = tenN % 10;
  hundredN = tenN / 10;
  // cout << "Hundred: " << hundred << endl;
  // cout << "Number after hundred: " << hundredN << endl;
  if (hundred == digit && tenN == 0){
  } else if (hundred == digit){
    howManyTimes++;
  }
  thousand = hundredN % 10;
  thousandN = hundredN / 10;
  // cout << "Thousand: " << thousand << endl;
  // cout << "Number after thousand: " << thousandN << endl;
  if (thousand == digit && hundredN == 0){
  } else if (thousand == digit){
    howManyTimes++;
  }

  tthousand = thousandN;
  // cout << "Ten Thousand: " << tthousand << endl;
  if (tthousand == digit && thousandN == 0){
  } else if (tthousand == digit){
    howManyTimes++;
  }

  return howManyTimes;
}
