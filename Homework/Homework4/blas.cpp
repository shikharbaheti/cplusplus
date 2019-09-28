/*
BLAS Level 1 function definitions
*/

#include "blas.h"
#include <iostream>
using namespace std;
#include <cmath>

int amax(const double* x, const unsigned int len) {
    if (len == 0) {
        return 0;
    }
    else {
        int maxOftheMax = 0;
            int indexThough = 0;
        for (unsigned int j = 0; j < len; j++){
                if (fabs(x[j]) > maxOftheMax){
                maxOftheMax = fabs(x[j]);
                indexThough = j;
                }
            }
        return indexThough;
    }
}

double asum(const double* x, const unsigned int len) {
    double sum = 0;
    for (unsigned int i = 0; i < len; i++){
        sum = sum + fabs(x[i]);
    }
    return sum;
}

void axpy(const double a, const double* x, double* y, const unsigned int len) {
        for (unsigned int k = 0; k < len; k++){
            y[k] =  (x[k] * a) + y[k];
            //cout << y[k] << ", ";
        }
}

void copy(const double *src, double *dest, const unsigned int len) {
    if (len != 0 && src != NULL && dest != NULL) {
        for (unsigned int i = 0; i < len; i++){
        dest[i] = src[i];
        }
    }
}

double dot(const double* x, const double* y, const unsigned int len) {
    double dotProduct;
    if (len != 0){
        for (unsigned int i = 0; i < len; i++){
            dotProduct = dotProduct + (x[i] * y[i]);
        }
    }

    return dotProduct;
}


double norm2(const double* x, const unsigned int len) {
    double normal = 0;
    double sum = 0;
    if (len != 0) {
        for (unsigned int i = 0; i < len; i++){
                sum = sum + pow(x[i], 2);
            }
            normal = sqrt(sum);
        return normal;
    }
    return 0;
}

void scale(const double a, double* x, const unsigned int len) {
    if (x != NULL){
        for (unsigned int i = 0; i < len; i++){
            x[i] = x[i] * a;
        }
    }
}

void swap(double *x, double *y, const unsigned int len) {
    const unsigned int lenZ = 39384;
    double temp[lenZ];
    if (len != 0) {
        for (unsigned int k; k < len; k++){
            temp[k] = y[k];
            y[k] = x[k];
            x[k] = temp[k];
        }
    }
}