#include "Menu.h"
#include "Student.h"
#include "ManagerCourses.h"
#include "ManagerStudents.h"
using namespace std;

Menu::Menu() : mc(nullptr), ms(nullptr), head(nullptr) {
    insertOption("Exit");
    insertOption("1.Student Administration");
}

Menu::Menu(ManagerCourses *mc, ManagerStudents *ms): head(nullptr) {
    this->mc = mc;
    this->ms = ms;
    insertOption("Exit");
    insertOption("1.Student Administration");
}

Menu::~Menu() {
    clear();
}

void Menu::insertOption(const string &opt) {
    if (head != nullptr) {
        Node *newNode = new Node{opt,head};
        Node *aux = head;
        head = newNode;
        head->next =aux;
    } else {
        Node *newNode = new Node{opt};
        head = newNode;
        head->next = nullptr;
        cout<<endl;
    }

}

void Menu::displayMenu() const {
    Node *current = head;
    while (current != nullptr) {
        cout << current->option << endl;
        if (current->next != nullptr) {
            current = current->next;
        }else{
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
        cout << endl << "Student Administration" << endl
             << "1.Search Student" << endl
             << "2. Enter new student" << endl
             << "3.Display all the students" << endl
             << "4.Delete Student" << endl
             << "5.Return" << endl;
        cin >> op;
        switch (op) {
            case 1:
            {
                int id = 0;
                cout << "Search Student" << endl;
                cout << "Insert Student: ";
                cin >> id;
                cout<<ms->searchStudent(id)->getStudents()->toString()<<endl;
                break;
            }
            case 2:
            {
                int id = 0;
                string nombre, grado;
                cout << "Enter new Student" << endl;
                cout << "Insert Student ID: ";
                cin >> id;
                cout<<endl;
                cout << "Insert Student Name: ";
                cin >> nombre;
                cout<<endl;
                cout << "Insert Student Major: ";
                cin >> grado;
                cout<<endl;
                Student *s = new Student(id, nombre,grado);
                NodeStudents* ns = new NodeStudents(s);
                ms->newStudent(ns);
                cout<<"Estudiante Agregado..."<<endl;
                system("pause");
                break;
            }
            case 3:
            {
                cout << "Lista de Estudiantes" << endl;
                ms->showList();
                system("pause");
                break;
            }
            case 4:
            {   int id;
                cout << "Borrar Estudiante" << endl;
                cout << "Insert Student: ";
                cin >> id;
                ms->deleteStudent(id);
                cout<<"Estudiante Eliminado..."<<endl;
                system("pause");
                break;
            }
            case 5:
                //salir
                cout << "hola";
                break;
            default:
                cout << "Invalid input" << endl;
                break;
        }
    } else
        cout << "Thank you for use the program" << endl;
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
