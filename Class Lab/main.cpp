/*
 Carter Fluckiger
 Data Structure Spring 2020
 Due: January 28, 2020
 Lab: Creating a class and multiple functions and variables with the purpose of storing and using Student information. Also used, were get and set functions
*/
//Includes header
#include "Header.h"
//used for basic operands
#include <iostream>
//std for the cout functions
using namespace std;

int main()
{
    //Pre condition- None
    //Post condition- Constructor and destructor
    Student s;
    //Pre condition- None
    //Post condition- Initializes an array and sets grade values to zero
    s.CourseInfo();
    //Pre condition-None
    //Post condition- Runs GetName function and returns value for Name
    cout<<s.GetName()<<endl;
    //Pre condition- None
    //Post condition- Runs Getid function and returns value for id
    cout<<s.Getid()<<endl;
    //Pre condition- The GPA values must have valid inputs
    //Post condition- The GPA is calculated
    s.GPACalculate();
    //Pre condition-The GPA must have values and have been calculated
    //Post condition- Runs Get function and returns GPA as the value
    cout<<s.GetGPA()<<endl;
    //Pre condition- None
    //Post condition- function Display() that asks user to input the letter grade of the
    //classes that they would like to see and is optional
    s.Display();
    return 0;
}
