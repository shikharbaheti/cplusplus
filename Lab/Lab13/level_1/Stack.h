#ifndef STACK_H
#define STACK_H

#include <iostream>
#include "LinkedList.h"

template <typename T>
class Stack {
    LinkedList<T> list;
    
    public:
    Stack();
    ~Stack();
    bool empty();
    T& peek();
    void pop();
    void push(const T&);
    
    friend std::ostream& operator<<(std::ostream& os, const Stack& stack) {
        os << "[WARNING] ostream operator<< not yet implemented";
        os << stack.list; //calling output operator
        return os;
    }
};

template <typename T>
Stack<T>::Stack()
{}

template <typename T>
Stack<T>::~Stack() {
    list.clear();
}

template <typename T>
bool Stack<T>::empty() {
    //std::cout << "[WARNING] Stack<T>::empty() not yet implemented" << std::endl;
    return (list.length() == 0);
}

template <typename T>
T& Stack<T>::peek() {
    std::cout << "[WARNING] Stack<T>::peek() not yet implemented" << std::endl;
    return *(new T());
}

template <typename T>
void Stack<T>::pop() {
    //list.pop_front();
    //std::cout << "[WARNING] Stack<T>::pop() not yet implemented" << std::endl;
}

template <typename T>
void Stack<T>::push(const T& elem) {
    list.push_back(elem);
    //std::cout << "[WARNING] Stack<T>::push() not yet implemented" << std::endl;
}

#endif