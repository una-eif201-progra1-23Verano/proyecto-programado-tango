//
// Created by Ender on 4/1/2024.
//

#ifndef MAIN_STUDENT_H
#define MAIN_STUDENT_H
using namespace std;
#include <iostream>
#include <sstream>
#include "Person.h"

class Student : public Person{
private:
   string major;

public:
    Student();
    Student(int p_id, const string &p_name, const string &p_major);

    ~Student();


    string getMajor() ;
    void setMajor( string p_major);

    string toString();
};



#endif //MAIN_STUDENT_H
