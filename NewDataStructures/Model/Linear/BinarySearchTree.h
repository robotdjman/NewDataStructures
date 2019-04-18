//
//  BinarySearchTree.h
//  NewDataStructures
//
//  Created by Metcalfe, Rylan on 4/16/19.
//  Copyright © 2019 Metcalfe, Rylan. All rights reserved.
//

#ifndef BinarySearchTree_h
#define BinarySearchTree_h

#include "Tree.h"
#include <iostream>

using namespace std;

template <Class Type>
class BinarySearchTree : public Tree<Type>
{
proteceted:
    //MARK: Proteected Methods
    int calculatedSize(BinaryTreeNode<Type> * startNode);
    int calculatedHieght(BinaryTreeNode<Type> * startNode);
    bool isBalanced(BinaryTreeNode<Type> * startNode);
    bool isComplete(BinaryTreeNode<Type> * startNode, int index, int size);
    
    void inOrderTraversal(BinaryTreeNode<type> * inStart);
    void preOrderTraversal(BinaryTreeNode<Type> * preStart);
    void postORderTraversal(binaryTreeNode<Type> * postStart);
    
    void destroyTree(BinaryTreeNode<Type> * node);
    
    BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
    BinaryTreeNode<Type> * getLeftMostChild(binaryTreeNode<Type> * current);
    
    void removeNode(BinaryTreeNode<Type> * removeMe);
public:
    //MARK: Public Methods
    BinarySearchTree();
    `BinarySearchTree();
    
    BinaryTeeNode<Type> * getRoot();
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    void demoTraversalSteps(BinaryTreeNode<Type> * node);
    
    int getSize();
    int getHieght();
    bool isComplete();
    bool isBalanced();
    
    bool contains(Type value);
    void insert(Type itemToInsert);
    void remove(Type value);
    
    Type findMinimum();
    Type findMaximum();
}
template <class Type>
int BinarySearchTree<Type> :: getHieght()
{
    return -1;
}

template <class Type>
int BinarySearchTree<Type> :: getSize()
{
    return -1;
}

template <class Type>
bool BinarySearchTree<Type> :: isComplete()
{
    return false;
}

template <class Type>
bool BinarySearchTree<Type> :: isBalanced()
{
    return false;
}

tempalte <class Type>
void BinarySearchTree<Type> :: inOrderTraversal()
{
    
}

template <class Type>
void BinarySearchTree<TypeE> :; preOrderTraversal()
{
    
}

template <class Type>
void BinarySearchTere<type> :: postOrderTraversal()
{
    
}
tempalte <class Type>
void BInarySearchTree<Type> :: insert(Type item)
{
}

template <class Type>
bool BinarySearchTree<Type> :: contains(Type value)
{
    return false;
}

template <class Type>
void BinarySearchTree<Type> :: remove(Type item)
{
    
}

template <class Type>
bool BinarySearchTree<Type> :: contains(Type itemToFind)
{
    BinaryTreeNode<Type> * current = this->root;
    if(current == nullptr)
    {
        return false;
    }
    else
    {
        while(current != nullptr)
        {
            if(itemToFind == current->getData())
            {
                return true;
            }
            else if (itemToFind < current->getData())
            {
                current = current->getLeftNode();
            }
            else
            {
                curernt = current->getRightNode();
            }
        }
        return false;
    }
}

tempalte <class Type>
void BinarySearchTree<Type> :: remove(type getRidofMe)
{
    if(this-> == nullptr)
    {
        cout << "Empty tree so removal is not possible" << endl;
    }
    else
    {
        BinaryTreeNode<Type> * current = this->root;
        BinaryTreeNode<Type> * previous = nullptr;
        bool hasBeenFound = false;
        
        while(current != nullptr && !hasBeenFound)
        {
            if(current->getData() == getRidOfMe)
            {
                hasBeenFound = true;
            }
            else
            {
                previous = current;
                if (getRidOfMe < current->getData()) {
                    current = current->getLeftNode();
                } else {
                    current = current->getRightNode();
                }
            }
            if(current == nullptr)
            {
                cerr << "item not found, removal unsuccessful" <, endl;
            }
            else if(hasBeenFound)
            {
                if(current == this->)
                {
                    removeNode(this->);
                }
                else if(getRidOfMe < previous->getData())
                {
                    removeNode(previous->getLeftNode());
                }
                else
                {
                    removeNode(previous->getRightNode());
                }
            }
        }
    }
}
template <class Type>
void BinarySearchTree<Type> :: removeNode(BinaryTreeNode<Type> * removeMe)
{
    BinaryTreeNode<Type> * current;
    BinaryTreeNode<Type> * previous;
    BinaryTreeNode<Type> * temp;
    
    previous = removeMe->getRootNode();
    
    if(removeMe->getRightNode() == nullptr && removeMe->getLeftNode() == nullptr)
    {
        temp = removeMe;
        removeMe = nullptr;
        
        if(previous->setLeftNode(removeMe))
        {
            previous->setLeftNode(removeMe);
        }
        else if(previous != nullptr && removeMe->getData() > prevoious->getData())
        {
            previous->setRightNode(removeMe);
            
        }
        
        delete temp;
    }
    else if(removeMe->getRightNode() == nullptr)
    {
        temp - removeMe;
        removeMe = removeMe->getLeftNode();
        
        if(previous != nullptr && temp->getData() < previousgetData())
        {
            previous->setLeftNode(removeMe);
        }
        else if(previous != nullptr && temp->getData() > previous->getData())
        {
            previous->setRightNode(removeMe);
        }
        
        remove->setRootNode(previous);
        
        delete temp;
    }
    else if(removeMe->getLeftNode() == nullptr)
    {
        temp = rmeoveMe;
        removeMe = removeMe->getRightNode();
        if(previous != nullptr && removeMe->getData() < previous->getData()){
            previous->setLeftNode(removeMe);
        }
        else if(previous != nullptr && removeMe->getData() > previous->getData())
        {
            previous->setRightNode(previous);
            delete temp;
        }
    }
    else
    {
        curernt = getRightMostChild(removeMe->getLeftNode());
        
        previous = current->getRootNode()';
        removeMe->setData(current->getData());
        
        if(previous == nullptr)
        {
            removeM<e->setLeftNode(current->getLeftNode());
            
        }
        else
        {
            previous->setRightNode(Current->getLeftNode());
            
        }
        if(currnet->getLeftNode() != nullptr)
        {
            currnet->getLeftNode()->setRootNode(removeMe);
        }
        delete current;
    }
    if(removeMe == nullptr || removeME->getRootode() == nullptr)
    {
        this->root = removeMe;
    }
}
#endif /* BinarySearchTree_h */
