//
//  CrimeData.cpp
//  MorningMegaProject
//
//  Created by Cody Henrichsen on 3/27/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#include "CrimeData.hpp"

CrimeData :: CrimeData()
{
    //Included for compilation of data structures.
    //We need a no parameter constructor.
}


CrimeData :: CrimeData(string currentCSVLine)
{
    stringstream parseCSV(currentCSVLine);
    
    string department, tempPopulation, tempProperty, tempBurglary, tempLarceny, tempMotor, tempViolent, tempAssault, tempMurder, tempRape, tempRobbery, state, tempAllProperty, tempAllBurglary, tempAllLarceny, tempAllMotor, tempAllViolent, tempAllAssault, tempAllMurder, tempAllRape, tempAllRobbery, tempYear;
    
    getline(parseCSV, department, ',');
    getline(parseCSV, tempPopulation, ',');
    getline(parseCSV, tempProperty, ',');
    getline(parseCSV, tempBurglary, ',');
    getline(parseCSV, tempLarceny, ',');
    getline(parseCSV, tempMotor, ',');
    getline(parseCSV, tempViolent, ',');
    getline(parseCSV, tempAssault, ',');
    getline(parseCSV, tempMurder, ',');
    getline(parseCSV, tempRape, ',');
    getline(parseCSV, tempRobbery, ',');
    getline(parseCSV, state, ',');
    getline(parseCSV, tempAllProperty, ',');
    getline(parseCSV, tempAllBurglary, ',');
    getline(parseCSV, tempAllLarceny, ',');
    getline(parseCSV, tempAllMotor, ',');
    getline(parseCSV, tempAllViolent, ',');
    getline(parseCSV, tempAllAssault, ',');
    getline(parseCSV, tempAllMurder, ',');
    getline(parseCSV, tempAllRape, ',');
    getline(parseCSV, tempAllRobbery, ',');
    getline(parseCSV, tempYear, ',');
    
    this->department = department;
    this->population = (stoi(tempPopulation));
    this->allPropertyRates = (stod(tempProperty));
    this->burglaryRates = (stod(tempBurglary));
    this->larcenyRates = (stod(tempLarceny));
    this->motorRates = (stod(tempMotor));
    this->allViolentRates = (stod(tempViolent));
    this->assaultRates = (stod(tempAssault));
    this->murderRates = (stod(tempMurder));
    this->rapeRates = (stod(tempRape));
    this->robberyRates = (stod(tempRobbery));
    this->state = state;
    this->allPropertyCrime = (stoi(tempAllProperty));
    this->allBurglary = (stoi(tempAllBurglary));
    this->allLarceny = (stoi(tempAllLarceny));
    this->allMotor = (stoi(tempAllMotor));
    this->allViolent = (stoi(tempAllViolent));
    this->allAssault = (stoi(tempAllAssault));
    this->allMurder = (stoi(tempAllMurder));
    this->allRape = (stoi(tempAllRape));
    this->allRobbery = (stoi(tempAllRobbery));
    this->year = (stoi(tempYear));
}
/**
 Used for output either to a screen or a file using the << operator.
 It is a "friend" since that is how we are able to use the output stream.
 */
ostream & operator << (ostream &outputStream, const CrimeData & outputData)
{
    return outputStream << outputData.getDepartment() << " had an all violent rate of " << outputData.getAllViolentRates() << " in year: " << outputData.getYear();
}

/**
 Getters
 */

string CrimeData :: getDepartment() const
{
    return department;
}

int CrimeData :: getPopulation() const
{
    return population;
}

double CrimeData :: getAllPropertyRates() const
{
    return allPropertyRates;
}

double CrimeData :: getBurglaryRates() const
{
    return burglaryRates;
}

double CrimeData :: getLarcenyRates() const
{
    return larcenyRates;
}

double CrimeData :: getMotorRates() const
{
    return motorRates;
}

double CrimeData :: getAllViolentRates() const
{
    return allViolentRates;
}

double CrimeData :: getAssaultRates() const
{
    return assaultRates;
}

double CrimeData :: getMurderRates() const
{
    return murderRates;
}

double CrimeData :: getRapeRates() const
{
    return rapeRates;
}

double CrimeData :: getRobberyRates() const
{
    return robberyRates;
}

string CrimeData :: getState() const
{
    return state;
}

int CrimeData :: getAllPropertyCrime() const
{
    return allPropertyCrime;
}
int CrimeData :: getAllBurglary() const
{
    return allBurglary;
}

int CrimeData :: getAllLarceny() const
{
    return allLarceny;
}

int CrimeData :: getAllMotor() const
{
    return allMotor;
}

int CrimeData :: getAllViolent() const
{
    return allViolent;
}

int CrimeData :: getAllAssault() const
{
    return allAssault;
}

int CrimeData :: getAllMurder() const
{
    return allMurder;
}

int CrimeData :: getAllRape() const
{
    return allRape;
}

int CrimeData :: getAllRobbery() const
{
    return allRobbery;
}

int CrimeData :: getYear() const
{
    return year;
}

/**
 Overloaded operators so that the CrimeData objects can be compared and sorted.
 */

bool CrimeData :: operator < (const CrimeData & comparedData)
{
    bool thisIsLessCrime = false;
    double comparisonFactor = 0.0;
    
    if(this->getAllViolent() < comparedData.getAllViolent())
    {
        comparisonFactor -= 3;
    }
    else
    {
        comparisonFactor += 3;
    }
    
    if(this->getAllPropertyRates() < comparedData.getAllPropertyRates())
    {
        comparisonFactor -= 2.5;
    }
    else
    {
        comparisonFactor += 2.5;
    }
    
    if(this->getAllViolentRates() < comparedData.getAllViolentRates())
    {
        comparisonFactor -= 5;
    }
    else
    {
        comparisonFactor += 5;
    }
    
    if(this->getMurderRates() < comparedData.getMurderRates())
    {
        comparisonFactor -= 3;
    }
    else
    {
        comparisonFactor += 3;
    }
    
    double populationDifference = (this->getPopulation() - comparedData.getPopulation());
    populationDifference = abs(populationDifference);
    double populationFactor = 0;
    
    if(populationDifference >= 50000 && populationDifference < 250000)
    {
        populationFactor = .5;
    }
    else if(populationDifference >= 250000 && populationDifference < 500000)
    {
        populationFactor = 1.5;
    }
    else if(populationDifference >= 500000 && populationDifference < 1000000)
    {
        populationFactor = 2.0;
    }
    else if(populationDifference >= 1000000)
    {
        populationFactor = 2.5;
    }
    
    comparisonFactor += populationFactor;
    
    if(comparisonFactor < 0)
    {
        thisIsLessCrime = true;
    }
    return thisIsLessCrime;
}

bool CrimeData :: operator > (const CrimeData & comparedData)
{
    bool thisIsMoreCrime = false;
    double comparisonFactor = 0.0;
    
    if(this->getAllViolent() > comparedData.getAllViolent())
    {
        comparisonFactor += 3;
    }
    else
    {
        comparisonFactor -= 3;
    }
    
    if(this->getAllPropertyRates() > comparedData.getAllPropertyRates())
    {
        comparisonFactor += 2.5;
    }
    else
    {
        comparisonFactor -= 2.5;
    }
    
    if(this->getAllViolentRates() > comparedData.getAllViolentRates())
    {
        comparisonFactor += 5;
    }
    else
    {
        comparisonFactor -= 5;
    }
    
    if(this->getMurderRates() > comparedData.getMurderRates())
    {
        comparisonFactor += 3;
    }
    else
    {
        comparisonFactor -= 3;
    }
    
    double populationDifference = (this->getPopulation() - comparedData.getPopulation());
    populationDifference = abs(populationDifference);
    double populationFactor = 0;
    
    if(populationDifference >= 50000 && populationDifference < 250000)
    {
        populationFactor = .5;
    }
    else if(populationDifference >= 250000 && populationDifference < 500000)
    {
        populationFactor = 1.5;
    }
    else if(populationDifference >= 500000 && populationDifference < 1000000)
    {
        populationFactor = 2.0;
    }
    else if(populationDifference >= 1000000)
    {
        populationFactor = 2.5;
    }
    
    comparisonFactor += populationFactor;
    
    if(comparisonFactor > 0)
    {
        thisIsMoreCrime = true;
    }
    return thisIsMoreCrime;
}

bool CrimeData :: operator == (const CrimeData & compared)
{
    bool isThisTheSame = !(*this < compared) && !(*this > compared);
    
    return isThisTheSame;
}
