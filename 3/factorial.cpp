#include <iostream>

using namespace std;

int factorial(int i) {
  int result = 1;
  for (int j=2; j <= i; j++){
    result = result * j;
  }
  return result;
}

int main() {

  int n;
  do {

  cout << "Please enter that is n>=0. " ;
  cin >> n;
    } while (n < 0);

    for (int i = 0; i <= n; i++){
      cout << "Factorial of " << i << " is " << factorial(i) << endl;
    }
}
