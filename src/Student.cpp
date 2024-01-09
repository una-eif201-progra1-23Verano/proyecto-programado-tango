// Student.cpp
#include "Student.h"

// Default constructor
Student::Student() : id(0), name(""), major("") {}

// Parameterized constructor
Student::Student(int p_id, const string &p_name, const string &p_major) : id(p_id), name(p_name), major(p_major) {}

// Destructor
Student::~Student() {}

// Getter function for ID
int Student::getId() const {
    return id;
}

// Setter function for ID
void Student::setId(int p_id) {
    id = p_id;
}

// Getter function for name
const string &Student::getName() const {
    return name;
}

// Setter function for name
void Student::setName(const string &p_name) {
    name = p_name;
}

// Getter function for major
const string &Student::getMajor() const {
    return major;
}

// Setter function for major
void Student::setMajor(const string &p_major) {
    major = p_major;
}
