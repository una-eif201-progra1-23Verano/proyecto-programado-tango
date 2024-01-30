#ifndef MAIN_NODE_H
#define MAIN_NODE_H
#include <iostream>
using namespace std;

struct Node{
public:
    //Atributos
    string option;
    Node* next;
    //Metodos
    void insertOption(Node** ,const std::string&);
    void displayMenu(Node*);
    void handleOption(const std::string&);


};
#endif //MAIN_NODE_H
