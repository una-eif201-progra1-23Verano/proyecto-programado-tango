#include "NodeCourses.h"
#include <iostream>
/*!
 
\brief insertOption inserts a new option at the beginning of the linked list.
\param head is the head of the linked list.
\param opt is the option to be inserted.
*/
/*
NodeCourses::NodeCourses(){
courses=nullptr;
next=nullptr;
}
NodeCourses::NodeCourses(Courses* novo){
    courses=novo;
    next=nullptr;
}
void NodeCourses::setCourses(Courses* coursess){
    courses=coursess;
}
void NodeCourses::setNext( NodeCourses* nextt){
    next=nextt;
}
Courses* NodeCourses::getCourses(){
    return courses;
}
NodeCourses* NodeCourses::getNext(){
    return next;
}
void NodeCourses::insertOption(NodeCourses** head, const std::string& opt) {
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