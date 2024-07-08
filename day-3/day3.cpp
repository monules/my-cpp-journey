#include <iostream>
#include <cmath>

int main(){
    int students;
    students = 20;

    // addition
    students++; // increment operator. increments by one. adds one to the variable.
    students += 1; // also possible to add one like this like in Python.

    // subtraction
    students--; // the same thing with ++ but the opposite.
    students -= 1; // the same thing with += but the opposite.

    // multiplication
    students *= 2; // like in Python, does the same thing as "students=students * 2"

    // division
    students /= 2; // like in Python, does the same thing as "students=students / 2"
    // when dividing, if the data type is int then if there is a remainder it gets just 
    // truncated. so if you actually wanna display the remainder as well then u should
    // use the double or float.

    // remainder and modulo operator
    int remainder;
    remainder = students % 3; // useful when u wanna find out if a number is odd or even

    // the order of operations is as follows:
    // parantheses -> multiplication & division -> addition & subtraction

    // raising to a power
    students = pow(students, 2);
    // to raise a number to some degree you need to first include cmath then use the
    // pow() function - first is the number u want to raise to some degree and the
    // second is the degree u want to raise that number to.

    // type conversion in c++
    double pi = (int) 3.14;
    // to convert a var from one data type to another, u need to precede the value of
    // that var with the data type u want to change that variable into in parantheses.
    // (int) for example.
    // another example:
    int correct = 8;
    int questions = 10;
    double score = correct / (double) questions * 100;

    std::cout<<score<<'%'<< std::endl;

    // some interesting escape sequences:
    // \n -> new line
    // \a -> alert, sound the system alarm.
    // \r -> return the cursor to the beginning of the current line.
    // \t -> insert a tab and put the cursor there.
}
