#include "Student.h"
#include "Menu.h"
#include "NodeStudents.h"
#include "ManagerCourses.h"
#include "ManagerStudents.h"

using namespace std;
int main() {
    system("cls");
    cout << "Universidad Nacional de Costa Rica" << endl;

    Student* s1 = new Student(1111,"Pedro Perez","quinto");
    Student* s2 = new Student(2222,"Juan Valdez","quinto");
    Student* s3 = new Student(3333,"Maria Morales","quinto");
    Student* s4 = new Student(4444,"Ian Frazer","quinto");
    Student* s5 = new Student(5555,"Jaime Corrales","quinto");
    Student* s6 = new Student(6666, "Mauricio Hoffman", "quinto");
    NodeStudents*n1 = new NodeStudents(s1);
    NodeStudents*n2 = new NodeStudents(s2);
    NodeStudents*n3 = new NodeStudents(s3);
    NodeStudents*n4 = new NodeStudents(s4);
    NodeStudents*n5 = new NodeStudents(s5);
    ManagerCourses*mc = new ManagerCourses();
    ManagerStudents*ms = new ManagerStudents();
    ms->newStudent(n1);
    ms->newStudent(n2);
    ms->newStudent(n3);
    ms->newStudent(n4);
    ms->newStudent(n5);
    Menu*menu = new Menu(mc,ms);
    menu->handleUserInput();
    return 0;
}
