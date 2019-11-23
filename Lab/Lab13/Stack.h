#ifndef STACK_H
#define STACK_H

#include <iostream>
#include "LinkedList.h"

template <typename T>
class Stack {
    LinkedList<T> list;

    public:

    bool empty();
    T& peek();
    void pop();
    void push(const T&);
    
    friend std::ostream& operator<<(std::ostream& os, const Stack& stack) {
        for (unsigned int i = 0; i < stack.list.length(); i++){
            os << stack.list.node->data << "-->"; 
        }
        return os;
    }
};


template <typename T>
bool Stack<T>::empty() {
    if (list.length() == 0){
        return true;
    }
    return false;
}

template <typename T>
T& Stack<T>::peek() {
    return (list.front());
}

template <typename T>
void Stack<T>::pop() {
    list.pop_front();
}

template <typename T>
void Stack<T>::push(const T& elem) {
    list.push_front(elem);
}

#endif