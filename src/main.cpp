//
// Created by Maikol Guzman on 22/11/23.
//
#include <iostream>
#include <cstdlib>
#include "Menu.h"
using namespace;
int main() {
    system("clear");
    cout << "Universidad Nacional de Costa Rica - www.mikeguzman.dev" << endl;

    Menu menu;
    menu.handleUserInput();

    return 0;
}
