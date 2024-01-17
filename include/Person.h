//
// Created by Ender on 10/1/2024.
//

#ifndef MAIN_PERSON_H
#define MAIN_PERSON_H
#include <sstream>
#include <iostream>

using namespace std;
class Person {
protected:
    int id;
    string name;
public:
    Person();

    Person(int id, const string &name);

    virtual ~Person();

    int getId() ;
    void setId(int p_id);

    string getName() ;
    void setName(string p_name);

};


#endif //MAIN_PERSON_H
