//
//  DoubleNode.hpp
//  DataStructures
//
//  Created by Mills, Jenna on 2/21/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Node.hpp"

#ifndef DoubleNode_hpp
#define DoubleNode_hpp

template <class type>
class DoubleNode : public Node<Type>
{
protected:
    DoubleNode<Type> * next;
    DoubleNode<Type> * prev;
public:
    DoubleNode()
    DoubleNode(Type data);
    DoubleNode(Type data, DoubleNode<Type> * next, DoubleNode * prev);
    
    DoubleNode<Type> * getPrev();
    DoubleNode<Type> * getNext();
    
    void setPrev(DoubleNode<Type> * prev);
    void setNext(DoubleNode<Type> * next);
};

template<class Type>
DoubleNode<Type> :: DoubleNode() : Node<Type>()
{
    previous = nullptr;
    next = nullptr;
}

template <class Type>
DoubleNode<Type> :: DoubleNode(Type data) : Node<Type>(data)
{
    previous = nullptr;
    next = nullptr;
}

template <class Type>
DoubleNode<Type> :: DoubleNode(Type data; DoubleNode<Type> * next; DoubleNode * prev) : Node<Type>(data)
{
    this->prev = prev;
    this->next = next;
}

template <class Type>
void DoubleNode<Type> :: setNext(DoubleNode<Type>* next)
{
    this->next = next;
}

template <class Type>
void DoubleNode<Type> :: setPrev(DoubleNode<Type>* prev)
{
    this->prev = prev;
}

template <class Type>
void DoubleNode<Type> * DoubleNode<Type> :: getPrev()
{
    return prev;
}

template <class Type>
void DoubleNode<Type> * DoubleNode<Type> :: getNext()
{
    return next;
}

#endif /* DoubleNode_h */
