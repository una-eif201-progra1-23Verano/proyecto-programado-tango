//
// Created by Ennia on 13/1/2024.
//

#ifndef MAIN_NODECOURSES_H
#define MAIN_NODECOURSES_H
#include "Courses.h"
#include <iostream>
using namespace std;

struct NodeCourses{
public:
    //Atributos
    Courses* courses;
    NodeCourses* next;
    //Metodos
    NodeCourses();
    NodeCourses(Courses*);
    ~NodeCourses();
    void setCourses(Courses* coursess);
    void setNext(NodeCourses* nextt);
    Courses* getCourses();
    NodeCourses* getNext();
    void insertOption(NodeCourses** , const std::string&);
    void displayMenu(NodeCourses*);
    void handleOption(const std::string&);


};

#endif //MAIN_NODECOURSES_H
