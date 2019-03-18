//
//  GraphTester.cpp
//  DataStructures
//
//  Created by Mills, Jenna on 3/18/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "GraphTester.hpp"

void GraphTester :: setup()
{
    puzzle.addVertex("a ");
    puzzle.addVertex("am ");
    puzzle.addVertex("are ");
    puzzle.addVertex("be ");
    puzzle.addVertex("computer ");
    puzzle.addVertex("difficult ");
    puzzle.addVertex("from ");
    puzzle.addVertex("grace ");
    puzzle.addVertex("is ");
    puzzle.addVertex("it ");
    puzzle.addVertex("lot ");
    puzzle.addVertex("mandatory ");
    puzzle.addVertex("megan ");
    puzzle.addVertex("must ");
    puzzle.addVertex("problems ");
    puzzle.addVertex("procedures ");
    puzzle.addVertex("relationships ");
    puzzle.addVertex("science ");
    puzzle.addVertex("she ");
    puzzle.addVertex("should ");
    puzzle.addVertex("smith ");
    puzzle.addVertex("solve ");
    puzzle.addVertex("state ");
    puzzle.addVertex("that ");
    puzzle.addVertex("the ");
    puzzle.addVertex("to ");
    puzzle.addVertex("understand ");
    puzzle.addVertex("very ");
    puzzle.addVertex("will.i.am ");
    puzzle.addVertex("you ");
    puzzle.addVertex("of ");
    puzzle.addVertex("top ");
    puzzle.addVertex("down ");
    puzzle.addVertex("it ");
    puzzle.addVertex("Epson ");
    puzzle.addVertex("Macbook ");
    puzzle.addVertex("study ");
    puzzle.addVertex("guide ");
    puzzle.addVertex("necessary ");
    puzzle.addVertex("16 ");
    puzzle.addVertex("17 ");
    puzzle.addVertex("18 ");
    puzzle.addVertex("19 ");
    puzzle.addVertex("11 ");
    puzzle.addVertex("14 ");
    puzzle.addVertex("12 ");
    puzzle.addVertex("10 ");
    puzzle.addVertex("Hopper ");
    
    
    
    puzzle.addEdgeUndirected(18,22);
    puzzle.addEdgeUndirected(2,7);
    puzzle.addEdgeUndirected(7,47);
    puzzle.addEdgeUndirected(46,44);
    
    
    puzzle.addEdge(17,28);
    puzzle.addEdge(28 ,43);
    puzzle.addEdge(12,20);
    puzzle.addEdge(12,39);
    puzzle.addEdge(9,8);
    puzzle.addEdge(33,19);
    puzzle.addEdge(9,27);
    puzzle.addEdge(6, 24);
    puzzle.addEdge(4, 17);
    puzzle.addEdge(5, 25);
    puzzle.addEdge(31,32);
    puzzle.addEdge(30, 14);
    puzzle.addEdge(3, 11);
    puzzle.addEdge(29, 26);
    puzzle.addEdge(28,28);
    puzzle.addEdge(9,5);
    puzzle.addEdge(26, 4);
    puzzle.addEdge(25,21);
    puzzle.addEdge(24, 31);
    puzzle.addEdge(23, 29);
    puzzle.addEdge(22, 1);
    puzzle.addEdge(21,0);
    puzzle.addEdge(19, 3);
    puzzle.addEdge(15, 23);
    puzzle.addEdge(14,6);
    puzzle.addEdge(11, 23);
    puzzle.addEdge(10, 30);
    puzzle.addEdge(1, 2);
    puzzle.addEdge(0, 10);
    
    puzzle.addEdgeCost(9,8, 20);
    puzzle.addEdgeCost(33,19, 13);
    puzzle.addEdgeCost(8,27, 13);
    puzzle.addEdgeCost(6, 24, 36);
    puzzle.addEdgeCost(4, 17, 568);
    puzzle.addEdgeCost(5, 25, 2);
    puzzle.addEdgeCost(31,32, 1);
    puzzle.addEdgeCost(30, 14, 13);
    puzzle.addEdgeCost(3, 11, 64);
    puzzle.addEdgeCost(29, 26, 85);
    puzzle.addEdgeCost(28,28, 12);
    puzzle.addEdgeCost(27,5, 4);
    puzzle.addEdgeCost(26, 4, 14);
    puzzle.addEdgeCost(25,21, 8);
    puzzle.addEdgeCost(24, 31, 78);
    puzzle.addEdgeCost(23, 29, 32);
    puzzle.addEdgeCost(22, 1, 5);
    puzzle.addEdgeCost(21,0, 98);
    puzzle.addEdgeCost(19, 3, 73);
    puzzle.addEdgeCost(15, 23, 26);
    puzzle.addEdgeCost(14,6, 83);
    puzzle.addEdgeCost(11, 23, 102);
    puzzle.addEdgeCost(10, 30, 42);
    puzzle.addEdgeCost(1, 2, 3);
    puzzle.addEdgeCost(0, 10, 1);
    puzzle.addEdgeCost(7, 15, 32);
    puzzle.addEdgeCost(12, 22, 13);
    puzzle.addEdgeCost(13, 15, 88);
    puzzle.addEdgeCost(19, 13, 21);
    
}

void GraphTester :: testGraphs()
{
    setup();
    compareTraversals();
    findCheapestTraversal();
}

void GraphTester :: compareTraversals() //THIS MIGHT STILL NEED WORK?
{
    for(int i = 0; i < puzzle.size(); i++)
    {
        puzzle.breadthFirstTraversal(puzzle, i);
    }
    for(int i = 0; i < puzzle.size(); i++)
    {
        puzzle.depthFirstTraversal(puzzle, i);
    }
}

void GraphTester :: findCheapestTraversal()
{
    //STILL NEED TO DO THIS
}
