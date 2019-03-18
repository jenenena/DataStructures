//
//  FileController.hpp
//  DataStructures
//
//  Created by Mills, Jenna on 2/5/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include "../Model/Linear/Array.hpp"
#include "../Model/Linear/LinkedList.hpp"

#include "../Resources/CrimeData.hpp"
#include "../Resources/Music.hpp"

#include "../Model/Linear/Stack.hpp"
#include "../Model/Linear/Queue.hpp"

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static LinkedList<CrimeData> readDataToList(string filename);
    static Stack<CrimeData>readCrimeDataToStack(string filename);
    static Queue<CrimeData>readCrimeDataToQueue(string filename);
    
    static vector<Music> musicDataToVector(string filename);
    static Array<Music> musicDataToArray(string filename);
    static LinkedList<Music> musicDataToList(string filename);
    static Stack<Music> musicDataToStack(string filename);
    static Queue<Music> musicDataToQueue(string filename);
};

#endif /* FileController_hpp */
