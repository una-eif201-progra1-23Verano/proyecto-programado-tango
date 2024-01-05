//
// Created by Ender on 4/1/2024.
//

#include "Student.h"

Student::Student() {}

Student::Student(int id, const string &name, const string &carrera) : id(id), name(name), carrera(carrera) {}

Student::~Student() {

}
int Student::getId() const {
    return id;
}

void Student::setId(int p_id) {
    Student::id = p_id;
}

const string &Student::getName() const {
    return name;
}

void Student::setName(const string &p_name) {
    Student::name = p_name;
}

const string &Student::getCarrera() const {
    return carrera;
}

void Student::setCarrera(const string &p_carrera) {
    Student::carrera = p_carrera;
}
