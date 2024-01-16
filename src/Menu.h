#ifndef MAIN_MENU_H
#define MAIN_MENU_H
#include <iostream>
#include "Node.h"//;
using namespace std;

class Menu{
public:
    //Atributo
   Node * head;
    //metodos
    Menu();
    ~Menu();
void insertOption(const string&);
void displayMenu() const;
void handleUserInput();
void handleOption(const string&);
void clear();

};
#endif //MAIN_MENU_H