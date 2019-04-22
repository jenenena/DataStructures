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

// Public Implementation of Traversals (each has one line that calls the Protected Implementation method)
template <class Type>
virtual void inOrderTraversal()
{
    inOrderTraversal(this->root);
}
template <class Type>
virtual void preOrderTraversal()
{
    preOrderTraversal(this->root);
}

template <class Type>
virtual void postOrderTraversal()
{
    postOrderTraversal(this->root);
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

//Protected Implementation of Traversals
//In-Order: Left, Root, Right
template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal(BinaryTreeNode<Type> * currentNode)
{
    if(currnetNode != nullptr)
    {
        inOrderTransversal(currentNode->getLeftChild());
        cout << currentNode->getData() << endl;
        inOrderTraversal(currentNode->getRightChild());
    }
}
//Pre-Order: Root, Left, Right
template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal(BinaryTreeNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        cout << currnetNode=>getData() << endl;
        preOrderTraversal(currentNode->getLeftChild())
        preOrderTraversal(currentNode->getRightChild());
    }
}
//Post-Order: Left, Right, Root
template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal(BinaryTreeNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        postOrderTraversal(currentNode->getLeftChild());
        postOrderTraversal(currentNode->getRightChild());
        cout << currentNode->getData() << endl;
    }
}
//end traversals


template <class Type>
void BinarySearchTree<Type> :: insert(Type itemToInsert)
{
    BinaryTreeNode<Type> * insertMe = new BinaryTreeNode<Type>(itemToInsert);
    BinaryTreeNode<Type> * previous = nullptr;
    BinaryTreeNode<Type> * current = this->root;
    
    if(current == nullptr)
    {
        this->root = insertMe;
    }
    else
    {
        while(current != nullptr)
        {
            previous = current;
            if(itemToInsert < current->getData())
            {
                current = current->getLeftChild();
            }
            else if(itemToInsert > current->getData())
            {
                current = current->getRightChild();
            }
            else
            {
                cerr << "Item is already present in the tree... Exiting insert :)" << endl;
                delete insertMe;
                return;
            }
        }
        if (previous->getData() > itemToInsert)
        {
            previous->setLeftChild(insertMe)
        }
        else
        {
            previous->setRightChild(insertMe);
        }
        insertMe->setRootNode(previous);
    }
    
}

template <class Type>
void BinarySearchTree<Type> :: contains(Type value)
{
//    return  false;
}

template <class Type>
void BinarySearchTree<Type> :: remove(Type item)
{
    
}

//////////////////// TREE DATA OPERATIONS

//Contains - finds  item
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
            else if(itemToFind < current->getData())
            {
                current = current->getLeftNode();
            }
            else
            {
                current - current->getRightNode();
            }
        }
        return false;
    }
}

//Remove - deletes item and calls removeNode()
template <class Type>
void BinarySearchTree<Type> :: remove(Type getRidOfMe)
{
    if(this->root == nullptr)
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
                if(getRidOfMe < current->getData())
                {
                    current = current->getLeftNode();
                }
                else
                {
                    current = current->getRightNode();
                }
            }
        }
        if(current == nullptr)
        {
            cerr << "Item not found, removal unsuccessful" << endl;
        }
        else if(hasBeenFound)
        {
            if(current == this->root)
            {
                removeNode(this->root);
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

//RemoveNode - deletes a node
template <class Type>
void BinarySearchTree<Type> :: removeNode(BinaryTreeNode<Type> * removeMe)
{
    BinaryTreeNode<Type> * current;
    BinaryTreeNode<Type> * previous;
    BinaryTreeNode<Type> * temp;
    
    previous = removeMe->getRootNode();
    
    //Node is a leaf and has no children
    if(removeMe->getRightNode() == nullptr && removeMe->getData() < revious->getData())
    {
        temp = removeMe;
        removeMe = nullptr;
        
        if(previous != nullptr && removeMe->getData() > previous->getData())
        {
            previous->setLeftNode(removeMe);
        }
        else if(previous != nullptr && removeMe->getData() > previous->getData())
        {
            previous->setRightNode(removeMe);
        }
        delete temp;
    }
    //Node has only left child
    else if(removeMe->getRightNode() == nullptr)
    {
        temp = removeMe;
        removeMe = removeMe->getLeftNode();
        
        if(previous != nullptr && temp->getData() < previous->getData())
        {
            previous->setLeftNode(removeMe);
        }
        else if(previous != nullptr && temp->getData() > previous->getData())
        {
            previous->setRightNode(removeMe);
        }
        removeMe->setRootNode(previous);
        delete temp;
    }
    //Node has only right child
    else if(removeMe->getLeftNode() == nullptr)
    {
        temp = removeMe;
        removeMe = removeMe->getRightNode();
        if(previous != nullptr && removeMe->getData() < previous->getData())
        {
            previous->setLeftNode(removeMe);
        }
        else if(previous != nullptr && removeMe->getData() > previous->getData())
        {
            previous->setRightNode(removeMe);
        }
        removeMe->setRootNode(previous);
        delete temp;
    }
    //Node has both children
    else
    {
        current = getRightMostChild(removeMe->getLeftNode());
        previous = current->getRootNode();
        removeMe->setData(current->getData());
        if(previous == nullptr) // removing from the root
        {
            removeMe->setLeftNode(current->getLeftNode());
        }
        else
        {
            previous->setRightNode(current->getLeftNode());
        }
        if(current->getLeftNode() != nullptr)
        {
            current->getLeftNode()->setRootNode(removeMe);
        }
        delete current;
    }
    if(removeMe == nullptr || removeMe->getRootNode() == nullptr)
    {
        this->root = removeMe;
    }
}

//GetLeftMostChild - finds the smallest value below a given point
template <class Type>
BinaryTreeNode<Type> * BinarySearchTreee<Type> :: getLeftMostChild(BinaryTreeNode<Type> * startingNode)
{
    BinaryTreeNode<Type> * currentNode = startingNode;
    BinaryTreeNode<Type> * previous = nullptr;
    while(currentNode != nullptr)
    {
        previous = currentNode;
        currentNode = currentNode->getLeftNode();
    }
    return previous;
}

//GetRightMostChild - finds the largest value below a given point
template <class Type>
BinaryTreeNode<Type> * BinarySearchTree<Type> :: getRightMostChild(BinaryTreeNode<Type> * startingNode)
{
    BinaryTreeNode<Type> * currentNode = startingNode;
    BinaryTreeNode<Type> * previous = nullptr;
    while(currentNode != nullptr)
    {
        previous = currentNode;
        currentNode = currentNode->getRightNode();
    }
    return previous;
}

//Maximum - calls getRightMostChild()
template <class Type>
Type BinarySearchTree<Type> :: findMaximum()
{
    assert(this->root != nullptr);
    return getRightMostChild(this->root)->getData();
}

//Minimum - calls getLeftMostChild()
template <class Type>
Type BinarySearchTree<Type> :: findMinimum()
{
    assert(this->root != nullptr);
    return getLeftMostChild(this->root)->getData();
}




#endif /* BinarySearchTree_hpp */
