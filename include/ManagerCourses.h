//
// Created by Ender on 8/1/2024.
//

#ifndef MAIN_MANAGERCOURSES_H
#define MAIN_MANAGERCOURSES_H

#include "NodeCourses.h"


using namespace std;

class ManagerCourses {
public:
    ManagerCourses();

    ~ManagerCourses();

    void newCourse(NodeCourses *course);

    Courses *findByCode(string code);

    string printByCode(string code);

    void deleteByCode(string code);

    NodeCourses *getHead() const;

    void setHead(NodeCourses *head);

    NodeCourses *getActual() const;

    void setActual(NodeCourses *actual);

    NodeCourses *searchCourse(string);

    void showList();


private:

    NodeCourses *head;
    NodeCourses *actual;

};

#endif //MAIN_MANAGERCOURSES_H
