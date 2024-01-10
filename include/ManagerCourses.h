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
       Courses info;
        Node* next;
      Node(Student student): info(courses), next(nullptr){}
    }; 
Node* head;
class ManagerCourses {
private:

public:
ManagerCourses();
~ManagerCourses();

};


#endif //MAIN_MANAGERCOURSES_H
