//
//  FileController.cpp
//  DataStructures
//
//  Created by Mills, Jenna on 2/5/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "FileController.hpp"

//CRIME DATA ---------------------------------------------

//CRIME DATA VECTOR

vector<CrimeData> FileController :: readCrimeDataToVector(string filename)
{
    std :: vector<CrimeData> crimeVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //if the file exists at that path
    if (dataFile.is_open())
    {
        //keep reading until you reach the end of the line
        while (!dataFile.eof())
        {
            //Grab each line from the CSV separated by the carriage return character
            getline(dataFile, currentCSVLine, '\r');
            //Exclude header row
            if (rowCount != 0)
            {
                //Create a CrimeData instance from the line. exclude a blank line (usually if opened separately)
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimeVector.push_back(row);
                }
            }
        }
    }
    
    //CRIME DATA LINKED LIST
    
    LinkedList<CrimeData> FileController :: readDataToList(string filename)
    {
        LinkedList<CrimeData> crimes;
        
        string currentCSVLine;
        int rowCount = 0;
        
        ifstream dataFile(filename);
        
        //If the file exists at that path
        if (dataFile.is_open())
        {
            //Keep reading until at the end of the file
            while (!dataFile.eof())
            {
                //Grab each line from the CSV separated by the carriage return character
                getline(dataFile, currentCSVLine, '\r');
                //Exclude header row
                if (rowCount != 0)
                {
                    //Create a CrimeData instance from the line. Exclude a blank line (usually if opened separately)
                    if(currentCSVLine.length() != 0)
                    {
                        CrimeData row(currentCSVLine);
                        crimed.add(row);
                    }
                }
                rowCount++;
            }
            dataFile.close();
        }
        else
        {
            cerr << "NO FILE" << endl;
        }
        return crimes;
    }

    //CRIME DATA STACK
    
    Stack<CrimeData> FileController :: readCrimeDataToStack(string filename)
    {
        Stack<CrimeData> crimes;
        
        string currentCSVLine;
        int rowCount = 0;
        
        ifstream dataFile(filename);
        
        //If the file exists at that path
        if (dataFile.is_open())
        {
            //Keep reading until at the end of the file
            while (!dataFile.eof())
            {
                //Grab each line from the CSV separated by the carriage return character
                getline(dataFile, currentCSVLine, '\r');
                //Exclude header row
                if (rowCount != 0)
                {
                    //Create a CrimeData instance from the line. Exclude a blank line (usually if opened separately)
                    if(currentCSVLine.length() != 0)
                    {
                        CrimeData row(currentCSVLine);
                        crimes.push(row);
                    }
                }
                rowCount++;
            }
            dataFile.close();
        }
        else
        {
            cerr << "NO FILE" << endl;
        }
        return crimes;
    }

    
    //CRIME DATA QUEUE
    
    Queue<CrimeData> FileController :: readCrimeDataToQueue(string filename)
    {
        Queue<CrimeData> crimes;
        
        string currentCSVLine;
        int rowCount = 0;
        
        ifstream dataFile(filename);
        
        //If the file exists at that path
        if (dataFile.is_open())
        {
            //Keep reading until at the end of the file
            while (!dataFile.eof())
            {
                //Grab each line from the CSV separated by the carriage return character
                getline(dataFile, currentCSVLine, '\r');
                //Exclude header row
                if (rowCount != 0)
                {
                    //Create a CrimeData instance from the line. Exclude a blank line (usually if opened separately)
                    if(currentCSVLine.length() != 0)
                    {
                        CrimeData row(currentCSVLine);
                        crimes.enqueue(row);
                    }
                }
                rowCount++;
            }
            dataFile.close();
        }
        else
        {
            cerr << "NO FILE" << endl;
        }
        return crimes;
    }

    //MUSIC DATA ---------------------------------------------
    
    //MUSIC VECTOR
    
    vector<Music> FileController :: readMusicDataToVector(string filename)
    {
        std :: vector<Music> musicVector;
        string currentCSVLine;
        int rowCount = 0;
        
        ifstream dataFile(filename);
        
        //if the file exists at that path
        if (dataFile.is_open())
        {
            //keep reading until you reach the end of the line
            while (!dataFile.eof())
            {
                //Grab each line from the CSV separated by the carriage return character
                getline(dataFile, currentCSVLine, '\r');
                //Exclude header row
                if (rowCount != 0)
                {
                    //Create a CrimeData instance from the line. exclude a blank line (usually if opened separately)
                    if(currentCSVLine.length() != 0)
                    {
                        Music row(currentCSVLine);
                        musicVector.push_back(row);
                    }
                }
            }
        }
        
    //MUSIC LINKED LIST
        
LinkedList<Music> FileController :: musicDataToList(string filename)
{
    LinkedList<Music> musicList;
    
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //If the file exists at that path
    if (dataFile.is_open())
    {
        //Keep reading until at the end of the file
        while (!dataFile.eof())
        {
            //Grab each line from the CSV separated by the carriage return character
            getline(dataFile, currentCSVLine, '\r');
            //Exclude header row
            if (rowCount != 0)
            {
                //Create a CrimeData instance from the line. Exclude a blank line (usually if opened separately)
                if(currentCSVLine.length() != 0)
                {
                    Music row(currentCSVLine);
                    musicList.add(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    return musicList;
    }
}

//MUSIC STACK

Stack<Music> FileController :: musicDataToStack(string filename)
{
    Stack<Music> musicList;
    
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //If the file exists at that path
    if (dataFile.is_open())
    {
        //Keep reading until at the end of the file
        while (!dataFile.eof())
        {
            //Grab each line from the CSV separated by the carriage return character
            getline(dataFile, currentCSVLine, '\r');
            //Exclude header row
            if (rowCount != 0 &&  rowCount <= 10)
            {
                //Create a CrimeData instance from the line. Exclude a blank line (usually if opened separately)
                if(currentCSVLine.length() != 0)
                {
                    Music row(currentCSVLine);
                    musicList.push(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    return musicList;
}

//MUSIC QUEUE

Queue<Music> FileController :: musicDataToQueue(string filename)
{
    Queue<Music> musicList;
    
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //If the file exists at that path
    if (dataFile.is_open())
    {
        //Keep reading until at the end of the file
        while (!dataFile.eof())
        {
            //Grab each line from the CSV separated by the carriage return character
            getline(dataFile, currentCSVLine, '\r');
            //Exclude header row
            if (rowCount != 0 && rowCount <= 10)
            {
                //Create a CrimeData instance from the line. Exclude a blank line (usually if opened separately)
                if(currentCSVLine.length() != 0)
                {
                    Music row(currentCSVLine);
                    musicList.enqueue(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    return musicList;
}
    
};
