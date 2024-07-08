#include "iostream"
#include "string"

int main(){
    std::string greeting("hello");
    char shrek = greeting.at(0);
    std::string greeting2 = "hiii";
    std::string complete_greeting = greeting + " there";
    complete_greeting += "!";
    int length;
    length = complete_greeting.length();
    std::string name;
    std::cout<<"Enter Your Name: ";
    std::getline(std::cin, name);
    std::cout<< complete_greeting << name <<std::endl;
    std::cout<< length <<std::endl;
}