#include <iostream>
#include <cmath>
#include "StackDouble.h"

void StackDouble::push(StackDouble& s, double element) {
    if (s.length == s.capacity) { // check if Array is full

    double* B = new double[s.capacity * 2];
    for (int i = 0; i < s.capacity; i++) {
    B[i] = s.A[i];
    }

    B[s.length] = element;
    s.capacity = s.capacity * 2;
    s.length = s.length + 1;
    delete[] s.A;
    s.A = B;
    }

    else {
        s.A[s.length] = element; 
        s.length = s.length + 1;
    }
}

double StackDouble::pop(StackDouble& s){
    if (s.length == 0){
        return NAN;
    }
    else {
        s.length = s.length - 1;
        return s.A[s.length];
    }
}