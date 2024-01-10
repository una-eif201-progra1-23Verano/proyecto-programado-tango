//
// Created by Ender on 8/1/2024.
//

#include "ManagerStudents.h"

using namespace std;
ManagerStudents::~ManagerStudents(){
    Node* actual = header;
    while(actual != nullptr){
        Node* next = actual->next;

        delete actual;
        actual=next;
    }
}

void ManagerStudents::newStudent(Student student) {
    Node* n_Node= new Node(student);
    n_Node -> next = header;
    header = n_Node;

}
void ManagerStudents::showList() const {
    Node* actual= header;
    while (actual != header){
        cout<<"Name: "<<actual->info.getName()<<endl;
        cout<<"Age: "<<actual->info.getId()<<endl;
    }
}