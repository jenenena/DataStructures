//
//  CrimeData.hpp
//  MorningMegaProject
//
//  Created by Cody Henrichsen on 3/27/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#ifndef CrimeData_hpp
#define CrimeData_hpp

#include <string>
#include <cmath>    
#include <sstream> //String as stream

using namespace std;

class CrimeData
{
private:
    string department;
    int population;
    double allPropertyRates;
    double burglaryRates;
    double larcenyRates;
    double motorRates;
    double allViolentRates;
    double assaultRates;
    double murderRates;
    double rapeRates;
    double robberyRates;
    string state;
    int allPropertyCrime;
    int allBurglary;
    int allLarceny;
    int allMotor;
    int allViolent;
    int allAssault;
    int allMurder;
    int allRape;
    int allRobbery;
    int year;
    
public:
    CrimeData();
    CrimeData(string dataLine);
    
    string getDepartment() const;
    int getPopulation() const;
    double getAllPropertyRates() const;
    double getBurglaryRates() const;
    double getLarcenyRates() const;
    double getMotorRates() const;
    double getAllViolentRates() const;
    double getAssaultRates() const;
    double getMurderRates() const;
    double getRapeRates() const;
    double getRobberyRates() const;
    string getState() const;
    int getAllPropertyCrime() const;
    int getAllBurglary() const;
    int getAllLarceny() const;
    int getAllMotor() const;
    int getAllViolent() const;
    int getAllAssault() const;
    int getAllMurder() const;
    int getAllRape() const;
    int getAllRobbery() const;
    int getYear() const;
    
    
    
    bool operator < (const CrimeData & other);
    bool operator > (const CrimeData & other);
    bool operator == (const CrimeData & other);
    
    friend ostream & operator << (ostream &outputStream, const CrimeData & outputData);
};

#endif /* CrimeData_hpp */
