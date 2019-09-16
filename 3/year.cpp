#include <iostream>

using namespace std;

int main(){

  int month;
  int day;
  int year;

  cin >> month;
  cin >> day;
  cin >> year;

  void nextMonth(int month){

      if (month == 12){
        month = 1;
      }
      return month;
  }

  nextMonth(month);

  cout << month;

  return 0;
}

// PRINT THE NEXT DAY PROGRAM
