//
//  CircularList.hpp
//  DataStructures
//
//  Created by Mills, Jenna on 2/21/19.
//  Copyright © 2019 CTEC. All rights reserved.
//
#include "../Nodes/DoubleNode.hpp"

#ifndef CircularList_hpp
#define CircularList_hpp

template <class Type>
class CircularList
{
private:
    DoubleNode<Type> * front;
    DoubleNode<Type> * end;
    
    DoubleNode<Type> * findNode(int index);
    
public:
    CircularList();
   ~ CircularList;
    
    //List Methods
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type remove(int index);
    Type setAtIndex(int index, Type item);
    Type getFromIndex(int index);
    int getSize() const;
};

template <class Type>
CircularList<Type> :: CircularList();
{
    front = nullptr;
    end = nullptr;
    this->size = 0;
}

template <class Type>
CircularList<Type> :: ~CircularList()
{
    DoubleNode<Type> * current = front;
    while (this->front != nullptr)
    {
        front = front->getNext();
        delete current;
        current = front;
    }
}

template <class Type>
DoubleNode<Type> * CircularList<Type> :: findNode(int index)
{
    assert (index >= 0 && index < this->size);
    DoubleNode<Type> * nodeToFind;
    
    if (index < this->size / 2)
    {
        nodetoFind = this->front;
        for (int position = 0; position < index; position++)
        {
            nodeToFind = nodeToFind->getNext();
        }
    }
    else
    {
        nodeToFind = this->end;
        for (int position = this->size -1; position > index; position--)
        {
            nodeToFind = nodeToFind->getPrev();
        }
    }
    return nodeToFind;
}

template <class Type>
void CircularList<Type> :: add(Type item)
{
    DoubleNode<Type> * addedNode;
    if (this->size == 0)
    {
        addedNode = new DoubleNode<Type>(item);
        this->front = addedNode;
    }
    else
    {
        addedNode = new DoubleNode<Type>(item, this->end, this->front);
        this->end->setNext(addedNode);
    }
    this->end = addedNode;
    this->size++;
}

template <class Type>
void CircularList<Type> :: addAtIndex(int index, Type item)
{
    assert (index >= 0 && index<= this->size);
    
    DoubleNode<Type> * next;
    DoubleNode<Type> * prev;
    DoubleNode<Type> * addMe;
    
    if (index < this->size)
    {
        next = this->front;
        prev = this->end;
    }
    
    addMe = new DoubleNode<Type>(item, previous, next);
    if (index == 0)
    {
        this->front = addMe;
    }
    else if (index == this->size)
    {
        this->end = addMe;
    }
    previous->setNext(addMe);
    next->setPrevious(addMe);
    this->size++;
}

template <class Type>
Type CircularList<Type> :: getFromIndex(int index)
{
    assert (index >= 0 && index < this->size);
    DoubleNode<Type> * holder = findNode(index);
    return holder->getData();
}

template <class Type>
Type CircularList<Type> :: remove(int index)
{
    assert (index= 0 && index < this-> size);
    
    DoubleNode<Type> * removed = findNode(index);
    DoubleNode<Type> * removedPrev = removed-> getPrev();
    DoubleNode<Type> * removedNext = removed->getNext();
    
    if (index == 0)
    {
        this->front = removedNext:
        this->end->setNext(removedNext);
    }
    if (index == this->size - 1)
    {
        this->end = removedPrev;
        this->front->setPrev(removedPrev);
    }
    
    removedPrev->setNext(removedNext);
    removedNexxt->setPrev(removedPrev);
    
    Type value = removed->getData();
    this->size--;
    delete removed;
    return value;
}

template <class Type>
int CircularList<Type> :: getSize() const;
{
    return this->size;
}

#endif /* CircularList_h */
