#include <iostream>
#include <cmath>

using namespace std;

double delta(double a, double b, double c) {
  return b * b - (4 * a * c);
}

int main(){
  double a, b, c;

  cout << "Please enter your integers in the form of a b c." << endl;
  cin >> a >> b >> c;
  cout << "delta is " << delta(a, b, c) << endl;

double d = delta(a, b, c);

  if (a == 0.0){
    if (b == 0.0){
      if (c == 0.0){
        cout << "There are infinite solutions." << endl;
      }
      else { // c is not zero.
        cout << "There is no solution." << endl;
      }
    }
    else { // a is zero but b is not zero.
      cout << "Solution is " << -c/b << endl;
    }
  }
  else {
    if (d == 0) { // only one solution
      cout << "Solution is " << - b / 2a << endl;
    }
    else if (d >= 0) { //two real numbers as solutions
      cout << "Solutions are " << (-b + sqrt(d))/(2*a) << " and " << (-b - sqrt(d))/(2*a) << endl;
    }
    else { // dealing with complex numbers
      double part1 = -b/(2*a);
      double part2 = sqrt(-d)/(2*a);
      cout << "Solutions are " << part1 << " + " << part2 << " i and " << part1 << " + " << -part2 << " i " << endl;
    }
  }

  return 0;
}
