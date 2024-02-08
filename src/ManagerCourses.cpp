//
// Created by Ender on 8/1/2024.
//
#include "ManagerCourses.h"
ManagerCourses::ManagerCourses()
{
    head= nullptr;
    actual= nullptr;
}
void ManagerCourses::insertCourse(Courses* course) {
    actual=head;
    if(head== nullptr) {
        head = new NodeCourses(course);
    }
    else{
        while (actual);

    }
}
void ManagerCourses::deleteByCode(string code) {

}

string ManagerCourses:: findByCode(string code){
    stringstream s;
    actual=head;

    while(actual != nullptr){
        Courses *CourseInfo = dynamic_cast<Courses *>(actual->getCourses());
        if(CourseInfo && CourseInfo-> getCourseCode() == code){

            s<<CourseInfo->toString();
        }

    }
    return s.str();
}

NodeCourses *ManagerCourses::getHead() const {
    return head;
}

void ManagerCourses::setHead(NodeCourses *head) {
    ManagerCourses::head = head;
}

NodeCourses *ManagerCourses::getActual() const {
    return actual;
}

void ManagerCourses::setActual(NodeCourses *actual) {
    ManagerCourses::actual = actual;
}
