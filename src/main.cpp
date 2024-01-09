#include <iostream>
#include "Menu.h"
#include "Student.h"
using namespace std;
//Probando a ver
int main() {
    system("cls");
    cout << "Universidad Nacional de Costa Rica" << endl;

    Student student1(15, "Bryan", "Informatica");
    /*
    Menu menu;
    menu.handleUserInput();
*/
    std::cout << "ID: " << student1.getId() << ", Name: " << student1.getName() << ", Carrera: " << student1.getMajor() << std::endl;
    return 0;
}
