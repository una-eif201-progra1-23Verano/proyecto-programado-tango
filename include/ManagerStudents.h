//
// Created by Ender on 8/1/2024.
//

#ifndef MAIN_MANAGERSTUDENTS_H
#define MAIN_MANAGERSTUDENTS_H
#include "Student.h"
using namespace std;

struct Node{
    Student info;
    Node* next;

    Node(Student student): info(student), next(nullptr){}
};

//lista enlazada
class LinkedList{
private:
    Node* header;

public:
    LinkedList() : header(nullptr){}
    ~LinkedList();

    void newStudent(Student student);
    void showList() const;
};
class ManagerStudents {

};


#endif //MAIN_MANAGERSTUDENTS_H
