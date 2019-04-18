//
//  BinarySearchTree.hpp
//  DataStructures
//
//  Created by Mills, Jenna on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp
#include "Tree.hpp"
#include <iostream>

using namespace std;

template <class Type>
class BinarySearchTree : public Tree<Type>
{
protected:
    //MARK: protected methods
    int calculateSize(BinaryTreeNode<Type> * startNode);
    int calculateHeight(BinaryTreeNode<Type> * startNode);
    bool isBalanced(BinaryTreeNode<Type> * startNode);
    bool isComplete(BinaryTreeNode<Type> * startNode, int index, int size);
    
    void inOrderTransversal(BinaryTreeNode<Type> * inStart);
    void preOrderTransversal(BinaryTreeNode<Type> * preStart);
    void postOrderTransversal(BinaryTreeNode<Type> * postStart);
    
    void destroyTree(BinaryTreeNode<Type> * node);
    
    BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
    BinaryTreeNode<Type> * getLeftMostChild(BinaryTreeNode<Type> * current);
    
    void removeNode(BinaryTreeNode<Type> * removeMe);
    
public:
    //MARK: public methods
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinaryTreeNode<Type> * getRoot();
    
    void inOrderTransversal();
    void preOrderTransversal();
    void postOrderTransversal();
    void demoTranversalSteps(BinaryTreeNode<Type> * node);
    
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();
    
    bool contains(Type value);
    void insert(Type itemToInsert);
    void remove(Type value);
    
    Type findMinimum();
    Type findMaximum();
}


//void methods from tree
template <class Type>
virtual void insert(Type data)
{
    
}

template <class Type>
virtual void remove(Type data)
{
    
}

template <class Type>
virtual void inOrderTraversal()
{
    
}
template <class Type>
virtual void preOrderTraversal()
{
    
}

template <class Type>
virtual void postOrderTraversal()
{
    
}


//informational methods from tree
template <class Type>
int BinarySearchTree<Type> :: getHeight()
{
    return -1;
}

template <class Type>
int BinarySearchTree<Type> :: getSize()
{
    return -1;
}

template <class Type>
virtual bool isComplete()
{
    return false;
}

template <class Type>
virtual bool isBalanced()
{
    return false;
}

template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal()
{
    
}

template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal()
{
    
}

template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal()
{
    
}

template <class Type>
void BinarySearchTree<Type> :: insert(Type item)
{
    
}

template <class Type>
void BinarySearchTree<Type> :: contains(Type value)
{
    return  false;
}

template <class Type>
void BinarySearchTree<Type> :: remove(Type item)
{
    
}


#endif /* BinarySearchTree_hpp */
