//
//  Node.hpp
//  DataStructures
//
//  Created by Mills, Jenna on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include <assert.h>

template <class Type> //tells us that this class is a template class
class Node
{
private:
    Type data;
public:
    Node(Type data);
    Type getData();
    void setData(Type data);
};

//Template definitions

template <class Type>
Node<Type> :: Node(Type data)   //Nodes MUST have a type!
{
    this -> data = data;
}

template <class Type>
Type Node<Type> :: getData()
{
    return  data;
}

template <class Type>
void Node<Type> :: setData(Type data)
{
    this -> data = data;
}

#endif /* Node_hpp */
