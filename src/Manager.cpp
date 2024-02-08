//
// Created by Ennia on 1/2/2024.
//

#include "Manager.h"
using namespace std;

void Manager::escritura(ManagerCourses * mc, ManagerStudents * ms) {
    ofstream fich("obli.txt");
    if (!fich) {
        cerr << "Error al crear el archivo\n";
        exit(EXIT_FAILURE);
    }
    while (mc->getActual() != nullptr) {

        fich << mc->getActual()->getCourses()->getCourseName()<< ',' << mc->getActual()->getCourses()->getCourseCode() << mc->getActual()->getCourses()->getGrades()<<endl;

        mc->setActual(mc->getActual()->getNext());

    }

    while (ms->getActual() != nullptr) {

        fich << ms->getActual()->getStudents()->getName() << ',' << ms->getActual()->getStudents()->getId() << ms->getActual()->getStudents()->getMajor()<<endl;

        ms->setActual(ms->getActual()->getNext());

    }
}