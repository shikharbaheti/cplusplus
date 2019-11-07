#ifndef STACK
#define STACK

#include <cmath>
template <typename T>
class Stack {
    T* A;
    int capacity;       
    int length;
public:
    Stack(): capacity(1), length(0)
    {
        A = new T[1];
    }
    ~Stack()
    {
        delete [] A;
    }   
    void push(T element);
    T pop();
    bool isEmpty();
};
template <typename T> 
void Stack<T>::push(T element) {
    if (length == capacity) { // check if Array is full

    T* B = new T[capacity * 2];
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
template <typename T> 
T Stack<T>::pop(){
    if (length == 0){
        exit(0);
    }
    else {
        length = length - 1;
        return A[length];
    }
}
template <typename T> 
bool Stack<T>::isEmpty(){
    return (length == 0);
}

#endif
