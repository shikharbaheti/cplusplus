#include <iostream>

using namespace std;

int main () {
  int number;
  int divider = 2;
  bool prime = true;

cin >> number;

while (divider < number) {
  if (number % divider == 0) {
    prime = false;
  }
  divider ++;
  }

if (prime) {
  cout << "Number is prime."<< '\n';
}
else {
  cout << "Number is not prime."<< '\n';
}

return 0;
}
