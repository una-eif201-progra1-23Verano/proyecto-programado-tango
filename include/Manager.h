
#ifndef MAIN_MANAGER_H
#define MAIN_MANAGER_H
#include<fstream>
#include "iostream"
#include <vector>
#include "ManagerCourses.h"
#include "ManagerStudents.h"
using namespace std;
class Manager {
private:

public:
    Manager();
    void escritura(ManagerCourses*,ManagerStudents*);

};


#endif //MAIN_MANAGER_H
