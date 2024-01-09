#include <string>
#include <sstream>

/*!
 * \class Menu
 * \brief The Menu class represents a menu.
 */

class Menu {
public:
    Menu();
    ~Menu();
    void displayMenu() const;
    void handleUserInput();

private:
    struct Node {
        std::string option;
        Node* next;
    };
    Node* head;

    void insertOption(const std::string& opt);
    static void handleOption(const std::string& opt);
    void clear();
};
