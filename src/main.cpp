#include <iostream>
#include "Menu.h"
#include "Student.h"
#include "Courses.h"

using namespace std;
//Probando a ver parte 2
int main() {
    system("cls");
    cout << "Universidad Nacional de Costa Rica" << endl;
    /*
    Menu menu;
    menu.handleUserInput();
*/
    Student student1(15, "Bryan", "Informatica");
    std::cout << "ID: " << student1.getId() << ", Name: " << student1.getName() << ", Carrera: " << student1.getMajor() << std::endl;
    Courses course1("Calculo",100,"4184");
    cout<<course1.getCourseName()<<" "<<course1.getGrades()<<" "<<course1.getCourseCode();
    return 0;
}
