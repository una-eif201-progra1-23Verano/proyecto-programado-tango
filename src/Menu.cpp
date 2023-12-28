#include "Menu.h"
#include <iostream>
using namespace std;

Menu::Menu() : head(nullptr) {
    insertOption("Exit");
    insertOption("opt1");
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
    std::string userChoice;
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
    if (opt == "opt1") {
        cout << "Option 1 selected" <<endl;
        // Implement option 1 functionality
    }
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
