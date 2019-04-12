//
//  BinaryTreeNode.hpp
//  DataStructures
//
//  Created by Mills, Jenna on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef BinaryTreeNode_hpp
#define BinaryTreeNode_hpp
#include "Node.hpp"

template<class Type>
class BinaryTreeNode : public Node<Type>
{
private:
    //data members
    BinaryTreeNode<Type> * root;
    BinaryTreeNode<Type> * leftChild;
    BinaryTreeNode<Type> * rightChild;
public:
    //constructors
    BinaryTreeNode<Type>();
    BinaryTreeNode<Type>(Type data);
    //getters
    BinaryTreeNode<Type> * getRoot();
    BinaryTreeNode<Type> * getLeftChild();
    BinaryTreeNode<Type> * getRightChild();
    //setters
    void setRoot(BinaryTreeNode<Type> * root);
    void setLeftChild(BinaryTreeNode<Type> * leftChild);
    void setRightChild(BinaryTreeNode<Type> * rightChild);
};

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode() : Node<Type>()
{
    root = nullptr;
    leftChild  = nullptr;
    rightChild = nullptr;
}

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : Node<Type>(data)
{
    root = nullptr;
    leftChild = nullptr;
    rightChild = nullptr;
}

//GETTERS????

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRoot()
{
    return this->root;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getLeftChild()
{
    return this->leftChild;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRightChild()
{
    return this->rightChild;
}

//SETTERS???

template <class Type>
void BinaryTreeNode<Type> :: setRoot(BinaryTreeNode<Type> * newRoot)
{
    this->root = newRoot;
}

template <class Type>
void BinaryTreeNode<Type> :: setLeftChild(BinaryTreeNode<Type> * leftChild)
{
    this->leftChild = leftChild;
}

template <class Type>
void BinaryTreeNode<Type> :: setRightChild(BinaryTreeNode<Type> * rightChild)
{
    this->rightChild = rightChild;
}


#endif /* BinaryTreeNode_h */
