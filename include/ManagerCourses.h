//
// Created by Ender on 8/1/2024.
//

#ifndef MAIN_MANAGERCOURSES_H
#define MAIN_MANAGERCOURSES_H
#include "Courses.h"
#include <sstream>
//hacer con vector
using namespace std;

class ManagerCourses {
private:
    Courses *vectorCourses;
    int size;
    int capacity;
public:
    ManagerCourses();
    ManagerCourses(int);
    ~ManagerCourses();

    void setVectorCourses(Courses*);
    void setSize(int);
    void setCapacity(int);

    Courses* getVectorCourses();
    int getSize();
    int getCapacity();

    void addCourse(Courses*);
    void deleteCourse(int);
    void showList();
    string toString();
};


#endif //MAIN_MANAGERCOURSES_H
