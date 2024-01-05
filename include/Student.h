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
   string carrera;
public:
    Student();
    Student(int p_id, const string &p_name, const string &p_carrera);
    virtual ~Student();

    int getId() const;

    void setId(int p_id);

    const string &getName() const;

    void setName(const string &p_name);

    const string &getCarrera() const;

    void setCarrera(const string &p_carrera);
};


#endif //MAIN_STUDENT_H
