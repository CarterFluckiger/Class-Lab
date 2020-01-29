//defines header start
#ifndef Header_h
#define Header_h

#include <string>
using namespace std;

//Stuct for array of classes
struct course
{
    //information for the course struct that each has a different one
    std::string coursename;
    float grade;
    std::string semester;
    int semesteryear;
};



class Student
{
    // public functions and variables
public:
    //Constructor
    Student();

    //Destructor
    ~Student();
    
    //functions that are defined in the public and can be used anywhere
    void SetName(string Name_);
    string GetName();
    float Getid();
    void Setid(float studentid_);
    void CourseInfo();
    void GPACalculate();
    float GetGPA();
    void Display();
    //private functions and variables
private:
    //private variable and functions that can only be used when specified
    char GPAInput;
    float studentid;
    float GPAcounter;
    float GPAindividual;
    float GPA;
    course course[100];
    string Name;
};
//defines header end
#endif /* Header_h */
