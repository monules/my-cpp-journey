// in c++, pointers are just variables whose value happens to be the memory location
// the home address of another varialble. the simplest explanation.
// this way you can modify the value of that variable without actually needing to
// get ahold of that variable, you would only need where that variable is located 
// in the memory - that is, where that variable lives, whats his address. this
// also optimizes and speeds up your program.
//to create a pointer in c++ you go:
// a type of the pointer_asterisk_the name of the pointer = &_the name of the variable.
// for example:
// void* ptr = &var.
// pointers can also be null - empty:
// void* ptr = nullptr.
// void is the type of the pointer which means what type of variable's memory 
// location this pointer holds. void is just default i used. it can be 
// anything - int, double, char...
// if you want to use the value of the variable that a pointer is pointing to, 
// you need to "dereference" the pointer using the asterisk * again. for example:
// int var = 42;
// int* pVar = &var;
// int value = *pVar; -> value is now equal to 42.

#include <iostream>

int main(){
    int var = 42;
    int var2 = 10;
    int* pVar = &var;
    *pVar = 12;
    pVar = &var2;
    *pVar = 45;
    
    // references:
    int a = 5;
    int& ref = a;
    ref = 2;

    ///classes
    class Player{
        public:
        std::string name;
        int x, y;
        int speed;
        void Move(Player, int xa, int ya){
            x = xa * speed;
            y = ya * speed;
        }
    };
    Player player;
    player.x = 5;
    player.y = 0;

    // structs and classes are the same thing but with one subtle difference
    // between them. structs by default make everything public, classes private.

    struct Car{
        int color;
        int price;
    };


    Log log;
    log.SetLevel(log.LogLevelWarning);
    log.Warn("Hello");
}

class Log
{
public:
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;
private:
    int m_LogLevel = LogLevelInfo;
public:
    void SetLevel(int Level){
        m_LogLevel = Level;
    }
    void Error(const char* message){
        if (m_LogLevel >= LogLevelError)
            std::cout<<"[Error]: "<<message<<std::endl;
    }
    void Warn(const char* message){
        if (m_LogLevel >= LogLevelWarning)
            std::cout<<"[WARNING]: "<<message<<std::endl;
    }
    void Info(const char* message){
        if (m_LogLevel >= LogLevelInfo)
            std::cout<<"[Info]: "<<message<<std::endl;
    }
};

