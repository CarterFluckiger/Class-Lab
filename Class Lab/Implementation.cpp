//include for the header file
#include "Header.h"
#include <iostream>

using namespace std;

// Sets values preset and is hard coded
Student::Student()
{
    Name = "David Bush";
    studentid = 69420;
}

//Constructor and destructor
Student::~Student()
{
}
// Set function that sets studentid value
void Student::Setid(float studentid_)
{
    studentid=studentid_;
}
// Get function for id and returns value for studentid
float Student::Getid()
{
    return studentid;
}
//Function sets Name hard coded for use later
void Student::SetName(string Name_)
{
    Name = Name_;
}
// Get function that returns name function
string Student::GetName()
{
    return Name;
}
//CourseInfo() runs a for loop to initialize grades to int values
void Student::CourseInfo()
{
    //Pre condition- enters CourseInfo() in the main
    //Post condition- course[x].grade is initialized to int values of zero
    for(int x=99;x>=0;x--)
    {
        course[x].grade = 0;
    }
}
// function GPACalculate is for calculating the GPA
void Student::GPACalculate()
{
    //Pre condition- That the GPACalculate() function is started
    //Post condition- Searches through the array for GPA's of classes that have been taken
    for(int x=99;x>=0;x--)
       {
           //sets individual GPA's from individual array GPA's
           GPAindividual=0;
           //Sets GPA individual grade to grade for the class
           GPAindividual = course[x].grade;
           //If this if function runs it didn't have a class grade
           if(GPAindividual==0)
                     {
                         
                     }
           //else statement for classes with grades
           else{
           GPA=GPA+GPAindividual;
           GPAcounter++;
           }
           // finds GPA
           GPA=GPA/GPAcounter;
       }
}
//Get function that returns the GPA value
float Student::GetGPA()
{
    return GPA;
}
//Function that displays asking the user what classes with what grades they want to see
void Student::Display()
{
    cout<<"Please enter the grade of classes you would like to see(Enter a letter grade):\n";
    cin>>GPAInput;
    // Looks for grades that have an a
    if(GPAInput== 'A'||'a')
    {
        // For loop for looking through the arrays for a grades
        for(int j=99;j>=0;j--)
        {
            if(course[j].grade==4)
            {
                cout<<course[j].coursename<<endl<<course[j].semester<<" ";
                cout<<course[j].semesteryear<<endl;
            }
        }
    }
    //Looking for user input
    if(GPAInput== 'B'||'b')
    {
        //for loop for looking through the array for b's
      for(int j=99;j>=0;j--)
        {
            if(course[j].grade>=3 && course[j].grade<4)
            {
                cout<<course[j].coursename<<endl<<course[j].semester<<endl;
                cout<<course[j].semesteryear<<endl;
            }
        }
    }
    // Looking for userinput c
    if(GPAInput== 'C'||'c')
    {
        //for loop looking through the array for c grades
        for(int j=99;j>=0;j--)
               {
                   if(course[j].grade>=2 && course[j].grade<3)
                   {
                       cout<<course[j].coursename<<endl<<course[j].semester<<endl;
                       cout<<course[j].semesteryear<<endl;
                   }
               }
    }
    // looking for user input of d
    if(GPAInput== 'D'||'d')
    {
                //for loop looking through the array for d grades
        for(int j=99;j>=0;j--)
        {
            if(course[j].grade>=1 && course[j].grade<2)
            {
                cout<<course[j].coursename<<endl<<course[j].semester<<endl;
                cout<<course[j].semesteryear<<endl;
            }
        }
    }
}
