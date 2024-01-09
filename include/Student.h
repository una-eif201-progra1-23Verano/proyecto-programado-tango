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

    int getId() const;
    void setId(int p_id);

    const string &getName() const;
    void setName(const string &p_name);

    const string &getMajor() const;
    void setMajor(const string &p_major);


};



#endif //MAIN_STUDENT_H
