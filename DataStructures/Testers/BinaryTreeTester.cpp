//
//  BinaryTreeTester.cpp
//  DataStructures
//
//  Created by Mills, Jenna on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "BinaryTreeTester.hpp"
#include "/Users/jmil1416/Desktop/C++Workspace/DataStructures/DataStructures/Model/New Group/BinarySearchTree.hpp"
#include "/Users/jmil1416/Desktop/C++Workspace/DataStructures/DataStructures/Model/Nodes/BinaryTreeNode.hpp"

void BinaryTreeTester :: doTreeStuff()
{
    testTree.insert(7);
    testTree.insert(1);
    testTree.insert(24);
    testTree.insert(6);
    testTree.insert(66);
    testTree.insert(5);
    testTree.insert(25);
    testTree.insert(4380);
    testTree.insert(99);
    testTree.insert(9001);
    testTree.insert(101);
    
    testTree.inOrderTraversal();
    testTree.preOrderTraversal();
    testTree.postOrderTraversal();
    
    testTree.isBalanced();
    testTree.isComplete();
    testTree.getHeight();
}
