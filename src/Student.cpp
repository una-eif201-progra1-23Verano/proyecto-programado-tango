// Student.cpp
#include "Student.h"

// Default constructor
Student::Student() : id(0), name(""), major("") {}

// Parameterized constructor
Student::Student(int p_id, const string &p_name, const string &p_major) : id(p_id), name(p_name), major(p_major) {}

// Destructor
Student::~Student() {

}

// Getter function for ID
int Student::getId() {
    return id;
}
// Getter function for name
string Student::getName()  {
    return name;
}

// Getter function for major
string Student::getMajor()  {
    return major;
}

// Setter function for ID
void Student::setId(int p_id) {
    id = p_id;
}

void Student::setName(string p_name) {
    name = p_name;
}

// Setter function for major
void Student::setMajor( string p_major) {
    major = p_major;
}

string Student::toString() {
    stringstream s;
    s<<"Name: "<<name<<endl<<"ID: "<<id<<endl<<"Major: "<<major<<endl;
    return  s.str();
}
