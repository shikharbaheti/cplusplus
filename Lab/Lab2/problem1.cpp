#include <iostream>

using namespace std;

int main() {
  int num;
  int lower = 0;

cin >> num;

while (num != 0 ){
    if (num < lower) {
      num = lower;
      cin >> num;
    }
    else if (num > lower){

    }
  }

cout << "The lowest number is: " << lower << endl;

return 0;

}
