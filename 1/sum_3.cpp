#include <iostream>

using namespace std;

int main() {
  int number;
  int counter = 0;
  int counter_odd = 0;
  cin >> number;

  while (number != 0 ){
    if (number % 2 == 0) {
      counter ++;
    }
    else {
      counter_odd ++;
    }
    cin >> number;
  }
  cout << "Counter of the even numbers is " << counter << endl;
  cout << "Counter of the odd numbers is " << counter_odd << endl;
  return 0;
}


// Find if numbers in a list are odd or even.
