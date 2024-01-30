//
// Created by Ender on 4/1/2024.
//

#ifndef MAIN_STUDENT_H
#define MAIN_STUDENT_H
using namespace std;
#include <iostream>
#include <sstream>
#include "Person.h"
#include "Courses.h"
class Student : public Person{
private:
    string major;
    Courses* vector[100];
    int tamano;


public:
    Student();
    Student(int id, const string &name, const string &major);

    ~Student();
    int getTamano() const;

    void setTamano(int tamano);
    string getMajor() ;
    void setMajor( string p_major);
    const string toString () override;
    void insertarCursos(Courses*);
    void eliminarCurso(string);
};



#endif //MAIN_STUDENT_H
