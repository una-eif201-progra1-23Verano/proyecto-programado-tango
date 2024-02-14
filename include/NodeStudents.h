#pragma once

#include "Student.h"

struct NodeStudents { //pasar a ListStudent
private:
    //Atributos
    Student *student;
    NodeStudents *next;
public:
    //Metodos
    NodeStudents();

    NodeStudents(Student *);

    ~NodeStudents();

    void setStudents(Student *);

    void setNext(NodeStudents *);

    Student *getStudents();

    NodeStudents *getNext();


};

