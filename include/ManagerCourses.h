//
// Created by Ender on 8/1/2024.
//

#ifndef MAIN_MANAGERCOURSES_H
#define MAIN_MANAGERCOURSES_H
#include <iostream>
#include <sstream>
using namespace std;

class ManagerCourses {
private:
   struct Node {
        string option;
        Node* next;
    };
    Node* head;
public:
ManagerCourses();
~ManagerCourses();

};


#endif //MAIN_MANAGERCOURSES_H
