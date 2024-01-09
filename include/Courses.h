//
// Created by Ender on 8/1/2024.
//

#ifndef MAIN_COURSES_H
#define MAIN_COURSES_H
#include <iostream>
#include <sstream>
using namespace std;

class Courses {
private:
    string courseName;
    int grades;
    string courseCode;

public:
    Courses();
    Courses(const string &p_courseName, int p_grades, const string &p_courseCode);
    virtual ~Courses();

    const string &getCourseName() const;

    void setCourseName(const string &courseName);

    int getGrades() const;

    void setGrades(int grades);

    const string &getCourseCode() const;

    void setCourseCode(const string &courseCode);
    string toString();
};


#endif //MAIN_COURSES_H
