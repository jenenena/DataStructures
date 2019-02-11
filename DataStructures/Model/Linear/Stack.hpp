//
//  Stack.hpp
//  DataStructures
//
//  Created by Mills, Jenna on 2/11/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include "LinkedList.hpp"

template <class Type>
class Stack : public LinkedList<Type>
{
    Stack();
    ~Stack();
    
    //Stack specific methods
    void push(Type data);
    Type pop();
    Type peek();
    
    //Overridden LinkedList methods
    void add(Type data);
    void addAtIndex(int index, Type data);
    Type getFromIndex(int index);
    Type remove(int index);
}

template <class Type>
Stack<type> :: Stack() : LinkedList<Type>()
{
    //Empty
}

#endif /* Stack_hpp */
