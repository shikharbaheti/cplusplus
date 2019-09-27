/*
BLAS Level 1 function definitions
*/

#include "blas.h"
#include <iostream>
using namespace std;
#include <cmath>

int amax(const double* x, const unsigned int len) {

    int maxOftheMax = 0;
    int indexThough;

if (len == 0) {
    indexThough = -1;
}
    else {
    for (unsigned int j = 0; j < len; j++){
        
            if (fabs(x[j]) >= maxOftheMax){
            maxOftheMax = fabs(x[j]);
            indexThough = j;
            }
        }
    }
    return indexThough;
}

double asum(const double* x, const unsigned int len) {
    double sum = 0;
    for (unsigned int i = 0; i < len; i++){
        sum = sum + fabs(x[i]);
    }
    return sum;
}

void axpy(const double a, const double* x, double* y, const unsigned int len) {
    for (unsigned int k; k < len; k++){
        y[k] = x[k] * a + y[k];
    }
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

void swap(double *x, double *y, const unsigned int len) {
    double temp[len];
    if (len != 0) {
        for (unsigned int k; k < len; k++){
            temp[k] = y[k];
            y[k] = x[k];
            x[k] = temp[k];
        }
    }
}