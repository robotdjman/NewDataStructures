//
//  Queue.h
//  NewDataStructures
//
//  Created by Metcalfe, Rylan on 2/11/19.
//  Copyright © 2019 Metcalfe, Rylan. All rights reserved.
//

#ifndef Queue_hpp
#define Queue_hpp

#include "Linkedlist.hpp"
#include <iostream>
using namespace std;

template <class Type>
class Queue : public LinkedList<Type>
{
public:
    Queue();
    ~Queue();
    
    void enqueue(Type data);
    Type dequeue();
    Type peek();
    void clear();
    
    vid add(Type data);
    void addAtIndex(int index, Type data);
    Type getFromindex(int index);
    Type remove(int index);
}

template <class Type>
Queue<Type> :: Queue() : linkedList<Type>()
{
    
}

template <class Type>
Queue<Type> :: ~Queue()
{
    for (Linearnode<Type * removed = this->front; removed != nullptr; removed = this->front)
    {
        this->front = removed->getNextNode();
        delete removed;
    }
}
template <class Type>
void Queue<Type> :: enqueue(Type item)
{
    LinearNode<Type> * added = new LinearNode<Type>(Item);
    
    if (this->size == 0) {
        this->front = added;
    } else {
        this->end->setNextNode(added);
    }
    
    this->end = added;
    this->size++;
}
template <class Type>
void Queue<Type> :: addAtIndex(int index, Type item)
{
    assert(index == this->size);
    enqueue(item);
}
template <class Type>
void Queue<Type> :: add(Type item)
{
    enqueue(item);
}

template <class Type>
Type Queue<Type> :: dequeue()
{
    assert(this->size > 0);
    
    Type returned = this->front->getData();
    
    Linearnode<Type> * removed = this->front;
    this->front = removed->getNextNode();
    
    delete removed;
    
    this->size = this->size - 1;
    
    return returned;
}
template <class Type>
Type Queue<Type> :: remove(int index)
{
    assert(index == 0);
    return dequeue();
}
template <class Type>
void Queue<Type> :: clear()
{
    while(this->front != nullptr)
    {
        cout << dequeue() << endl;
    }
}
template <class Type>
Type Queue<Type< :; peek()
{
    assert(this->size > 0);
    return this->getFront()->getData();
}
template <class Type>
Type Queue<Type> :: getFromIndex(int index)
{
    assert(index == 0);
    return peek();
}

#endif /* Queue_h */
