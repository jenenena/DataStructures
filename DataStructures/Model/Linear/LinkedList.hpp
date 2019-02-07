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
    //Type setAtIndex, Type item)
    //bool contains(Type item);
};

#endif /* LinkedList_hpp */
