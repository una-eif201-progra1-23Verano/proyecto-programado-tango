//
// Created by Ender on 8/1/2024.
//

#ifndef COURSES_H
#define COURSES_H
#include <iostream>
#include <sstream>
using namespace std;

class Courses {
private:
    string courseName;
    int grades; //cambiar a grade
    string courseCode;

public:
    Courses();
    Courses(string,int,string);
    ~Courses();

    string getCourseName();

    void setCourseName(string courseName);

    int getGrades();

    void setGrades(int grades);

     string getCourseCode() ;

    void setCourseCode(string courseCode);

    string toString();
    
};


#endif //COURSES_H
