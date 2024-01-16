//
// Created by Ender on 4/1/2024.
//

#ifndef MAIN_STUDENT_H
#define MAIN_STUDENT_H
using namespace std;
#include <iostream>
#include <sstream>

class Student {
private:
   int id;
   string name;
   string major;

public:
    Student();
    Student(int p_id, const string &p_name, const string &p_major);

    ~Student();

    int getId() ;
    void setId(int p_id);

    string getName() ;
    void setName(string p_name);

    string getMajor() ;
    void setMajor( string p_major);

    string toString();
};



#endif //MAIN_STUDENT_H
