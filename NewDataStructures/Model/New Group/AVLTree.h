//
//  AVLTree.h
//  NewDataStructures
//
//  Created by Metcalfe, Rylan on 4/30/19.
//  Copyright © 2019 Metcalfe, Rylan. All rights reserved.
//

#ifndef AVLTree_h
#define AVLTree_h

#include "BinarySearchTree.h"

template <class Type>
class AVLTree : public BinarySearchTree<Type>
{
private:
    
    BinaryTreeDone<Type> * leftRotation (BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * leftRightRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightLeftRotation(BinaryTreeNode<Type> * parent);
    
    BinaryTree<Type> * balanceSubTree (BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * insertNode<BinaryTreeNode<Type> * parent, Type value);
    BinaryTreeNode<Type> * removeNode(BianryTreeNode<Type> * parent, Type value);
    
    int heightDifference(BianryTreeNode<Type> * parent);
    
public:
    AVLTree();
    
    void insert(Type itemToInsert);
    void remove(Type value);
    
    };
    
template<Class Type>



#endif /* AVLTree_h */
