#include <iostream>
#include <vector>
#include <array>

int main(){
    constexpr int length {8};
    std::array<int, length> arr{};
    enum Students {
        henry,
        camilla,
        richard,
        francis,
        bunny,
        charles,
        max_students
    };
    std::array<std::string, max_students> students{};
    int numofstudents{};
//    std::cin>>numofstudents;
//    std::array<int, numofstudents> error
    constexpr std::array myArray{1,2,3,4,5}; // preferred

    std::cout<<"hi"<<std::endl;
}
