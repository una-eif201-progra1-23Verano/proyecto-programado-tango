#include <iostream>
#include "Menu.h"
#include "Student.h"
#include "Courses.h"

using namespace std;
int main() {
    system("cls");
    cout << "Universidad Nacional de Costa Rica" << endl;

    /*Menu menu;
    menu.handleUserInput();*/

    Student student1(15, "Bryan", "Informatica");
    std::cout << student1.toString();
    Courses course1("Calculo",100,"4184");
    Courses course2("Funda",54,"402");
    cout<<course1.toString();
    cout<<course2.toString();
    return 0;
}
