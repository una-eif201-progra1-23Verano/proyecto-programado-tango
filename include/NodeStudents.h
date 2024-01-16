#pragma once

#include "Student.h"
#include <iostream>
using namespace std;

struct NodeStudents{
public:
    //Atributos
    Student* student;
    NodeStudents* next;
    //Metodos
    NodeStudents();
    NodeStudents(Student*);
    ~NodeStudents();
    void setStudents(Student*);
    void setNext(NodeStudents*);
    Student* getStudents();
    NodeStudents* getNext();
    void insertOption(NodeStudents** , const std::string&);
    void displayMenu(NodeStudents*);
    void handleOption(const std::string&);


};

