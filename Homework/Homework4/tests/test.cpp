#include <iostream>
#include <cmath>
using namespace std;

int const len = 3;
// double array1[len] = {2, 3, 4};
// double array2[len] = {5, 6, 7};
// double temp[len];
double src[len] = {1, 2, 3};
double dest[len] = {4, 5, 6};


// void swap(double *x, double *y, const unsigned int len) {
//     for (unsigned int k; k < len; k++){
//         temp[k] = y[k];
//         y[k] = x[k];
//         x[k] = temp[k];
//     }
// }

void copy(const double *src, double *dest, const unsigned int len) {
    for (unsigned int i = 0; i < len; i++){
        dest[i] = src[i];
    }
}

int main(){

    //swap(array1, array2, len);

    //copy(src, dest, len);

    // cout << "Array 1: " << endl;
    // for (int i = 0; i < len; i++){
    //     cout << array1[i];
    // }
    // cout << endl;

    // cout << "Array 2: " << endl;
    // for (int i = 0; i < len; i++){
    //     cout << array2[i];
    // }
    // cout << endl;

    // cout << "Temp: " << endl;
    // for (int i = 0; i < len; i++){
    //     cout << temp[i];
    // }
    // cout << endl;

    cout << "Source: " << endl;
    for (int i = 0; i < len; i++){
        cout << src[i];
    }
    cout << endl;

    cout << "Destination: " << endl;
    for (int i = 0; i < len; i++){
        cout << dest[i];
    }
    cout << endl;
}