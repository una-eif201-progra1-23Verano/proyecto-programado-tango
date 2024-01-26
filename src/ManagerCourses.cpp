//
// Created by Ender on 8/1/2024.
//
#include "ManagerCourses.h"

using namespace std;

ManagerCourses::ManagerCourses() {
    courses = nullptr;
    size = 0;
    capacity = 0;
}

ManagerCourses::ManagerCourses(int capacity) {
    this->capacity = capacity;
    courses = new Courses[capacity];
    size = 0;
}

ManagerCourses::~ManagerCourses() {
    delete[] courses;
}

void ManagerCourses::setVectorCourses(Courses *v) {
    courses = v;
}

void ManagerCourses::setSize(int s) {
    size = s;
}

void ManagerCourses::setCapacity(int c) {
    capacity = c;
}

Courses *ManagerCourses::getVectorCourses() {
    return courses;
}

int ManagerCourses::getSize() {
    return size;
}

int ManagerCourses::getCapacity() {
    return capacity;
}

void ManagerCourses::addCourse(Courses *course) {
    if (size < capacity) {
        courses[size] = *course;
        size++;
    } else {
        cout << "No hay espacio para agregar mas cursos" << endl;
    }
}

void ManagerCourses::deleteCourse(int index) {
    if (index < size) {
        for (int i = index; i < size - 1; i++) {
            courses[i] = courses[i + 1];
        }
        size--;
    } else {
        cout << "No se puede eliminar el curso" << endl;
    }
}

void ManagerCourses::showList() {
    for (int i = 0; i < size; i++) {
        cout << courses[i].toString() << endl;
    }
}





