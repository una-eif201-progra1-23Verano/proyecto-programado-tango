//
// Created by Ender on 8/1/2024.
//

#ifndef MAIN_MANAGERCOURSES_H
#define MAIN_MANAGERCOURSES_H
#include "Courses.h"
#include <sstream>
using namespace std;

class ManagerCourses {
    public:
        ManagerCourses();
        ~ManagerCourses();
        void insertCourse(Courses* course);
        string findByCode(string code);
        bool deleteByCode(string code);
        string toString();



    private:
        struct Node {
            Courses info;
            Node* next;
        };
        Node* head;
        Node* actual;
};


#endif //MAIN_MANAGERCOURSES_H
