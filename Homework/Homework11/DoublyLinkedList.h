#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H
#include "Node.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

//////////////////////////////////////////////////////////////////////////////
//                         class template definition                        //
//////////////////////////////////////////////////////////////////////////////

template<typename T>
class DoublyLinkedList {
public:
    /* uncomment the declarations as you implement them */
    DoublyLinkedList();
    DoublyLinkedList(T);
    DoublyLinkedList(const DoublyLinkedList<T>&);
    // DoublyLinkedList<T>& operator=(const DoublyLinkedList<T>&);
    ~DoublyLinkedList();
    unsigned int size() const { return sz; }
    T& front();
    // const T& front() const;
    // T& back();
    // const T& back() const;
    void push_back(T);
    void push_front(T);
    void pop_back();
    void pop_front();
    void erase(unsigned int);
    void insert(T data, unsigned int idx);
    void clear();
    std::string to_str() const;
    // breaks encapsulation... gives operator== access to private data... not great approach, but makes the homework easier for you since we haven't talked about iterators :).
    // template<typename U> friend bool operator==(DoublyLinkedList<U> const&, DoublyLinkedList<U> const&);
private:
    // do not change ordering.
    Node<T> *head;
    Node<T> *tail;
    unsigned int sz;
};

//class template functions:
template <typename T>
DoublyLinkedList<T>::DoublyLinkedList() : head(nullptr), tail(nullptr), sz(0) {}

template <typename T>
DoublyLinkedList<T>::DoublyLinkedList(T data): head(nullptr), tail(nullptr), sz(0){
        Node<T>* n = new Node<T>(data);
        head = n;
        tail = n;
        sz++;
}

template <typename T>
DoublyLinkedList<T>::~DoublyLinkedList() {
    clear();
}

template <typename T>
void DoublyLinkedList<T>::clear() {
    for (int i = 0; i < sz; i++){
        delete Node 
    }
}

template <typename T>
DoublyLinkedList<T>::DoublyLinkedList(const DoublyLinkedList<T>& old){
        head = nullptr;
        tail = nullptr;
        sz = 0;
        if(old.sz == 0)
            return;
        Node<T>* curr = old.head;
        sz = 1;
        push_back(curr->data);
        curr = curr->next;  
        if(old.sz == 1)
            return;
        for(int i = 1; i <old.sz; i++) {
            push_back(curr->data);
            curr = curr->next;
            sz++;
    }
}

template<typename T>
T& DoublyLinkedList<T>::front(){

}

template<typename T>
void DoublyLinkedList<T>::push_back(T data){//11
        Node<T>* n = new Node<T>(data);
        if (head == nullptr){
            head = n;
            tail = n;
        }else{
        n -> prev = tail;
        tail->next = n;
        tail = n;
        }
        sz++;

}
//pushfront 12
template<typename T>
void DoublyLinkedList<T>::push_front(T data){
        
        Node<T> *n = new Node<T>(data); // new node T data
        if (head == nullptr){
            head = n;
            tail = n;
        }else{
        n->next = head; // assign n-> next to current head before n becomes head
        head->prev = n; // assign current head->prev to n before n becomes head
        head = n; // head pointer points to n now; n is now head and its next points to the previous head
        
        }
        sz++;
}
//popback 13
template<typename T>
void DoublyLinkedList<T>::pop_back(){
        if(head == nullptr){
            return;
        }else if (head == tail){
            head = nullptr;
            tail = nullptr;
            sz--;
        }
        else{
            
            Node<T>* n = tail->prev; //assign temp ptr before deleteing
            delete tail;
            tail = n;
            tail->next = nullptr;
            sz--;
            
        }
        
}

template<typename T>
void DoublyLinkedList<T>::pop_front(){
        if(head == nullptr){
            return;
        }else if (head == tail){
            head = nullptr;
            tail = nullptr;
            sz--;
        }
        else{
            
            //head->next->prev = nullptr;

            Node<T>* n = head->next; //assign temp ptr before deleteing
            delete head;
            //head = head->next;
            head = n;
            head->prev = nullptr;
            sz--;
            
        }
        
}
template<typename T>
void DoublyLinkedList<T>::insert(T data, unsigned int idx){
    if(sz <= idx)
        return;
    Node<T>* n = new Node<T>(data);
    Node<T>* track = head;
    for(unsigned int i = 0; i < sz - 1; i++){
        if(head == tail){// if size is 1
            head->prev = n;
            n->next = head;
            n = head;
            sz++;
            return;
        }
        track = track->next;
        if(i == idx){
            std::cout<<"Begin i == idx"<<std::endl;

            if(track->next == nullptr){// if end of list
                std::cout<<"1"<<std::endl;
                track->prev->next = n;
                n->next = track;
                track->prev = n;
                sz++;
                return;  
                std::cout<<"2"<<std::endl;
            }
            
            if(track->prev == nullptr){// if beggining of list
                std::cout<<"3"<<std::endl;
                n->next = track;
                track->prev = n;
                head = track;
                sz++;
                return;
                std::cout<<"4"<<std::endl;
            }else{//all other cases
                std::cout<<"5"<<std::endl;
                track->prev->next = n;
                n->next = track;
                track->prev = n;
                sz++;
                return;
                std::cout<<"6"<<std::endl;
            }
            
        }
    }
}

template<typename T>
void DoublyLinkedList<T>::erase(unsigned int idx){
    if(sz <= idx)
        return;
    Node<T>* track = head; 
    std::cout << "Got to this part 0" << std::endl;
    for(unsigned int i = 0; i < sz; i++){
        std::cout << "Got to this part 1" << std::endl;
        track = track->next;
        std::cout << "Got to this part 2" << std::endl;
        if(i == idx){
        std::cout << "Got to this part 3" << std::endl;
            if(head == tail){
                delete head;
                sz--;
                return;
            }
            if(track->next == nullptr){
                track->prev->next = nullptr;
                delete tail;
                tail = track;
                sz--;
            }
            if(track->prev == nullptr){
                track->next->prev = nullptr;
                delete head;
                head = track;
                sz--;
            }else{  
                std::cout<<"221"<<std::endl;
                track->prev->next= track->next;
                std::cout<<"223"<<std::endl;
                track->next->prev = track->prev;
                std::cout<<"224"<<std::endl;
                delete track;
                sz--;
                return;
            }
        }
    }
}



//////////////////////////////////////////////////////////////////////////////
//                       helper function declarations                       //
//////////////////////////////////////////////////////////////////////////////
template<typename T> std::ostream& operator<<(std::ostream &, DoublyLinkedList<T> const&);

template<typename T> bool operator==(DoublyLinkedList<T> const&, DoublyLinkedList<T> const&);

template<typename T> bool operator!=(DoublyLinkedList<T> const&, DoublyLinkedList<T> const&);

//////////////////////////////////////////////////////////////////////////////
//                     member template function definitions                 //
//////////////////////////////////////////////////////////////////////////////
template<typename T>
std::string DoublyLinkedList<T>::to_str() const
{
    std::stringstream os;
    const Node<T> *curr = head;
    os << std::endl << std::setfill('-') << std::setw(80) << '-' << std::setfill(' ') << std::endl;
    os << "head: " << head << std::endl;
    os << "tail: " << tail << std::endl;
    os << "  sz: " << sz << std::endl;
    os << std::setw(16) << "node" << std::setw(16) << "node.prev" << std::setw(16) << "node.data" <<  std::setw(16) << "node.next" << std::endl;
    while (curr) {
        os << std::setw(16) << curr;
        os << std::setw(16) << curr->prev;
        os << std::setw(16) << curr->data;
        os << std::setw(16) << curr->next;
        os << std::endl;
        curr = curr->next;
    }
    os << std::setfill('-') << std::setw(80) << '-' << std::setfill(' ') << std::endl;
    return os.str();
}

//////////////////////////////////////////////////////////////////////////////
//                     helper template function definitions                 //
//////////////////////////////////////////////////////////////////////////////
template<typename T>
bool operator==(DoublyLinkedList<T> const& lhs, DoublyLinkedList<T> const& rhs)
{
    // getting you started on this once... definition for this overloaded operator will go here.
    return true;
}

template<typename T>
std::ostream& operator<<(std::ostream& os, DoublyLinkedList<T> const& rhs)
{
    os << rhs.to_str();
    return os;
}

#endif
