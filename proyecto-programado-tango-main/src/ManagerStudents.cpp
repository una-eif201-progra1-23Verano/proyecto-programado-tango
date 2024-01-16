//
// Created by Ender on 8/1/2024.
//

#include "ManagerStudents.h"

using namespace std;

ManagerStudents::ManagerStudents() {
    header = nullptr;
    actual = nullptr;
}

ManagerStudents::~ManagerStudents() {
    NodeStudents *actual = header;
    while (actual != nullptr) {
        NodeStudents *next = actual->next;

        delete actual;
        actual = next;
    }
}

void ManagerStudents::setHead(NodeStudents *h) {
    header = h;
}

void ManagerStudents::setActual(NodeStudents *a) {
    actual = a;
}

NodeStudents *ManagerStudents::getHead() {
    return header;
}

NodeStudents *ManagerStudents::getActual() {
    return actual;
}

void ManagerStudents::newStudent(NodeStudents *student) {
    student->next = header;
    header = student;

}

NodeStudents *ManagerStudents::searchStudent(int id) {
    actual = header;
    while (actual->next != nullptr) {
        if (actual->getStudents()->getId() == id) {
            cout << "Estudiante Encontrado:" << endl;
            return actual;
        }
        actual = actual->next;
    }
    if (actual->getStudents()->getId() == id) {
        cout << "Estudiante Encontrado:" << endl;
        return actual;
    }
    cout << "Estudiante no encontrado..." << endl;
    return nullptr;
}

void ManagerStudents::deleteStudent(int id) {
    actual = header;
    if (actual != nullptr && actual->getStudents()->getId() == id) {
     header = actual->next;
    } else if (actual != nullptr) {
        while (actual->next != nullptr) {
            if (actual->getNext()->getStudents()->getId() == id) {
                NodeStudents *aux = new NodeStudents();
                aux = actual->getNext();
                actual->setNext(aux->getNext());
                //delete aux;
            }
            actual = actual->next;
        }
    }
    cout << "Estudiante encontrado..." << endl;
}


void ManagerStudents::showList() {
    actual = header;
    while (actual->next != nullptr) {
        cout << endl << endl;
        cout << "Estudiante:" << endl;
        cout << "Name: " << actual->getStudents()->getName() << endl;
        cout << "ID: " << actual->getStudents()->getId() << endl;
        cout << "Major: " << actual->getStudents()->getMajor() << endl;
        actual = actual->next;
    }
    cout << endl << endl;
    cout << "Estudiante:" << endl;
    cout << "Name: " << actual->getStudents()->getName() << endl;
    cout << "ID: " << actual->getStudents()->getId() << endl;
    cout << "Major: " << actual->getStudents()->getMajor() << endl;
    cout << endl << endl;
}

