//
// Created by Ender on 8/1/2024.
//

#ifndef MAIN_MANAGERCOURSES_H
#define MAIN_MANAGERCOURSES_H
#include "Courses.h"
using namespace std;
 struct Node {
       Courses info;
        Node* next;
      Node(Courses courses): info(courses), next(nullptr){}
  private:
    Node* header;

public:
    LinkedList() : header(nullptr){}
    ~LinkedList();

    void newCourses(Courses courses);
    void showList() const;
};
class LinkedList{
class ManagerCourses {
};


#endif //MAIN_MANAGERCOURSES_H
