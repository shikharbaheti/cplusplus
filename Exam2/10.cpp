#include <iostream>
using namespace std ;

int f1 (int , int &) ;
int f2 (int &) ;
int main () {
int a = 2;
int b = 9;
int c = f1(a,b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c;
    }
int f1 (int r , int & s ) {
r *= 3;
s /= 4;
int temp = r + f2 ( s ) ;
return temp ;
}
int f2 (int & p ) {
p = 12;
return p ;
}
