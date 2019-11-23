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
    DoublyLinkedList(): head(nullptr), tail(nullptr), sz(0){}
    DoublyLinkedList(T data): head(nullptr), tail(nullptr), sz(0){
        Node<T>* n = new Node<T>(data);
        head = n;
        tail = n;
        sz++;    
    } 

    DoublyLinkedList(const DoublyLinkedList<T>& old){
        head = nullptr;
        tail = nullptr;
        sz = 0;
        if(old.sz == 0){
            return;
		}
        Node<T>* curr = old.head;
        T hold = curr->data;
        this->push_back(hold);
        curr = curr->next;
        if(old.sz == 1)
            return;
        for(int i = 1; i <old.sz; i++){
            push_back(curr->data);
            curr = curr->next;
        }
    }
    
	DoublyLinkedList<T>& operator=(const DoublyLinkedList<T>&rhs){
		if (this != &rhs){
			clear();
			Node<T> *n = rhs.head;
			while (n!=nullptr){
				this->push_back(n->data);
				n = n->next;
			}
		
		}
	return *this;
    } 

    ~DoublyLinkedList() {         
	    clear();
    }
	
    unsigned int size() const { return sz; } 
    T& front(); 
    const T& front() const; 
    T& back(); 
    const T& back() const; 
    void push_back(T data); 
    void push_front(T data);
    void pop_back();
    void pop_front();
    void erase(unsigned int);
    void insert(T data, unsigned int idx);
    void clear();
    std::string to_str() const;
    template<typename U> 
    friend bool operator==(DoublyLinkedList<U> const&, DoublyLinkedList<U> const&);
private:
    // do not change ordering.
    Node<T> *head;
    Node<T> *tail;
    unsigned int sz;
};

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
template<typename T>
T& DoublyLinkedList<T>::front(){
	return head->data;
}
template<typename T>
const T& DoublyLinkedList<T>::front() const{
	return head->data;
}
template<typename T>
T& DoublyLinkedList<T>::back(){
	return tail->data;
}
template<typename T>
const T& DoublyLinkedList<T>::back() const
{
	return tail->data;
}
template<typename T>
void DoublyLinkedList<T>::push_back(T data){//11
        Node<T>* n = new Node<T>(data);
        if (head != nullptr){
            n -> prev = tail;
			tail->next = n;
			tail = n;
			
        }else{
			head = n;
            tail = n;
        }
        sz=sz+1;

}
template<typename T>
void DoublyLinkedList<T>::push_front(T data){
	Node<T> *n = new Node<T>(data); // new node T data
        if (head != nullptr){
            n->next = head;
			head->prev = n;
			head = n; 
        }else{
			head = n;
            tail = n;
        }
        sz=sz+1;
}

template<typename T>
void DoublyLinkedList<T>::pop_back(){
		if (head == tail){
            head=nullptr;
            tail=nullptr;
            sz=sz-1;
        }       
	   else if(head == nullptr){
            return;
        }
        else{
            Node<T>* n = tail;
            tail = tail->prev;
            tail->next = nullptr; //assign temp ptr before deleteing
            delete n;
            sz=sz-1;
        }
}

template<typename T>
void DoublyLinkedList<T>::pop_front(){
         if (head == tail){
            head = nullptr;
            tail = nullptr;
            sz=sz-1;
        }
		else if(head == nullptr){
            return;
        }
        else{
            Node<T>* n = head;
            head = head->next;
            head->prev = nullptr;
            delete n; 
            sz=sz-1; 
        } 
}
template<typename T>
void DoublyLinkedList<T>::insert(T data, unsigned int idx){
	if(idx>=sz){
        return;
	}
    else if(head == nullptr){
        Node<T>* n = new Node<T>(data);
        head = n;
        tail = n;
        sz = sz+1;
    }
    else if(idx == 0){
        Node<T>* n = new Node<T>(data);
        n->next = head;
        n->prev = nullptr;
        head->prev = n;
        head = n;
        sz=sz+1; 
    }
	else{
        Node<T>* n = new Node<T>(data);
        Node<T>* x = head; //this is the declaration for newnode
        unsigned int i=0;
        while(i!=idx && x!=nullptr)
		{
			i=i+1;
			x=x->next;
		}
        x->prev->next = n; 
        n->prev = x->prev;
        x->prev = n;
        n ->next = x; 
        sz=sz+1;
    }
}
template<typename T>
void DoublyLinkedList<T>::erase(unsigned int idx){
	if(sz<=idx){
		return;
	}
	else if(head==tail){
	pop_front();
	}
	else if(head==nullptr){
		return;
	}
	else if(idx==0){
		Node<T> *n = head->next;
		n->next = head->next->next;
		n->prev=nullptr;
		delete head;
		head=n;
	}
	else if(idx==sz-1){
		Node<T> *n = tail->prev;
		n->prev = tail->prev->prev;
		n->next=nullptr;
		delete tail;
		tail=n;
	}
	else{
		int x=0;
		Node<T> *n = head;
		while(idx>x){
			x=x+1;
			n=n->next;
		}
		n->prev->next = n->next;
		n->next->prev = n->prev;
		delete n;
	}
	sz=sz-1;
}

template<typename T>
void DoublyLinkedList<T>::clear(){
	Node<T>* track = head;
    while(track != nullptr){
        head = track->next;
        delete track;
        track = head;
    }
    delete track;
    head = nullptr;
    tail = nullptr;
    sz = 0;
   
}

//////////////////////////////////////////////////////////////////////////////
//                     helper template function definitions                 //
//////////////////////////////////////////////////////////////////////////////
template<typename T>
bool operator==(DoublyLinkedList<T> const& lhs, DoublyLinkedList<T> const& rhs)
{
    return true;
}

template<typename T>
std::ostream& operator<<(std::ostream& os, DoublyLinkedList<T> const& rhs)
{
    os << rhs.to_str();
    return os;
}

#endif
