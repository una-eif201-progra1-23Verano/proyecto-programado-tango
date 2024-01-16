#include "Courses.h"

Courses::Courses() {
    courseName="";
    grades=0;
    courseCode="";
}
Courses::Courses(string cn,int g,string cc) {
    courseName=cn;
    grades=g;
    courseCode=cc;
}
Courses::~Courses() {

}

string Courses::getCourseName(){
    return courseName;
}

void Courses::setCourseName(string p_courseName) {
    Courses::courseName = p_courseName;
}

int Courses::getGrades(){
    return grades;
}

void Courses::setGrades(int p_grades) {
    Courses::grades = p_grades;
}

string Courses::getCourseCode(){
    return courseCode;
}

void Courses::setCourseCode(string p_courseCode) {
    Courses::courseCode = p_courseCode;
}
string Courses::toString(){
    stringstream s;
    s<< "Course: "<<courseName<<endl<<"NCR: "<<courseCode<<endl<<"Grade: "<<grades<<endl;
    return s.str();
}
