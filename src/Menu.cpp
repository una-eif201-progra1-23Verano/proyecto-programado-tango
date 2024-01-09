#include "Menu.h"
#include "Student.h"
#include <iostream>
using namespace std;

Menu::Menu() : head(nullptr) {
    insertOption("Exit");
    insertOption("1.Student Administration");
}

Menu::~Menu() {
    clear();
}

void Menu::insertOption(const string& opt) {
    Node* newNode = new Node{opt, head};
    head = newNode;
}

void Menu::displayMenu() const {
    Node* current = head;
    while (current != nullptr) {
        cout << current->option << endl;
        current = current->next;
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

void Menu::handleOption(const string& opt) {
    if (opt == "1") {
        int op;
        cout<<"Student Administration"<<endl
        <<"1.Search Student"<<endl
        <<"2. Enter new student"<<endl
        <<"3.Display all the students"<<endl
        <<"4.Delete Student"<<endl
        <<"5.Return"<<endl;
        cin>>op;
        switch (op) {
            case 1:
                //administrar estudiantes
                //mostrar el promedio(metodo para calcularlo con las notas de los cursos)
                //hacer if para las dos opciones (actualizar nota curso y mostrar info)
                break;
            case 2:
                //meter nuevo estudiante (nombre, cedula y carrera)
                break;
            case 3:
                //mostrar estudiantes(toString)
                break;
            case 4:
                //eliminar estudiantes(metodo eliminar)
            break;
            case 5:
                //salir
                break;
            default:
                cout<<"Invalid input"<<endl;
                break;
        }
    }
    else
        cout<<"Thank you for use the program"<<endl;
}

void Menu::clear() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;
}
