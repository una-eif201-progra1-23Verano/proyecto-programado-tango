//
// Created by Ender on 8/1/2024.
//

#include "Courses.h"

Courses::Courses() {
    this->courseName="";
    this->grades=0;
    this->courseCode="";
}

Courses::Courses(const string &p_courseName, int p_grades, const string &p_courseCode) : courseName(p_courseName),
                                                                                   grades(p_grades),
                                                                                   courseCode(p_courseCode) {}

Courses::~Courses() {

}

const string &Courses::getCourseName() const {
    return courseName;
}

void Courses::setCourseName(const string &p_courseName) {
    Courses::courseName = p_courseName;
}

int Courses::getGrades() const {
    return grades;
}

void Courses::setGrades(int p_grades) {
    Courses::grades = p_grades;
}

const string &Courses::getCourseCode() const {
    return courseCode;
}

void Courses::setCourseCode(const string &p_courseCode) {
    Courses::courseCode = p_courseCode;
}
