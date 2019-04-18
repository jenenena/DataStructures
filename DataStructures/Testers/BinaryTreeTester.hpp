//
//  BinaryTreeTester.hpp
//  DataStructures
//
//  Created by Mills, Jenna on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include <iostream>
#include "../Model/Nodes/BinaryTreeNode.hpp"
#include "../Model/Nonlinear/BinarySearchTree.hpp"

class BinaryTreeTester
{
public:
    void doTreeStuff();
private:
    BinaryTreeNode<int> testNode;
    BinarySearchNode<int> testTree;
};

#endif /* BinaryTreeTester_hpp */
