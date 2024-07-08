#include <iostream>
#include <string>

class Cat{
public:
    Cat(std::string name, int age){
        std::cout << "meow! " << name << " is " << age << " years old" << std::endl;
    }
};

class Dog {
public:
    Dog() {
        // this runs when you make a new Dog
        std::cout << "woof! a new dog is born!" << std::endl;
    }
};


class Entity
{
public:
    float X, Y;

    Entity(float x, float y){
        X = x;
        Y = y;
    }
    void Print(){
        std::cout<< X << ", " << Y << std::endl;
    }
};

int main(){
    Dog dog;
    Cat fluffy("fluffy", 19);
    Entity entity(0, 0.5);
    entity.Print();
}