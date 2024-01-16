#include "Node.h"
#include <iostream>
/*!
 * \brief insertOption inserts a new option at the beginning of the linked list.
 * \param head is the head of the linked list.
 * \param opt is the option to be inserted.
 */



void Node::insertOption(Node** head, const std::string& opt) {
    if(head!= nullptr) {
        Node *newNode = new Node();
        newNode->option = opt;
        newNode->next = (*head);
        (*head) = newNode;
    }else{
        Node *newNode = new Node();
        newNode->option = opt;
        (*head) = newNode;
    }
}

void Node::displayMenu(Node* node) {
    while (node != nullptr) {
        std::cout << node->option << std::endl;
        node = node->next;
    }
}

void Node::handleOption(const std::string& opt) {
    if (opt == "opt1") {
        std::cout << "Option 1 selected" << std::endl;
        // Implement option 1 functionality
    } else if (opt == "opt2") {
        std::cout << "Option 2 selected" << std::endl;
        // Implement option 2 functionality
    }
}