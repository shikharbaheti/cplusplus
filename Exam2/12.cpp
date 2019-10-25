#include <iostream>
using namespace std;

double f(double x, double y) {
    if (x >= y) {
        return (x+y)/2;
    }
    double p1 = f(x+2, y - 1);
    double p2 = f(x+1, y - 2);
    return f(p1, p2);
}

int main(){
    double d = 1;
    double c = 10;
    cout << f(d, c);
}