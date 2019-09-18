#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int factorial(int a) {
    int result = 1;
    for (int j=2; j <= a; j++) {
        result = result * j;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
        cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}
