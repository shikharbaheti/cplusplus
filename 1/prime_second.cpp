#include <iostream>

using namespace std;

int main() {
  int n;
  int divisor;
  int counter = 0;

  cin >> n;

  for (divisor = 1; divisor <=n; divisor ++) {
    if (n % divisor == 0) {
      counter ++;
    }
  }

  if (counter == 2) {
    cout << "It is prime." << endl;
  }
  else {
    cout << "It is not a prime." << endl;
  }
}
