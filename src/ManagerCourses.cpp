//
// Created by Ender on 8/1/2024.
//

#include "ManagerCourses.h"
ManagerCourses::ManagerCourses()
{
    head= nullptr;
    actual= nullptr;
}
void ManagerCourses::insertCourse(Courses *course) {
    actual=head;
    if(head== nullptr) {
        head = new Node(course, nullptr);
    }
    else{
        while (actual.)











    }
}
bool deleteByCode(string code) {
    string codeToDelete;
    if(codeToDelete== code){
        code= "null " ;
    }
}
string ManagerCourses:: findByCode(string code){
    stringstream s;
    actual=head;

    while(head != nullptr){
        Courses *CourseInfo = dynamic_cast<Courses*>(head-> &getCourseCode());
        if(CourseInfo && CourseInfo-> getCourseCode() == code){

            s<<CourseInfo->;
        }
    }

}





