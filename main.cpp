/*
Name: Justin Rivas
Coding Final Project
Purpose: Creating a String object similar to Python.
*/

#include "main.h"

int main(int argc, char** argv){

    MyString helloworld("hello");
    MyString numbers("123");
    MyString mixedletters("aBcDeFgH");
    MyString countLetterTest("1beyebhab3bBBd");
    MyString empty;
    MyString racecar("racecar");

    cout << "These are the original strings." << endl;
    cout << helloworld.getString() << endl;
    cout << "The length of this string is" << endl;
    cout << helloworld.strLength() << endl;
    cout << numbers.getString() << endl;
    cout << "The length of this string is" << endl;
    cout << numbers.strLength() << endl;
    cout << mixedletters.getString() << endl;
    cout << "The length of this string is" << endl;
    cout << mixedletters.strLength() << endl;
    cout << countLetterTest.getString() << endl;
    cout << "The length of this string is" << endl;
    cout << countLetterTest.strLength() << endl;
    cout << "This is an empty string." << endl;
    cout << empty.getString() << endl;      
    cout << "The length of this string is" << endl;
    cout << empty.strLength() << endl;
    cout << endl;

    cout << "Testing the upper function." << endl;
    cout << "The upper function is default to true. If true it uppercases the whole word. If set to false it only uppercases the first letter and sets the rest of the word to lowercase." << endl;
    cout << endl;
    cout << "The original string is " << helloworld.getString() << endl;
    cout << "false" << endl;
    helloworld.upper(false);
    cout << helloworld.getString() << endl;
    cout << "true" << endl;
    helloworld.upper();
    cout << helloworld.getString() << endl;
    cout << "The original string is " << mixedletters.getString() << endl;
    cout << "false" << endl;
    mixedletters.upper(false);
    cout << mixedletters.getString() << endl;
    cout << "true" << endl;
    mixedletters.upper();
    cout << mixedletters.getString() << endl;
    cout << endl;

    cout << "Testing the lower function." << endl;
    cout << "The lower function is default to true. If true it lowercases the whole word. If set to false it only lowercases the first letter and sets the rest of the word to uppercase." << endl;
    cout << endl;
    cout << "The original string is " << helloworld.getString() << endl;
    cout << "false" << endl;
    helloworld.lower(false);
    cout << helloworld.getString() << endl;
    cout << "true" << endl;
    helloworld.lower();
    cout << helloworld.getString() << endl;
    cout << "The original string is " << mixedletters.getString() << endl;
    cout << "false" << endl;
    mixedletters.lower(false);
    cout << mixedletters.getString() << endl;
    cout << "true" << endl;
    mixedletters.lower();
    cout << mixedletters.getString() << endl;
    cout << endl;



    cout << "Testing reverse function" << endl;
    cout << "The reverse function reverses the string" << endl;
    cout << "If reverse set to true reverses string." << endl;
    cout << "If reverse set to false it does nothing." << endl;
    cout << endl;

    cout << "false" << endl;
    cout << helloworld.reverse() << endl;
    cout << "true" << endl;
    cout << helloworld.reverse(true) << endl;
    cout << "reversing it back" << endl;
    cout << helloworld.reverse(true) << endl;
    cout << "false" << endl;
    cout << numbers.reverse() << endl;
    cout << "true" << endl;
    cout << numbers.reverse(true) << endl;
    cout << "reversing it back" << endl;
    cout << numbers.reverse(true) << endl;
    cout << "false" << endl;
    cout << racecar.reverse() << endl;
    cout << "true" << endl;
    cout << racecar.reverse(true) << endl;
    cout << "reversing it back" << endl;
    cout << racecar.reverse(true) << endl;
    cout << endl;


    cout << "Testing count function." << endl;
    cout << "Count counts how many of each character there are in a string." << endl;
    cout << "Checking how many l's there are in " << helloworld.getString();
    cout << endl;
    cout << helloworld.count('l') << endl;
    cout << "Checking how many h's there are in " << helloworld.getString();
    cout << endl;
    cout << helloworld.count('h') << endl;
    cout << "Checking how many 2's there are in " << numbers.getString();
    cout << endl;
    cout << numbers.count('2') << endl;
    cout << "Checking how many !'s there are in " << numbers.getString();;
    cout << endl;
    cout << numbers.count('!') << endl;
    cout << "Checking how many B's there are in " << countLetterTest.getString();
    cout << endl;
    cout << countLetterTest.count('B') << endl;
    cout << "Checking how many b's there are in " << countLetterTest.getString();;
    cout << endl;
    cout << countLetterTest.count('b') << endl;
    cout << endl;

    cout << "Testing substring function" << endl;
    cout << "The substring function takes in 2 indicies and cuts the string at those 2 points if passed in true. The larger number is always the end index. If passed in false it does nothing." << endl;
    cout << "If index out of range it prints an error." << endl;
    cout << endl;
    cout << "Passing in 0 and 2" << endl;
    cout << helloworld.substring(0, 2, true) << endl;
    cout << "Passing in -1 and 2" << endl;
    cout << helloworld.substring(-1, 2, true) << endl;
    cout << "Passing in 0 and 0" << endl;
    cout << helloworld.substring(0, 0, true) << endl;
    cout << "Passing in 4 and 1" << endl;
    cout << helloworld.substring(4, 1, true) << endl;
    cout << "Passing in 1 and 1 but setting it to false" << endl;
    cout << helloworld.substring(4, 1, false) << endl;
    cout << endl;

    cout << "Testing set function." << endl;
    cout << "The set function takes in a new string and sets the string to that string." << endl;
    cout << endl;

    cout << "Here is the hello string." << endl;
    cout << helloworld.getString() << endl;
    cout << "Here is it's length." << endl;
    cout << helloworld.strLength() << endl;
    cout << "I'm changing it to Hello World with the set function." << endl;
    helloworld.set("Hello World");
    cout << helloworld.getString() << endl;
    cout << "Here is it's new length" << endl;
    cout << helloworld.strLength() << endl;
    cout << "Here is an empty string." << endl;
    cout << empty.getString() << endl;
    cout << "Here is it's length." << endl;
    cout << empty.strLength() << endl;
    cout << "I'm changing it to I am no longer empty with the set function." << endl;
    empty.set("I am no longer empty");
    cout << empty.getString() << endl;
    cout << "Here is it's new length" << endl;
    cout << empty.strLength() << endl;
    cout << endl;

    cout << "Testing cat function." << endl;
    cout << "The cat function takes in one string and appends that string to the original. It does not add a space." << endl;
    cout << endl;

    cout << "Here is the hello string." << endl;
    cout << helloworld.getString() << endl;
    cout << "Here is it's length." << endl;
    cout << helloworld.strLength() << endl;
    cout << "Appending I love coding to the end of the string." << endl;
    cout << helloworld.cat("I love coding") << endl;
    cout << "Here is it's length." << endl;
    cout << helloworld.strLength() << endl;
    cout << "Appending the numbers string object to the end of the string." << endl;
    cout << helloworld.cat(numbers.getString()) << endl;
    cout << helloworld.strLength() << endl;
    cout << endl;

    cout << "Testing clear function." << endl;
    cout << "Clear resets the function to an array with a length of 0 but saves a space for the null terminator" << endl;
    cout << endl;


    cout << "Here is the hello string." << endl;
    cout << helloworld.getString() << endl;
    cout << "Here is it's length." << endl;
    cout << helloworld.strLength() << endl;
    cout << "Clearing the string with the clear function." << endl;
    helloworld.clear();
    cout << "Here is the new hello string." << endl;
    cout << helloworld.getString() << endl;
    cout << "Here is it's length" << endl;
    cout << helloworld.strLength() << endl;
    cout << "Setting the string back to hello with the set function" << endl;
    helloworld.set("hello");
    cout << helloworld.getString() << endl;
    cout << "Here is it's length" << endl;
    cout << helloworld.strLength() << endl;

    return 0;
}