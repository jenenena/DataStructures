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



#endif /* CircularList_h */
