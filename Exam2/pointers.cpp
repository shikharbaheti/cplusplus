#include <iostream>
using namespace std;


int main(){
    int var = 8;
    int* ptr = &var;
    *ptr = var * 3;
    cout << var;
}