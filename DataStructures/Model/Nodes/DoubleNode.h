//
//  DoubleNode.h
//  DataStructures
//
//  Created by Mills, Jenna on 2/21/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef DoubleNode_h
#define DoubleNode_h

template <class type>
class DoubleNode : public Node<Type>
{
private:
    DoubleNode<Type> * next;
    DoubleNode<Type> * prev;
public:
    DoubleNode(Type);
    DoubleNode(Type, DoubleNode<Type> * next, DoubleNode * prev);
}

template<class Type>
DoubleNode<Type>

#endif /* DoubleNode_h */
