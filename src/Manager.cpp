//
// Created by Ennia on 1/2/2024.
//

#include "Manager.h"

using namespace std;

Manager::Manager() {

}

void Manager::escritura(ManagerCourses *mc, ManagerStudents *ms) {
    ofstream fich("C:/Users/Usuario/Desktop/proyecto-programado-tango-main/obli.txt");
    if (!fich) {
        cerr << "Error al crear el archivo"<<endl;
        exit(EXIT_FAILURE);
    }


    mc->setActual(mc->getHead());
    while (mc->getActual() != nullptr) {
        fich << mc->getActual()->getCourses()->getCourseCode() << ',' << mc->getActual()->getCourses()->getCourseName()
             << ',' << mc->getActual()->getCourses()->getGrades() << endl;
        mc->setActual(mc->getActual()->getNext());
    }

    ms->setActual(ms->getHead());
    while (ms->getActual() != nullptr) {

        fich << ms->getActual()->getStudents()->getName() << ',' << ms->getActual()->getStudents()->getId() << ','
             << ms->getActual()->getStudents()->getMajor() << ',' << ms->getActual()->getStudents()->getTamano()
             << endl;
        for (int i = 0; i < ms->getActual()->getStudents()->getTamano(); i++) {
            fich << ms->getActual()->getStudents()->vector[i]->getCourseCode() << endl;
        }

        ms->setActual(ms->getActual()->getNext());

    }

    fich.close();
}


void Manager::lectura(ManagerCourses *mc, ManagerStudents *ms) {
    ifstream fich("C:/Users/Usuario/Desktop/proyecto-programado-tango-main/obli.txt");
    if (!fich) {
        cerr << "Error al abrir el archivo"<<endl;
        exit(EXIT_FAILURE);
    }

    string line;
    while (getline(fich, line)) {
        stringstream ss(line);
        string token;

        getline(ss, token, ',');

        if (token.find_first_not_of("0123456789") != string::npos) {
            int id, tamano;
            string name, major;

            name = token; // Nombre
            getline(ss, token, ',');
            id = stoi(token);
            getline(ss, major, ',');
            getline(ss, token);
            tamano = stoi(token);


            Student *student = new Student(id, name, major, tamano);
            if (tamano > 0) {

                for (int i = 0; i < tamano; i++) {
                    getline(fich, line);
                    stringstream ss_course(line);
                    string courseCode;

                    getline(ss_course, courseCode, ',');


                    Courses *course = mc->findByCode(courseCode);


                    student->insertarCursos(course);
                }
            }


            NodeStudents *nodeStudent = new NodeStudents(student);
            ms->newStudent(nodeStudent);
        } else {
            string courseCode, courseName;
            int grade;


            courseCode = token;
            getline(ss, courseName, ',');
            getline(ss, token);
            grade = stoi(token);

            Courses *course = new Courses(courseName, courseCode, grade);
            NodeCourses *nodeCourses = new NodeCourses(course);
            mc->newCourse(nodeCourses);
        }
    }

    fich.close();
}

void Manager::escrituraBinaria(ManagerCourses *mc, ManagerStudents *ms) {
    ofstream outFile;
    outFile.open("C:/Users/Usuario/Desktop/proyecto-programado-tango-main/obli.dat", ios::out | ios_base::binary);
    if (!outFile) {
        cerr << "Error al crear el archivo"<<endl;
        exit(EXIT_FAILURE);
    }

    mc->setActual(mc->getHead());
    while (mc->getActual() != nullptr) {
        Courses *course = mc->getActual()->getCourses();
        outFile.write((char *) &course, sizeof(course));
        mc->setActual(mc->getActual()->getNext());
    }

    ms->setActual(ms->getHead());
    while (ms->getActual() != nullptr) {
        Student *student = ms->getActual()->getStudents();
        outFile.write((char *) &student, sizeof(Student));
        ms->setActual(ms->getActual()->getNext());
    }

    outFile.close();
}

// Método para leer desde archivo binario
void Manager::lecturaBinaria(ManagerCourses *mc, ManagerStudents *ms) {
    ifstream fich("C:/Users/Usuario/Desktop/proyecto-programado-tango-main/obli.dat", ios::in | ios::binary);
    fich.open("C:/Users/Usuario/Desktop/proyecto-programado-tango-main/obli.dat", ios::binary);
    if (!fich.is_open()) {
        cerr << "Error al abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }
    bool condicion = true;
    fich.seekg(0);
    while (condicion) {
        // Leer un curso desde el archivo

        Courses *course = new Courses();
        fich.seekg(sizeof(course), ios::beg);
        if (!fich.read(reinterpret_cast<char *>(&course), sizeof(course))) {
            delete course; // Liberar memoria si la lectura no fue exitosa
            condicion = false; // Salir del bucle si no se pudo leer un estudiante
        }

        fich.read((char *) &course, sizeof(course));
        NodeCourses *nodeCourses = new NodeCourses(course);
        mc->newCourse(nodeCourses);
    }
    condicion = true;
    while (condicion) {
        // Leer un estudiante desde el archivo
        Student *student = new Student();
        if (!fich.read(reinterpret_cast<char *>(student), sizeof(student))) {
            delete student; // Liberar memoria si la lectura no fue exitosa
            condicion = false; // Salir del bucle si no se pudo leer un estudiante
        }
        fich.read((char *) &student, sizeof(student));
        NodeStudents *nodeStudent = new NodeStudents(student);
        ms->newStudent(nodeStudent);
    }

    fich.close();
}


