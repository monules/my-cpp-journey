/*
in the first day i learned that there are several different primitive data types in c++.
and each of these predefined data types take up different amount of memory space in our computer.
the data types are:
int -> takes 4 bytes
bool -> takes 1 byte
float -> takes 4 bytes
double, long -> take 8 bytes each
short -> takes 2 bytes
char -> takes a byte apparently

and the following piece of code is the simple and basic syntax of how a simple hello world program is written in c++:
*/

#include <iostream> // this is like importing a library in the example of Python. the <iostream> library lets us output stuff.

int main() // this is like defining a function in the example of Python. the first word "int" can be any other data type.
{ // and then there are curly braces inside which some code is written i guess.
    int var; // here you declare the data type of the variable. and the second word "var" can be anything, it's the name of the variable. and btw, at the end of each line in c++, you gotta write ";", otherwise it gives error, it's just a syntax of the language.
    std::cout << "Hello World!"; // here, "std" is for standard and then it is followed by two colons. syntax. and then "cout" is for outputting stuff. then two less than signs called "left shift operators". then the message u want to output.
    return 0; // this is to say that the program is ended.
}
