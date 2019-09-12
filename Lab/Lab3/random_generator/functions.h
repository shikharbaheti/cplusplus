#include <iostream>
using namespace std;

void randnum (int n) {
  double var;
  for (int i = 0; i < n; i++ ) {
    var = rand() % 1000 + 1;
    cout << var << " ";
  }
return;
}
