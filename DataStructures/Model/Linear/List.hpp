//
//  List.hpp
//  DataStructures
//
//  Created by Mills, Jenna on 2/7/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include "../Nodes/LinearNode.hpp"

template <class Type>
class List
{
protected:
    int size;
public:
    //STRUCTURE; methods to actually deal with the list
    virtual void add(Type item) = 0;
    //Virtual means that the method can be overwritten; assigning the method to be zero means
    // that the method is abstract. The method is empty.
    virtual void addAtIndex(int index; Type item) = 0;
    virtual Type remove(int index ) = 0;
    virtual Type getFromIndex(int index) = 0;
    //HELPER; methods to ask the list
    virtual int getSize() const = 0;
    virtual LinearNode<Type> * getFront() = 0;
    virtual LinearNode<Type> * getEnd() = 0;
};

#endif /* List_h */
