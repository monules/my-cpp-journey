#include <iostream>
#include <vector>

void printnum(const int& num){
    std::cout<<num<<std::endl;
}
void printstring(const std::string& str){
    std::cout<<str<<std::endl;
}

void vectors_add(const std::vector<int>& nums){
    int sum(0);
    for (const auto& i : nums){
        sum+=i;
    }
    std::cout<<sum<<std::endl;
}

enum Days{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};




int main(){
    std::vector<int> days {0,1,2,3,4,5,6};
    days[Days::Monday] = 3;
    printnum(days[Days::Monday]);
    std::vector<int> numbers{1,2,3,4,5};
    vectors_add(numbers);
}