//
// Created by Ennia on 13/1/2024.
//

#ifndef MAIN_NODECOURSES_H
#define MAIN_NODECOURSES_H

#include "Courses.h"


using namespace std;

struct NodeCourses {
private:
    //Atributos
    Courses *courses;
    NodeCourses *next;
public:
    NodeCourses();

    NodeCourses(Courses *);

    ~NodeCourses();

    void setCourses(Courses *coursess);

    void setNext(NodeCourses *nextt);

    Courses *getCourses();

    NodeCourses *getNext();
};

#endif //MAIN_NODECOURSES_H
