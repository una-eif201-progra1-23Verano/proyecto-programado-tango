//
// Created by Ender on 8/1/2024.
//
#include "ManagerCourses.h"

ManagerCourses::ManagerCourses() {
    head = nullptr;
    actual = nullptr;
}

void ManagerCourses::newCourse(NodeCourses *courses) {
    courses->setNext(getHead());
    head = courses;

}

void ManagerCourses::deleteByCode(string id) {
    actual = head;
    if (actual != nullptr && actual->getCourses()->getCourseCode() == id) {
        head = actual->getNext();
    } else if (actual != nullptr) {
        while (actual->getNext() != nullptr) {
            if (actual->getNext()->getCourses()->getCourseCode() == id) {
                NodeCourses *aux = new NodeCourses();
                aux = actual->getNext();
                actual->setNext(aux->getNext());
                //delete aux;
            }
            actual = actual->getNext();
        }
    }
    cout << "Curso encontrado..." << endl;
}


string ManagerCourses::printByCode(string code) {
    stringstream s;
    actual = head;

    while (actual != nullptr) {
        Courses *CourseInfo = dynamic_cast<Courses *>(actual->getCourses());
        if (CourseInfo && CourseInfo->getCourseCode() == code) {

            s << CourseInfo->toString();
        }

    }
    return s.str();
}

Courses *ManagerCourses::findByCode(string code) {
    actual = head;

    while (actual != NULL) {
        Courses *CourseInfo = actual->getCourses();
        if (CourseInfo && CourseInfo->getCourseCode() == code) {
            return CourseInfo;
        }
        actual = actual->getNext();
    }
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

NodeCourses *ManagerCourses::searchCourse(string id) {
    actual = head;
    while (actual->getNext() != nullptr) {
        if (actual->getCourses()->getCourseCode() == id) {
            cout << "Estudiante Encontrado:" << endl;
            return actual;
        }
        actual = actual->getNext();
    }
    if (actual->getCourses()->getCourseCode() == id) {
        cout << "Estudiante Encontrado:" << endl;
        return actual;
    } else {
        cout << "Estudiante no encontrado..." << endl;
        return nullptr;
    }
}

void ManagerCourses::showList() {
    actual = head;
    while (actual != nullptr) {
        cout << endl << endl;
        cout << "|| Curso ||" << endl << endl;
        cout << "Name: " << actual->getCourses()->getCourseName() << endl;
        cout << "ID: " << actual->getCourses()->getCourseCode() << endl;
        cout << "Major: " << actual->getCourses()->getGrades() << endl;
        actual = actual->getNext();
    }
}