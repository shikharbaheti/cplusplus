#include <iostream>

using namespace std;

int main () {
  int number;
  int sum = 0;
  cin >> number;

  while (number != 0) {
    sum = sum + number;
    cin >> number;
  }

cout << sum << endl;
return 0;
}
