//
// Created by Ender on 4/1/2024.
//

#ifndef MAIN_STUDENT_H
#define MAIN_STUDENT_H

#include "Person.h"
#include "Courses.h"

class Student : public Person {
private:
    string major;
    int tamano;
public:
    Courses *vector[100];

    Student();

    Student(int id, const string &name, string &major, int tam);

    ~Student();

    Courses *getVector();

    void setTamano(int tamano);

    string getMajor();

    int getTamano();

    void setMajor(string p_major);

    const string toString() override;

    void insertarCursos(Courses *);

    void eliminarCurso(string);

};


#endif //MAIN_STUDENT_H
