#include "Menu.h"
#include <iostream>

Menu::Menu() : head(nullptr) {
    insertOption("Exit");
    insertOption("students administration");
}

Menu::~Menu() {
    clear();
}

void Menu::insertOption(const std::string& opt) {
    Node* newNode = new Node{opt, head};
    head = newNode;
}

void Menu::displayMenu() const {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->option << std::endl;
        current = current->next;
    }
}

void Menu::handleUserInput() {
    std::string userChoice;
    do {
        std::cout << "\nMenu:\n";
        displayMenu();

        std::cout << "\nEnter your choice: ";
        std::cin >> userChoice;

        if (userChoice != "Exit") {
            handleOption(userChoice);
        }

    } while (userChoice != "Exit");
}

void Menu::handleOption(const std::string& opt) {
    if (opt == "students administration") {
        std::cout << "students administration" << std::endl;
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
