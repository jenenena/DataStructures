//
//  LinearTester.cpp
//  DataStructures
//
//  Created by Mills, Jenna on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "LinearTester.hpp"

void LinearTester :: testVsSTL()
{
    Timer crimeTimerSTL, crimeTimerOOP, musicSTL, musicOOP;
    
    crimeTimerSTL.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/jmil1416/Desktop/C++Workspace/DataStructures/DataStructures/Data/crime.csv")
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes - FileController :: readDataToList("/Users/jmil1416/Desktop/C++Workspace/DataStructures/DataStructures/Data/crime.csv")
    crimeTimerOOP.stopTimer();
    
}
