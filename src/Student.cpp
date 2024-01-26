// Student.cpp
#include "Student.h"

// Default constructor
Student::Student() {
    major = "";}

// Parameterized constructor
Student::Student(int id, const string &name, const string &major) : Person(id, name) {
    this->major = major;
}

// Destructor
Student::~Student() {}

// Getters and setters
string Student::getMajor() {
    return major;
}

void Student::setMajor(string p_major) {
    major = p_major;
}

const string Student::toString() {
    stringstream s;
    s << "Student: " << endl;
    s << "Id: " << id << endl;
    s << "Name: " << name << endl;
    s << "Major: " << major << endl;
    return s.str();
}
