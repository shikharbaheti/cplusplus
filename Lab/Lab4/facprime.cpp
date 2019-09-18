#include <iostream>
using namespace std;

int main(){

long n;
cin >> n;

long result = 1;
int counter = 0;
int j = 2;

while (result < n) {
  result = result * (j + 1);
  cout << result << endl;
  counter++;
}

cout << counter;

}
