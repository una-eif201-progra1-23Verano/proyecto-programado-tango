#include "NodeCourses.h"

NodeCourses::NodeCourses() {
    courses = nullptr;
    next = nullptr;
}

NodeCourses::NodeCourses(Courses *novo) {
    courses = novo;
    next = nullptr;
}

void NodeCourses::setCourses(Courses *coursess) {
    courses = coursess;
}

void NodeCourses::setNext(NodeCourses *nextt) {
    next = nextt;
}

Courses *NodeCourses::getCourses() {
    return courses;
}

NodeCourses *NodeCourses::getNext() {
    return next;
}
