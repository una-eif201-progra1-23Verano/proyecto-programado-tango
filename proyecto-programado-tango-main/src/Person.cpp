//
// Created by Ender on 10/1/2024.
//

#include "Person.h"

Person::Person() {}

Person::Person(int id, const string &name) : id(id), name(name) {}

Person::~Person() {

}

int Person::getId() const {
    return id;
}

void Person::setId(int id) {
    Person::id = id;
}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}
