
#include <iostream>
using namespace std;
#include <string>
#include <sstream>
#include "ManagerCourses.h"
#include "ManagerStudents.h"
/*!
 * \class Menu
 * \brief The Menu class represents a menu.
 */


class Menu {
public:
    Menu();
    Menu(ManagerCourses *mc, ManagerStudents *ms);
    ~Menu();
    void displayMenu() const;
    void handleUserInput();

private:
    struct Node {
        string option;
        Node* next;
    };

    Node *head;
    ManagerCourses *mc;
    ManagerStudents *ms;

    void insertOption(const string& opt);
    void handleOption(const string& opt);
    void clear();
};