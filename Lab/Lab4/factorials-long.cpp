#include <iostream>

using std::cin;
using std::cout;
using std::endl;

long factorial(int a) {
    long result = 1;
    for (int j=2; j <= a; j++) {
        result = result * j;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    for (int i=0; i <=n; i++) {
        cout << "Factorial of " << i << " is " << factorial(i) << endl;
    }
    
    return 0;
}