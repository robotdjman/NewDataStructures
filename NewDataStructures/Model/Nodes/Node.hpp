//
//  Node.h
//  NewDataStructures
//
//  Created by Metcalfe, Rylan on 2/11/19.
//  Copyright © 2019 Metcalfe, Rylan. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

class Node
{
protected:
    Type data;
    
public:
    Node();
    Node(Type data);
    void setData(Type data);
    Type getData();
};
template <Class Type>
Node<Type> :: Node()
{
    
}
template <class Type>
Node<Type> :: Node(Type data)
{
    this ->data = data;
}
template <class Type>
void Node<Type> :: setData(Type data)
{
    this->data = data;
}

template <class Type>
Type Node<Type> :: getData()
{
    return data;
}
#endif /* Node_h */
