#include "NodeStudents.h"
#include <iostream>


NodeStudents::NodeStudents(){
    student=nullptr;
    next=nullptr;
}

NodeStudents::~NodeStudents(){
  delete student;
  delete next;
}
NodeStudents::NodeStudents(Student* novo){
    student=novo;
    next=nullptr;
}

void NodeStudents::setStudents(Student* st){
    student=st;
}
void NodeStudents::setNext( NodeStudents* nextt){
    next=nextt;
}
Student* NodeStudents::getStudents(){
    return student;
}
NodeStudents* NodeStudents::getNext(){
    return next;
}
/*
 * void NodeCourses::insertOption(NodeCourses** head, const std::string& opt) {
    NodeCourses* newNode = new NodeCourses();
   // newNode->option = opt;
    newNode->next = (*head);
    (*head) = newNode;
}

void NodeCourses::displayMenu(NodeCourses* node) {
    while (node != nullptr) { //NODE != NULL;
        std::cout << node->option << std::endl;
        node = node->next;
    }
}

void NodeCourses::handleOption(const std::string& opt) {
    if (opt == "opt1") {
        std::cout << "Option 1 selected" << std::endl;
        // Implement option 1 functionality
    } else if (opt == "opt2") {
        std::cout << "Option 2 selected" << std::endl;
        // Implement option 2 functionality
    }
}*/