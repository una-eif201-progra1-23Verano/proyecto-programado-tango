#include <iostream>
#include <cstdlib>
#include "Menu.h"
using namespace std;

int main() {
    system("clear");
    cout << "Universidad Nacional de Costa Rica" << endl;

    Menu menu;
    menu.handleUserInput();

    return 0;
}
