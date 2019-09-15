#include <iostream>
#include "functions.h"
using namespace std;

int countDigitOccurrences(int n, int digit){

  int howManyTimes = 0;
  int number;
  int one;
  int ten;
  int hundred;
  int thousand;
  int tthousand;

  one = n % 10;
  //number = n / 10;

  if (one == digit){
    howManyTimes ++;
  }

  ten = n % 100;
  //number = number / 10;

  if (ten == digit){
    howManyTimes ++;
  }

  hundred = n % 1000;
  //number = number / 10;

  if (hundred == digit){
    howManyTimes ++;
  }

  thousand = n % 10000;
  //number = number / 10;

  if (thousand == digit){
    howManyTimes ++;
  }

  tthousand = n % 100000;
  if (tthousand == digit){
    howManyTimes ++;
  }


  int num = 1934;

  int check = num % 10;
  cout << check << endl;
  int new_num = num / 10;

  check = new_num / 10;

  cout << check;



  // cout << "One " << one << endl;
  // cout <<  "Ten " << ten << endl;
  // cout <<  "Hundred " << hundred << endl;
  // cout <<  "Thousand " << thousand << endl;
  // cout <<  "TenThousand " << tthousand << endl;

  // return howManyTimes;
}
