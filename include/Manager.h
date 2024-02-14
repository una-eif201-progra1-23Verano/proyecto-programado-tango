
#ifndef MAIN_MANAGER_H
#define MAIN_MANAGER_H

#include<fstream>
#include <vector>
#include <stdio.h>
#include "ManagerCourses.h"
#include "ManagerStudents.h"

using namespace std;

class Manager {
private:

public:
    Manager();

    void escritura(ManagerCourses *, ManagerStudents *);

    void lectura(ManagerCourses *, ManagerStudents *);

    void escrituraBinaria(ManagerCourses *, ManagerStudents *);

    void lecturaBinaria(ManagerCourses *, ManagerStudents *);

};


#endif //MAIN_MANAGER_H
