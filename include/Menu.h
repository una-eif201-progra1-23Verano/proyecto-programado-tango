#include <string>
#include <sstream>
#include "Node.h"
#include "ManagerCourses.h"
#include "ManagerStudents.h"
/*!
 * \class Menu
 * \brief The Menu class represents a menu.
 */

class Menu {
public:
    Menu();
    Menu(ManagerCourses*,ManagerStudents*);
    ~Menu();
    void displayMenu() const;
    void handleUserInput();

private:
    Node* head;
     ManagerCourses* mc;
     ManagerStudents* ms;
    void insertOption(const std::string& opt);
    void handleOption(const std::string& opt);
    void clear();
};
