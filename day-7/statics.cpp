#include <iostream>

struct Entity{

    static int x;
    static int y;
    static void Print(){
        std::cout<< x <<", "<< y <<std::endl;
    }
};

int main(){
    Entity::x = 3;
    Entity::y = 4;

//    Entity e1 = {5,1};

    Entity::Print();
    Entity::Print();
}