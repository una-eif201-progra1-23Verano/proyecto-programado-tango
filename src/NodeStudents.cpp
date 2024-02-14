#include "NodeStudents.h"


NodeStudents::NodeStudents() {
    student = nullptr;
    next = nullptr;
}

NodeStudents::~NodeStudents() {
    delete student;
    delete next;
}

NodeStudents::NodeStudents(Student *novo) {
    student = novo;
    next = nullptr;
}

void NodeStudents::setStudents(Student *st) {
    student = st;
}

void NodeStudents::setNext(NodeStudents *nextt) {
    next = nextt;
}

Student *NodeStudents::getStudents() {
    return student;
}

NodeStudents *NodeStudents::getNext() {
    return next;
}
