//
// Created by Ender on 10/1/2024.
//

#ifndef MAIN_PERSON_H
#define MAIN_PERSON_H
#include <sstream>
#include <iostream>

using namespace std;
class Person {
private:
    int id;
    string name;
public:
    Person();

    Person(int id, const string &name);

    virtual ~Person();

    int getId() const;

    void setId(int id);

    const string &getName() const;

    void setName(const string &name);
};


#endif //MAIN_PERSON_H
