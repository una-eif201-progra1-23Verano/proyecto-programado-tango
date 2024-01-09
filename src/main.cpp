#include <iostream>
#include "Menu.h"
#include "Student.h"
#include "Courses.h"

using namespace std;
int main() {
    system("cls");
    cout << "Universidad Nacional de Costa Rica" << endl;
    /*
    Menu menu;
    menu.handleUserInput();
*/
    Student student1(15, "Bryan", "Informatica");
    std::cout << student1.toString();
    Courses course1("Calculo",100,"4184");
    cout<<course1.toString();
    return 0;
}
