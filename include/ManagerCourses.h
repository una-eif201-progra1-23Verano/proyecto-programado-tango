//
// Created by Ender on 8/1/2024.
//

#ifndef MAIN_MANAGERCOURSES_H
#define MAIN_MANAGERCOURSES_H
#include <iostream>
#include <sstream>
#include "Courses.h"
using namespace std;
 struct Node {
        string option;
        Node* next;
    }; 
Node* head;
class ManagerCourses {
private:

public:
ManagerCourses();
~ManagerCourses();

};


#endif //MAIN_MANAGERCOURSES_H
