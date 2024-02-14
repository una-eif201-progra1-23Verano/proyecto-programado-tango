#include "Student.h"
#include "Courses.h"

Student::Student() {
    major = "";
    tamano = 10;
    for (int i = 0; i < tamano; i++) {
        Courses *c = new Courses(std::string(), std::string(), 0);
        vector[i] = c;
    }
}

// Parameterized constructor
Student::Student(int id, const string &name, string &major, int tam) : Person(id, name) {
    this->major = major;
    tamano = tam;
    for (int i = 0; i < tamano; i++) {
        Courses *c = new Courses(std::string(), std::string(), 0);
        vector[i] = c;
    }
}

// Destructor
Student::~Student() {}

// Getters and setters
string Student::getMajor() {
    return major;
}


void Student::setMajor(string p_major) {
    major = p_major;
}

const string Student::toString() {
    int contador = 0;
    stringstream s;
    s << "|| Student ||" << endl << endl;
    s << "Id: " << id << endl;
    s << "Name: " << name << endl;
    s << "Major: " << major << endl << endl;
    s << "|| Cursos detallados del estudiante ||" << endl << endl;
    while (contador < tamano) {
        if (vector[contador]->getCourseCode() != "") {
            s << vector[contador]->toString() << endl;
            contador++;
        } else {
            contador++;
        }
    }
    return s.str();
}

int Student::getTamano() {
    return tamano;
}

void Student::setTamano(int tamano) {
    Student::tamano = tamano;
}

void Student::insertarCursos(Courses *c) {
    int contador = 0;
    while (contador < tamano && vector[contador]->getCourseCode() != "") {
        contador++;
    }
    if (contador < tamano) {
        vector[contador] = c;
    } else {
        cout << "El vector esta lleno";
    }
}

void Student::eliminarCurso(string c) {
    int contador = 0;
    while (contador < tamano && vector[contador]->getCourseCode() != "") {
        if (vector[contador]->getCourseCode() == c) {
            vector[contador] = new Courses(std::string(), std::string(), 0);
        } else {
            contador++;
        }
    }
}



