//
//  LinkedList.hpp
//  DataStructures
//
//  Created by Mills, Jenna on 2/7/19.
//  Copyright © 2019 CTEC. All rights reserved.
//
#include "List.hpp"

using namespace std;

#ifndef LinkedList_hpp
#define LinkedList_hpp

template <class Type>
class LinkedList : public List<Type>
{
protected:
    LinearNode<Type> * front;
    LinearNode<Type> * end;
public:
    //constructors
    LinkedList();
    //destructor
    virtual ~LinkedList(); //virtual so it can be overridden
    //helper methods
    int getSize() const;
    LinearNode<Type> * getFront();
    LinearNode<Type> * getEnd();
    //structure methods
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type getFromIndex(int index);
    Type remove(int index);
    //Type setAtIndex(int index, Type item)
    bool contains(Type item);
};






template <class Type>
LinkedList<Type> :: LinkedList()
{
    this -> front = nullptr;
    this -> end = nullptr;
    this -> size = 0;
}

template <class Type>
LinkedList<Type> :: ~LinkedList()
{
    LinearNode<Type> * destroyStructure = front;
    while (front != nullptr)
    {
        front = destroyStructure->getNextNode();
        deleteDestroyStructure
    }
    
}







































template <clas














template <classType>
Type LinkedList<Type> :: remove (int index)
{
    assert(index >= 0 && index < this->size);
    
    LinearNode<Type * current = front;
    LinearNode<Type * toBeRemoved = nullptr;
    LinearNode<Type * previous = nullptr;
    
    Type removedData;
    
    if (index == 0)
    {
        toBeRemoved = front;
        this->front = this->front->getNextNode();
    }
else
{
    for (int position = 0; position < index; position++)
    {
        previous = current;
        current = current->getNextNode();
    }
    
    toBeRemoved = current;
    
    if (index == this->size - 1)
    {
        previous->setNextNode(nullptr);
        current = current->getNextNode();
    }
    previous->setNextNode(nullptr);
    end = previous;
   }
    else
    {
        current = toBeRemoved->getNextNode();
        previous->setNextNode(current);
    }
}
this->size -= 1;

removedData = toBeRemoved->getData();
delete toBeRemoved;
return removedData;

template <class Type>
bool LinkedList<Type> :: contains(Type thingToFind)
{
    bool isInHere = false;
    
    LinearNode<Type> * searchPointer = front;
    for (int index = 0; index < this->size; index++)
    {
        if (searchpointer->getData() == thingToFind)
        {
            isInHere = true;
        }
        searchPointer = searchPointer->getNextNode();
    }
    
    return isInHere;
}

#endif /* LinkedList_hpp */
