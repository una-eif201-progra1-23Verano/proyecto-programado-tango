#include "Student.h"
#include "Menu.h"
#include "NodeStudents.h"
#include "ManagerCourses.h"
#include "ManagerStudents.h"
#include "Manager.h"


using namespace std;

int main() {
    system("cls");
    Manager *q1 = new Manager();
    ManagerCourses *mc = new ManagerCourses();
    ManagerStudents *ms = new ManagerStudents();

    //region Data Quemada
    /*
    Student *s1 = new Student(1111, "Pedro Perez", "Educacion", 2);
    Student *s2 = new Student(2222, "Juan Valdez", "Fisiologia", 2);
    Student *s3 = new Student(3333, "Maria Morales", "Filosofia", 2);
    Student *s4 = new Student(4444, "Ian Frazer", "Medicina", 2);
    Student *s5 = new Student(5555, "Jaime Corrales", "psicologia", 2);
    Student *s6 = new Student(6666, "Mauricio Hoffman", "Ing. Computacion", 2);
    Student *s7 = new Student(7777, "Rodolfa", "Ecologia", 2);
    Courses *c1 = new Courses("Medicina", "1111",4);
    Courses *c2 = new Courses("Lectura", "2222",2);
    Courses *c3 = new Courses("Ciencias", "3333",3);
    Courses *c4 = new Courses("Ingles", "4444",3);
    Courses *c5 = new Courses("Finanzas", "5555",4);

    s1->insertarCursos(c2);
    s1->insertarCursos(c3);

    s2->insertarCursos(c2);
    s2->insertarCursos(c4);

    s3->insertarCursos(c2);
    s3->insertarCursos(c5);

    s4->insertarCursos(c1);
    s4->insertarCursos(c3);

    s5->insertarCursos(c2);
    s5->insertarCursos(c3);

    s6->insertarCursos(c4);
    s6->insertarCursos(c5);

    s7->insertarCursos(c4);
    s7->insertarCursos(c3);


    NodeStudents *ns1 = new NodeStudents(s1);
    NodeStudents *ns2 = new NodeStudents(s2);
    NodeStudents *ns3 = new NodeStudents(s3);
    NodeStudents *ns4 = new NodeStudents(s4);
    NodeStudents *ns5 = new NodeStudents(s5);
    NodeStudents *ns6 = new NodeStudents(s6);
    NodeStudents *ns7 = new NodeStudents(s7);

    NodeCourses *nc1 = new NodeCourses(c1);
    NodeCourses *nc2 = new NodeCourses(c2);
    NodeCourses *nc3 = new NodeCourses(c3);
    NodeCourses *nc4 = new NodeCourses(c4);
    NodeCourses *nc5 = new NodeCourses(c5);

    ManagerCourses *mc = new ManagerCourses();
    ManagerStudents *ms = new ManagerStudents();
    ms->newStudent(ns1);
    ms->newStudent(ns2);
    ms->newStudent(ns3);
    ms->newStudent(ns4);
    ms->newStudent(ns5);
    ms->newStudent(ns6);
    ms->newStudent(ns7);

    mc->newCourse(nc1);
    mc->newCourse(nc2);
    mc->newCourse(nc3);
    mc->newCourse(nc4);
    mc->newCourse(nc5);
    */
    //endregion

    q1->lectura(mc,ms);
    Menu *menu = new Menu(mc, ms);
    menu->printHeader();
    menu->handleUserInput();
    q1->escritura(mc, ms);
    return 0;
}
