/*
Name: Justin Rivas
Coding Final Project
Purpose: Creating a String object similar to Python.
*/

#include "mystring.h"

MyString::MyString(const char *strInput){
    int newLength = countChars(strInput);
    array = new char[newLength + 1];
    for(int i = 0; i < newLength; i++){
        array[i] = strInput[i];
    }
    length = newLength;
}

int MyString::countChars(const char *str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

MyString::MyString(){
    length = 0;
    array = new char[EMPTYSTRING];
}

MyString::~MyString(){
    delete[] array;
}

char* MyString::getString(){
    return array;
}

void MyString::convertToUpper(int i){
    if(array[i]>='a' && array[i]<='z') { 
        array[i]=array[i]-32; 
    } 
}

void MyString::convertToLower(int i){
    if(array[i]>='A' && array[i]<='Z') { 
        array[i]=array[i]+32; 
    } 
}

void MyString::upper(bool uppercase){
    convertToUpper(0);
    if(uppercase){
        for(int i = 1; i < length; i++){
            convertToUpper(i);
        }
    } else{
        for(int i = 1; i < length; i++){
            convertToLower(i);
        }
     }
}

void MyString::lower(bool lowercase){
    convertToLower(0);
    if(lowercase){
        for(int i = 1; i < length; i++){
            convertToLower(i);
        }
    } else{
        for(int i = 1; i < length; i++){
            convertToUpper(i);
        }
     }
}


char* MyString::reverse(bool reversed){
    int i = 0;
    int j = length - 1;
    char temp;
    if(reversed){
        while(i < j){
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }

    return array;
}

int MyString::count(char letter){
    int count = 0;
    for(int i = 0; i < length; i++){
        if(array[i] == letter){
            count++;
        }
    }
    return count;
}

void MyString::swap(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

bool MyString::checkBoundaries(int index1, int index2){

    return index1 >= 0 && index2 < length;
}

char* MyString::substring(int index1, int index2, bool cut){
    char* newString = new char[length];

    if(index1 > index2){
        swap(&index1, &index2);
    }

    if(cut && checkBoundaries(index1, index2)){
        int i = 0;
        while(index1 != index2 + 1){
            newString[i] = array[index1];
            i++;
            index1++;
        }
    } else if(cut){
        cout << "index out of range" << endl;
    }
    return newString;
}

void MyString::set(const char *newValue){
    int newLength = countChars(newValue);
    array = new char[newLength + 1];
    for(int i = 0; i < newLength; i++){
        array[i] = newValue[i];
    }
    length = newLength;
}

char* MyString::cat(const char *catString){
    int newLength = length + countChars(catString);
    char *oldValue = getString();
    array = new char[newLength + 1];
    for(int i = 0; i < length; i++){
        array[i] = oldValue[i];
    }
    int j = 0;
    for(int i = length; i < newLength; i++){
        array[i] = catString[j];
        j++;
    }
    length = newLength;
    return array;
}

void MyString::clear(){
    length = 0;
    array = new char[EMPTYSTRING];

}

int MyString::strLength(){
    return length;
}
