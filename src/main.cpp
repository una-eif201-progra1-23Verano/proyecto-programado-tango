//
// Created by Maikol Guzman on 22/11/23.
//
#include <iostream>
#include <cstdlib>
#include "Menu.h"

int main() {
    system("clear");
    std::cout << "Universidad Nacional de Costa Rica - www.mikeguzman.dev" << std::endl;

    Menu menu;
    menu.handleUserInput();

    return 0;
}
