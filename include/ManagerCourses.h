//
// Created by Ender on 8/1/2024.
//

#ifndef MAIN_MANAGERCOURSES_H
#define MAIN_MANAGERCOURSES_H
#include <sstream>
//#include "Courses.h"
#include "NodeCourses.h"

using namespace std;

class ManagerCourses {
public:
    ManagerCourses();
    ~ManagerCourses();

    void insertCourse(Courses* course);
    string findByCode(string code);
    void deleteByCode(string code);
    string toString();



private:

    NodeCourses* head;
    NodeCourses* actual;
public:
    NodeCourses *getHead() const;

    void setHead(NodeCourses *head);

    NodeCourses *getActual() const;

    void setActual(NodeCourses *actual);

};
#endif //MAIN_MANAGERCOURSES_H
