#include <iostream>
#include <vector>


/*Given an index and an array, return the 
value of the array with the given index.
Examples
valueAt([1, 2, 3, 4, 5, 6], 10 / 2) ➞ 6
valueAt([1, 2, 3, 4, 5, 6], 8.0 / 2) ➞ 5
valueAt([1, 2, 3, 4], 6.535355314 / 2) ➞ 4*/
int valueAt(const std::vector<int>& vec, const double& ind){
    return vec[(int) ind];
}

/*Take an array of integers (positive or negative or both)
 * and return the sum of the absolute value of each element.
Examples
getAbsSum([2, -1, 4, 8, 10]) ➞ 25
getAbsSum([-3, -4, -10, -2, -3]) ➞ 22
getAbsSum([2, 4, 6, 8, 10]) ➞ 30
getAbsSum([-1]) ➞ 1*/
int getAbsSum(const std::vector<int>& vec){
    int sum(0);
    for (const auto& i : vec)
        sum+= std::abs(i);
    return sum;
}

/*Given a pair, return its FIRST value and
 * its SECOND value. Pair will be < int, int >.
Examples
pairs(std::make_pair(1, 2)) ➞ { 1, 2 }
pairs(std::make_pair(51, 21)) ➞ { 51, 21 }
pairs(std::make_pair(512124, 215)) ➞ { 512124, 215 }*/
std::vector<int> pairs(const std::pair<int, int>& pair){
    return {pair.first, pair.second};
}

int main(){
    std::cout<< "this was day-11" <<std::endl;
}
