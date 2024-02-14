//
// Created by Ender on 8/1/2024.
//

#ifndef MAIN_MANAGERSTUDENTS_H
#define MAIN_MANAGERSTUDENTS_H

#include "NodeStudents.h"

using namespace std;

class ManagerStudents {
private:
    NodeStudents *header;
    NodeStudents *actual;
public:
    ManagerStudents();

    ManagerStudents(NodeStudents *);

    ManagerStudents(Student *);

    ~ManagerStudents();

    void setHead(NodeStudents *);

    void setActual(NodeStudents *);

    NodeStudents *getHead();

    NodeStudents *getActual();

    void newStudent(NodeStudents *);

    NodeStudents *searchStudent(int); //x
    void deleteStudent(int); //x
    void showList();

    string toString();
};


#endif //MAIN_MANAGERSTUDENTS_H
