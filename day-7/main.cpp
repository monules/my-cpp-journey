#include <iostream>
#include "GradeBook.cpp"

int main(){
    GradeBook gradeBook1("cpp programming");
    GradeBook gradeBook2("python programming");
    std::cout<<"gradeBook1 created for course: "<<gradeBook1.getCourseName()<<std::endl;
    std::cout<<"gradeBook2 created for course: "<<gradeBook2.getCourseName()<<std::endl;
}
