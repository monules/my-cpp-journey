#include <iostream>
#include <vector>
#include <unordered_map>

/*Create a function that takes an array and finds the integer which appears an odd number of times.
Examples
findOdd([1, 1, 2, -2, 5, 2, 4, 4, -1, -2, 5]) ➞ -1
findOdd([20, 1, 1, 2, 2, 3, 3, 5, 5, 4, 20, 4, 5]) ➞ 5
findOdd([10]) ➞ 10*/
int findOdd(const std::vector<int>& vec){
    // create a dictionary for each seen number in the array.
    // loop over the array and if the element is in the dictionary then increment its count, if not
    // create a new key with that number.
    // edit: turns out, if there's no such key in the dict it will initialize it with 0.
    // so we don't have to use the conditions to check if exists or not.
    // finally, count how many times each key in the dictionary has been seen.
    // return the one which has been seen an odd number of times.
    std::unordered_map<int, int> count;
    for (const auto& num : vec){
        count[num]++;
    }
    for (const auto& [num, occurrence] : count){
        if (occurrence % 2 != 0)
            return num;
    }
    return 0;
}

int main(){
    std::cout<< findOdd({20, 1, 1, 2, 2, 3, 3, 5, 5, 4, 20, 4, 5}) <<std::endl;
    return 0;
}