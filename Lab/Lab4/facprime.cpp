#include <iostream>
using namespace std;

bool isPrime (int number);

int main(){

long n;
cout << "Enter n >= 0: ";
cin >> n;

long result = 1;
int counter = 1;
int unFactorial;
bool isFactorial;
int largestPrime = 1;
bool isSeriouslyPrime;

// if ( n >= 0 ) {
// while (result < n) {
// result = result * (counter + 1);
// counter++;
//   }
//   if (result == n){
//   unFactorial = counter;
//   cout << "The number is " << unFactorial << "!" << endl;
//   }
//   // else if (n == 0) {
//   //   unFactorial = 0;
//   //   cout << unFactorial;
//   // }
//   else if (n == 1){
//     unFactorial = 0;
//   }
//   else if (n == 2){
//     unFactorial = 2;
//     cout << unFactorial;
//   }
//   else {
//     cout << "Not a factorial";
//   }
// }
// else {
//   cout << "Invalid input";
// }

// if ( n >= 0 ) {
while (result < n) {
result = result * (counter + 1);
counter++;
  }
 if (n == 1){
    isFactorial = true;
    unFactorial = 0;
  }
  else if (n == 2){
    isFactorial = true;
    unFactorial = 2;
  }
  else if (result == n){
   unFactorial = counter;
   isFactorial = true;
  } else {
  isFactorial = false;
  }
// if (isFactorial) {
// cout << "The number is " << unFactorial << "!" << endl;
// }
// else {
//   cout << "Not a factorial";
// }
// }
// else {
//  cout << "Invalid input";
// }




//cout << boolalpha << isPrime(unFactorial);

for (int i = unFactorial; i > 0; i--){
  if (isPrime(i) && i > largestPrime){
    largestPrime = i;
  }
}
if (largestPrime == 1 || largestPrime == 0) {
  isSeriouslyPrime = false;
} else {
  isSeriouslyPrime = true;
}

if ( n >= 0 ) {
  if (n == 1){
    cout << "The number is " << unFactorial << "!" << " and 1!" << " No prime factors";
    }
    else if (isFactorial && isSeriouslyPrime){
      cout << "The number is " << unFactorial << "!" << " The largest prime factor is " << largestPrime;
      }

      else if (isFactorial && isSeriouslyPrime == false){
        cout << "The number is " << unFactorial << "!" << " No prime factors";
        }
        else {
            cout << "Not a factorial";
            }
  }
    else {
  cout << "Invalid input";
 }

// cout << largestPrime;

// if (isFactorial && isSeriouslyPrime){
//   cout << "The number is " << unFactorial << "!" << " The largest prime factor is " << largestPrime;
// }
// else if (isFactorial && isSeriouslyPrime == false){
//   cout << "The number is " << unFactorial << "!" << "No prime factors";
// }
// else {
//   cout << "Not a factorial";
// }
// return 0;
// }

// PRIME TESTING

}

bool isPrime (int number) {
    bool is_prime = true;
    int denominator = 2;
    if (number <= 1) {
	  is_prime = false;
    }
    while (denominator < number/2 && is_prime) {
	// testing reminder of the division
	if (number % denominator == 0) {
	    // we found a divider!
	    is_prime = false;
	}
	denominator++;
    }
    return is_prime;
}
