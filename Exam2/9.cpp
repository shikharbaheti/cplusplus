#include <iostream>
using namespace std;

void increaseArray(int* &array, int &size, int value){
    int newSize = size + 5;
    if (size == 0) {
        size = 5;
    }
    cout << "array: " << array << endl;

    int* newArray = new int[newSize];

    for (int i = 0; i < size; i++){
        newArray[i]  = array[i];
    }

    // delete [] array;
    // array = newArray;
    // cout << newArray << " new Array " << endl;


    for (int j = size; j < newSize; j++){
        newArray[j] = value;
    }
    delete [] array;
    size = newSize;
    array = newArray;
    
    newArray  = nullptr; 
}

void printArray(int* array, int size){
    if (size == 0 || array == nullptr){
        cout << "Empty list" << endl;
    }
    else {
        for (int i = 0; i < size; i ++){
            cout << array[i] << " ";
        }
        cout << endl;
    }
}

int main(){
    int testSize = 0;
    int* testArray = new int [testSize];
    cout << testArray << " Test array " << endl;
    int testValue = 12;
    increaseArray(testArray, testSize, testValue);
    printArray(testArray, testSize);
}