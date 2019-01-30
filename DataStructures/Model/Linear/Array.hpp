//
//  Array.hpp
//  DataStructures
//
//  Created by Mills, Jenna on 1/30/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp

#include <assert.h> //used to validate user supplied data
#include <iostream> //used to trace and debug statements

using namespace std;      //used for keyword access

template <class Type>
class Array
{
private:
    int size;
    Type * internalArray;
public:
    //constructor
    Array<Type>(int size);
    //copy constructor
    Array<Type>(const Array<Type> & toCopy);
    //destructor
    ~Array<Type>();
    //operators
    Array<Type> & operator = (const Array<Type> & toReplace);
    Type& operator [] (int index);
    Type operator [] (int index) const;
    //methods
    int getSize() const;
    Type getFromIndex(int index);
    void setAtIndex(int index, Type data);
};

//constructor
template <class Type>
Array<Type> :: Array(int size)
{
    assert(size > 0);
    this->size = size;
    internalArray = new Type[size];
}

//copy constructor
template <class Type>
Array<Type :: Array(const Array<Type> & toCopy)
{
    this->size = toCopy.getSize();
    //build data structure
    internalArray = newType[size];
    for(int index = 0; index < size; index++)
    {
        internalArray[index] = toCopy[index];
    }
}



#endif /* Array_hpp */
