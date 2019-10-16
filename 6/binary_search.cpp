#include <iostream>
#include <stdlib.h>
using namespace std;

int binary_search(int *array, int n, int value){
    int start = 0;
    int end = n-1;
    int middle;

    while (start < end){
        middle = (start + end)/2;
        if (array[middle] == value){
            return middle;
        }
        else if (array[middle] < value) {
            start = middle + 1;
        }
        else {
            end = middle - 1;
        }
    }
}


