/*
Name: Justin Rivas
Coding Final Project
Purpose: Creating a String object similar to Python.
*/

#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>     /* cout, endl */

#define EMPTYSTRING 1

using std::cout;
using std::endl;

class MyString{
public:

    MyString(const char*);
    MyString();
    ~MyString();
    int strLength();
    char* getString();
    void upper(bool = true);
    void lower(bool = true);
    char* reverse(bool = false);
    int count(char);
    char* substring(int, int, bool = false);
    void set(const char*);
    char* cat(const char*);
    void clear();

private:
    void convertToUpper(int);
    void convertToLower(int);
    int countChars(const char*);
    bool checkBoundaries(int, int);
    void swap(int*, int*);
    int length;
    char *array;
    char string;
};

#endif