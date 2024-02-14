#include "Menu.h"
#include "Student.h"
#include "ManagerCourses.h"
#include "ManagerStudents.h"

using namespace std;

Menu::Menu() : mc(nullptr), ms(nullptr), head(nullptr) {
    insertOption("Exit");
    insertOption("3.Save and Load");
    insertOption("2.Courses Administration");
    insertOption("1.Student Administration");
}

Menu::Menu(ManagerCourses *mc, ManagerStudents *ms) : head(nullptr) {
    this->mc = mc;
    this->ms = ms;
    insertOption("Exit");
    insertOption("3.Save and Load");
    insertOption("2.Courses Administration");
    insertOption("1.Student Administration");
}

Menu::~Menu() {
    clear();
}

void Menu::insertOption(const string &opt) {
    if (head != nullptr) {
        Node *newNode = new Node{opt, head};
        Node *aux = head;
        head = newNode;
        head->next = aux;
    } else {
        Node *newNode = new Node{opt};
        head = newNode;
        head->next = nullptr;
        cout << endl;
    }

}

void Menu::displayMenu() const {
    Node *current = head;
    while (current != nullptr) {
        cout << current->option << endl;
        if (current->next != nullptr) {
            current = current->next;
        } else {
            current = nullptr;
        }
    }
}

void Menu::handleUserInput() {
    string userChoice;
    do {
        cout << "\nMenu:\n";
        displayMenu();

        cout << "\nEnter your choice: ";
        cin >> userChoice;

        if (userChoice != "Exit") {
            handleOption(userChoice);
        }

    } while (userChoice != "Exit");
}

void Menu::handleOption(const string &opt) {
    if (opt == "1") {
        int op;
        cout << endl << "|| Student Administration ||" << endl << endl
             << "1.Search Student" << endl
             << "2.Enter new student" << endl
             << "3.Display all the students" << endl
             << "4.Delete Student" << endl
             << "5.Return" << endl;
        cin >> op;
        switch (op) {
            case 1: {
                int id = 0;
                cout << endl;
                cout << "Search Student" << endl;
                cout << "Insert Student: ";
                cin >> id;
                cout << ms->searchStudent(id)->getStudents()->toString() << endl;
                system("pause");
                break;
            }
            case 2: {
                int id = 0, tam = 0;
                string nombre = "", grado = "";
                cout << "Enter new Student" << endl;
                cout << "Insert Student ID: ";
                cin >> id;
                cout << endl;
                cout << "Insert Student Name: ";
                cin >> nombre;
                cout << endl;
                cout << "Insert Student Major: ";
                cin >> grado;
                cout << endl;
                cout << "insert the number of student courses: ";
                cin >> tam;
                cout << endl;
                Student *s = new Student(id, nombre, grado, tam);
                cout << "Below are the valid courses to enroll: " << endl;
                mc->showList();
                cout << endl << endl;
                for (int i = 0; i < tam; i++) {
                    string id;
                    cout << "Insert Course ID: ";
                    cin >> id;
                    Courses *course = mc->findByCode(id);
                    if (course != nullptr) {
                        s->vector[i] = course;
                    }
                    cout << endl;
                }
                NodeStudents *ns = new NodeStudents(s);
                ms->newStudent(ns);
                cout << "Estudiante Agregado..." << endl;
                system("pause");
                break;
            }
            case 3: {
                cout << "Lista de Estudiantes" << endl;
                ms->showList();
                system("pause");
                break;
            }
            case 4: {
                int id;
                cout << "Borrar Estudiante" << endl;
                cout << "Insert Student: ";
                cin >> id;
                ms->deleteStudent(id);
                cout << "Estudiante Eliminado..." << endl;
                system("pause");
                break;
            }
            case 5:
                break;
            default:
                cout << "Invalid input" << endl;
                break;
        }
    } else if (opt == "2") {
        int op;
        cout << endl << "Courses Administration" << endl
             << "1.Search course" << endl
             << "2.Enter new course" << endl
             << "3.Display all the course" << endl
             << "4.Delete course" << endl
             << "5.Return" << endl;
        cin >> op;
        switch (op) {
            case 1: {
                string id = "0";
                cout << "Search course" << endl;
                cout << "Insert course: ";
                cin >> id;
                cout << mc->searchCourse(id)->getCourses()->toString() << endl;
                system("pause");
                break;
            }
            case 2: {

                string id, nombre;
                int grado = 0;
                cout << "Enter new Course" << endl;
                cout << "Insert Course ID: ";
                cin >> id;
                cout << endl;
                cout << "Insert Course Name: ";
                cin >> nombre;
                cout << endl;
                cout << "Insert Course Grade: ";
                cin >> grado;
                cout << endl;
                Courses *c = new Courses(nombre, id, grado);
                NodeCourses *nc = new NodeCourses(c);
                mc->newCourse(nc);
                cout << "Curso Agregado..." << endl;
                system("pause");
                break;
            }
            case 3: {
                cout << "Lista de Cursos" << endl;
                mc->showList();
                system("pause");
                break;
            }
            case 4: {
                string id;
                cout << "Borrar Curso" << endl;
                cout << "Insert Course: ";
                cin >> id;
                mc->deleteByCode(id);
                cout << "Curso Eliminado..." << endl;
                system("pause");
                break;
            }
            case 5:
                break;
            default:
                cout << "Invalid input" << endl;
                break;
        }
    } else if (opt == "3") {
        int op;
        cout << endl << "|| Data ||" << endl
             << "1.Save txt" << endl
             << "2.Load txt" << endl
             << "3.Save dat" << endl
             << "4.load dat" << endl
             << "5.Return" << endl;
        cin >> op;
        switch (op) {
            case 1: {
                Manager *m = new Manager();
                m->escritura(mc, ms);
                cout << "Guardado..." << endl;
                system("pause");
                break;
            }
            case 2: {
                Manager *m = new Manager();
                m->lectura(mc, ms);
                cout << "Cargado..." << endl;
                system("pause");
                break;
            }
            case 3: {
                Manager *m = new Manager();
                m->escrituraBinaria(mc, ms);
                cout << "Guardado..." << endl;
                system("pause");
                break;
            }
            case 4: {
                Manager *m = new Manager();
                m->lecturaBinaria(mc, ms);
                cout << "Cargado..." << endl;
                system("pause");
                break;
            }


        }
        cout << "Thank you for use the program" << endl;
    }
}

void Menu::printHeader() {
    cout << endl;
    cout << "   **************************************************************************" << endl;;
    cout << "   *                                                                        *" << endl;;
    cout << "   *  Universidad Nacional                                                  *" << endl;;
    cout << "   *                                                                        *" << endl;;
    cout << "   *  Escuela de Informatica                                                *" << endl;;
    cout << "   *                                                                        *" << endl;;
    cout << "   *                                                                        *" << endl;;
    cout << "   *                       Proyecto de Programacion I                       *" << endl;;
    cout << "   *                                                                        *" << endl;;
    cout << "   *                          Ciclo Verano de 2023                          *" << endl;;
    cout << "   *                                                                        *" << endl;;
    cout << "   *                                                                        *" << endl;;
    cout << "   * Autores: Ian Frazer Zuñiga Alvare                                      *" << endl;;
    cout << "   *                                                                        *" << endl;;
    cout << "   **************************************************************************" << endl;;

    cout << "*******************************************************************************" << endl;;
}

void Menu::clear() {
    Node *current = head;
    while (current != nullptr) {
        Node *next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;
}