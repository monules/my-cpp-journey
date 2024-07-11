#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers = {1,2,3,4,5};
    std::vector<int> hello{2,3,4,1};
    int a{2};
    for (int i : numbers)
        std::cout<<i<<std::endl;
    std::vector vowels {1,2,3,4};
    std::cout<<a<<std::endl;
    return 0;
}