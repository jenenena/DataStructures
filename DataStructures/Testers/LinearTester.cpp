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
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/jmil1416/Desktop/C++Workspace/DataStructures/DataStructures/Data/crime.csv")
    crimeTimerOOP.stopTimer();
    
    cout << "This is the STL: " << endl;
    crimeTimerSTL.displayInformation();
    cout << "This is the OOP node: " << endl;
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    musicSTL.startTimer();
    vector<Music> tunez = FileController :: musicDataToVector("/Users/jmil1416/Desktop/C++Workspace/DataStructures/DataStructures/Data/music.csv")
    musicTimerSTL.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<Music> musicList = FileController :: readDataToList("/Users/jmil1416/Desktop/C++Workspace/DataStructures/DataStructures/Data/music.csv");
    musicOOP.stopTimer();
    
    cout << "This is the STL: " << endl;
    musicSTL.displayInformation();
    cout << "This is the OOP node: " << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerSTL.resetTimer();
    musicOOP.resetTimer();
    musicSTL.resetTimer();
}
