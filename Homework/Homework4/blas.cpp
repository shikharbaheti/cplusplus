/*
BLAS Level 1 function definitions
*/

#include "blas.h"
#include <iostream>
using namespace std;

int amax(const double* x, const unsigned int len) {

    int maxOftheMax = 0;

    for (unsigned int j = 0; j < len; j++){
        if (x[j] > maxOftheMax){
            maxOftheMax = x[j];
        }
    }

    return maxOftheMax;
}

double asum(const double* x, const unsigned int len) {
    return 0;
}

void axpy(const double a, const double* x, double* y, const unsigned int len) {
    
}

void copy(const double* src, double* dest, const unsigned int len) {
    
}

double dot(const double* x, const double* y, const unsigned int len) {
    return 0;
}

double norm2(const double* x, const unsigned int len) {
    return 0;
}

void scale(const double a, double* x, const unsigned int len) {
    
}

void swap(double* x, double* y, const unsigned int len) {
    
}