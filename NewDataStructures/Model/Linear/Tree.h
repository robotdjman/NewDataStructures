//
//  Tree.h
//  NewDataStructures
//
//  Created by Metcalfe, Rylan on 4/16/19.
//  Copyright © 2019 Metcalfe, Rylan. All rights reserved.
//

#ifndef Tree_h
#define Tree_h
#include "../Nodes/BinaryTreeNode.h"

template <class Type>
class Tree
{
protected:
    BinaryTreeNode<type> * root;
public:
    //Informational Methods
    virtual int getSize() = 0;
    virtual int getHieght() = 0;
    virtual bool isComplete() = 0;
    virtual bool isBalanced() = 0;
    //*DataMethods*
    virtual void insert(Type data) = 0;
    virtual bool contains(Type data) = 0;
    virtual void remove(Type data) = 0;
    //*Transversals*
    virtual void inOrderTraversal() = 0;
    virtual void preOrderTraversal() = 0;
    virtual void postOderTraversal() = 0;
    
};

#endif /* Tree_h */
