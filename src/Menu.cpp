#include "Menu.h"
#include <iostream>
using namespace std;
Menu() : head(nullptr) {
    insertOption("Exit");
    insertOption("students administration");
}

~Menu() {
    clear();
}

void insertOption(const std::string& opt) {
    Node* newNode = new Node{opt, head};
    head = newNode;
}

void displayMenu() const {
    Node* current = head;
    while (current != nullptr) {
       cout << current->option << std::endl;
        current = current->next;
    }
}

void handleUserInput() {
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

void handleOption(const std::string& opt) {
    if (opt == "students administration") {
        cout << "students administration" << std::endl;
    } 
}

void clear() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;
}
