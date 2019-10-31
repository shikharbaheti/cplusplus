#include "Vect.h"
#include <cstdlib>
#include <iostream>
using namespace std;

Vect vect_construct(unsigned int n, int val){ // 1
    Vect vectore;
    vectore.capacity = n*2;
    vectore.size = n;
    vectore.arr = new int [vectore.size];
    for (int i = 0; i < n; i ++){
        vectore.arr[i] = val;
    }
    return vectore;
}

unsigned int vect_size(const Vect &v){ // 2
    return v.size;
}

unsigned int vect_capacity(const Vect &v){ // 3
    return v.capacity;
}

bool vect_empty(const Vect &v){ // 4
   if (v.size == 0){
       return true;
   }
   else {
       return false;
   }
}

void vect_resize(Vect &v, unsigned int n){ // 5
    cout << "N is: " << n << endl;
    if (n < v.size){
        v.capacity = n;
        v.size = n;
    }
    if (n > v.size) {
        int* test2 = new int [n];
        for (int i = 0; i < n; i++){
            test2[i] = v.arr[i];
        }
        delete [] v.arr;
        v.arr = test2;
        v.capacity = n;  
    }
}

int& vect_at(Vect &v, unsigned int idx){ // 6
    return v.arr[idx];
}

void vect_erase(Vect &v, unsigned int idx){ // 7 
    if (idx >= 0 && idx < v.capacity){
        for (int i = idx; i < v.capacity; i++){
        v.arr[i] = v.arr[i+1];
        }
         v.size = v.size - 1;
    }
    else {  
        exit(1);
    }
    
}

// void vect_push_back(Vect &v, int val){ // 8
//     cout << "SIZE BEFORE: " << v.size << endl;
//     cout << "CAPACITY BEFORE: " << v.capacity << endl;
//     for (int i = 0; i < v.capacity; i++){
//         cout << i << ": " << v.arr[i] << " ";
//         cout << endl;
//     }
//     if (v.size + 1 <= v.capacity){
//         v.arr[v.size] = val;
//         v.size = v.size + 1;
//     }
//     else if (v.size + 1 > v.capacity){
//                 cout << "Had to resize the array" << endl;
//                 v.capacity = v.capacity * 2;
//                 v.size = v.size + 1;
//                 int* test2 = new int [v.capacity];
//                 cout << "__ PRINTING TEST2s ARRAY __" << endl;
//                 for (int i = 0; i < v.capacity; i++) { // RESIZE THIS THING
//                     test2[i] = v.arr[i];
//                     cout << i << ": " << test2[i] << " ";
//                     cout << endl;
//                 }
//                 test2[v.size] = val;
//                 delete [] v.arr;
//                 v.arr = test2;
//                 cout << "SIZE AFTER: " << v.size << endl;
//                 cout << "CAPACITY AFTER: " << v.capacity << endl;
//                 cout << "V.SIZE OF V.ARR is: " <<  v.arr[v.size] << endl;
//     }
//         cout << "__ AFTER EVERYTHING IS DONE __ " << endl;
//         for (int i = 0; i < v.capacity; i++){
//                 cout << i << ": " << v.arr[i] << " ";
//                 cout << endl;
//         }
//         cout << "--- END OF THE TEST --- " << endl;
//     }

void vect_push_back(Vect &v, int val){
    if (v.size == v.capacity){
        v.capacity = v.capacity * 2;
    }
    int* testplswork = new int [v.capacity];
    for (int i = 0; i < v.size; i++){
        testplswork[i] = v.arr[i];
    }
    testplswork[v.size] = val;
    v.size = v.size + 1;
    delete [] v.arr;
    v.arr = testplswork;
}

// void vect_insert(Vect &v, unsigned int idx, int val){ // 9
//     cout << idx << endl;
//     cout << val << endl;
//     int j;
//     if (idx >= 0 && idx < v.capacity){
//         if(v.size + 1 >= v.capacity){
//             int newSize = v.capacity * 2;
//             int* test2 = new int [newSize];
//             for (int i = 0; i < v.size; i++){ // RESIZE THIS THING
//                 test2[i] = v.arr[i];
//                 cout << i << endl;
//             }
//             delete [] v.arr;
//             v.arr = test2;
//             v.capacity = newSize; // CHANGE THE CAPACITY
//         }
//          cout << v.size << endl;
//          cout << v.capacity << endl;
//             for (j = v.size - 1; j > idx; j--){ // MOVE ALL THINGS UP ONE
//                 v.arr[j+1] = v.arr[j];
//                 // cout << i << endl;
//             }
//             cout << j << endl;
//             v.arr[j] = val;
//             v.size = v.size + 1;
//     }
//     else {
//         exit(1);
//     }
// }

void vect_insert(Vect &v, unsigned int idx, int val){ // 9
    if (idx >= v.size && idx < 0){
        exit(1);
    }
    if (v.size + 1 > v.capacity){
        v.capacity = v.capacity * 2;
    }
    int* test3 = new int[v.capacity];
    for (int i = 0; i < idx; i++){
        test3[i] = v.arr[i];
    }

    test3[idx] = val;

    for (int i = idx; i < v.size; i++){
        test3[i+1] = v.arr[i];
    }
    v.size = v.size + 1;
    delete [] v.arr;
    v.arr = test3;
}

void vect_clear(Vect &v){ // 10
    if (v.size < 20){
        v.size = 0;
    }
    if (v.size >= 20){
        delete [] v.arr;
        v.arr = new int [20];
        v.capacity = 20;
        v.size = 0;
    }
}

void vect_destruct(Vect &v){ // 11
    delete [] v.arr;
    v.arr = nullptr;
    v.size = 0;
    v.capacity = 0;
}