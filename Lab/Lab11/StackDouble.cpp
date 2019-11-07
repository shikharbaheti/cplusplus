#include <iostream>
#include <cmath>
#include "StackDouble.h"

void StackDouble::push(double element) {
    if (length == capacity) { // check if Array is full

    double* B = new double[capacity * 2];
    for (int i = 0; i < capacity; i++) {
    B[i] = A[i];
    }

    B[length] = element;
    capacity = capacity * 2;
    length = length + 1;
    delete[] A;
    A = B;
    }

    else {
        A[length] = element; 
        length = length + 1;
    }
}

double StackDouble::pop(){
    if (length == 0){
        return NAN;
    }
    else {
        length = length - 1;
        return A[length];
    }
}