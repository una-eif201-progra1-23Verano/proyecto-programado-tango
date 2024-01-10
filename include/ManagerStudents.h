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
class ManagerStudents{
private:
    Node* header;

public:
    ManagerStudents() : header(nullptr){}
    ~ManagerStudents();

    void newStudent(Student student);
    void showList() const;
};



#endif //MAIN_MANAGERSTUDENTS_H
