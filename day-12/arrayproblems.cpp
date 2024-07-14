#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

/*Given an index and an array, return the
value of the array with the given index.
Examples
valueAt([1, 2, 3, 4, 5, 6], 10 / 2) ➞ 6
valueAt([1, 2, 3, 4, 5, 6], 8.0 / 2) ➞ 5
valueAt([1, 2, 3, 4], 6.535355314 / 2) ➞ 4*/
int valueAt(const std::array<int,6>& arr, const double& index){
    return arr[(int) index];
}

/*Create a function that takes an array of
 * numbers and returns a new array, sorted
 * in ascending order (smallest to biggest).
Sort numbers array in ascending order.
If the function's argument is null, an empty
 array, or undefined; return an empty array.
Return a new array of sorted numbers.
Examples
sortNumsAscending([1, 2, 10, 50, 5]) ➞ [1, 2, 5, 10, 50]
sortNumsAscending([80, 29, 4, -95, -24, 85]) ➞ [-95, -24, 4, 29, 80, 85]
sortNumsAscending([]) ➞ []*/
std::vector<int> sortNumsAscending(std::vector<int> vec) {
    // using the std::sort()
    std::sort(vec.begin(), vec.end());
    return vec;

    // using the bubble sort method
    if (vec.empty())
        return vec;
    bool swapped{true};
    while (swapped) {
        swapped = false;
        for (size_t i = 1; i < vec.size(); i++) {
            if (vec[i] < vec[i - 1]) {
                std::swap(vec[i], vec[i - 1]);
                swapped = true;
            }
        }
    }
    return vec;
}

/*Given a total due and an array representing the
 * amount of change in your pocket, determine whether
 * or not you are able to pay for the item. Change will
 * always be represented in the following order: quarters,
 * dimes, nickels, pennies.
To illustrate: changeEnough([25, 20, 5, 0], 4.25) should
 yield true, since having 25 quarters, 20 dimes, 5 nickels
 and 0 pennies gives you 6.25 + 2 + .25 + 0 = 8.50.
Examples
changeEnough([2, 100, 0, 0], 14.11) ➞ false
changeEnough([0, 0, 20, 5], 0.75) ➞ true
changeEnough([30, 40, 20, 5], 12.55) ➞ true
changeEnough([10, 0, 0, 50], 3.85) ➞ false
changeEnough([1, 0, 5, 219], 19.99) ➞ false
 Notes
quarter: 25 cents / $0.25
dime: 10 cents / $0.10
nickel: 5 cents / $0.05
penny: 1 cent / $0.01*/
bool changeEnough(const std::array<int, 4>& arr, double price){
    double quarters = arr[0] * 0.25;
    double dimes = arr[1] * 0.10;
    double nickel = arr[2] * 0.05;
    double penny = arr[3] * 0.01;
    double total = quarters + dimes + nickel + penny;
    if (total >= price)
        return true;
    return false;
}

/*Create a function that takes in an array
 * (slot machine outcome) and returns true if
 * all elements in the array are identical, and
 * false otherwise. The array will contain 4 elements.
Examples
testJackpot(["@", "@", "@", "@"]) ➞ true
testJackpot(["abc", "abc", "abc", "abc"]) ➞ true
testJackpot(["SS", "SS", "SS", "SS"]) ➞ true
testJackpot(["&&", "&", "&&&", "&&&&"]) ➞ false
testJackpot(["SS", "SS", "SS", "Ss"]) ➞ false*/
bool testJackpot(const std::array<std::string, 4>& arr){
    // return (arr[0] == arr[1] and arr[0] == arr[2] and arr[0] == arr[3]);
    for (size_t i = 0; i < arr.size(); i++) {
        if (arr[i] != arr[0])
            return false;
    }
    return true;
}

/*There's a great war between the even and odd numbers.
 * Many numbers already lost their lives in this war and
 * it's your task to end this. You have to determine which
 * group sums larger: the evens, or the odds. The larger group wins.
Create a function that takes an array of integers, sums
 the even and odd numbers separately, then returns the difference
 between the sum of the even and odd numbers.
Examples
warOfNumbers({2, 8, 7, 5}) ➞ 2
// 2 + 8 = 10
// 7 + 5 = 12
// 12 is larger than 10
// So we return 12 - 10 = 2
warOfNumbers({12, 90, 75}) ➞ 27
warOfNumbers({5, 9, 45, 6, 2, 7, 34, 8, 6, 90, 5, 243}) ➞ 168*/
int warOfNumbers(const std::vector<int>& numbers){
    int sumOdd{0}, sumEven{0};
    for (const auto& i : numbers){
        (i % 2 == 0) ? (sumEven += i) : (sumOdd += i);
    }
    return std::abs(sumOdd - sumEven);
}

/*Create a function that takes a vector (array)
 * of strings. Return all words in the vector
 * (array) that are exactly four letters.
Examples
isFourLetters(["Tomato", "Potato", "Pair"]) ➞ ["Pair"]
isFourLetters(["Kangaroo", "Bear", "Fox"]) ➞ ["Bear"]
isFourLetters(["Ryan", "Kieran", "Jason", "Matt"]) ➞ ["Ryan", "Matt"]*/
std::vector<std::string> isFourLetters(const std::vector<std::string>& names){
    std::vector<std::string> result{};
    for (const auto& i : names){
        if (i.length() == 4)
            result.push_back(i);
    }
    return result;
}

/*Write a function that takes an array of numbers and returns an array with two elements:
The first element should be the sum of all even numbers in the array.
The second element should be the sum of all odd numbers in the array.
Example
sumOddAndEven([1, 2, 3, 4, 5, 6]) ➞ [12, 9]
// 2 + 4 + 6 = 12 and 1 + 3 + 5 = 9
sumOddAndEven([-1, -2, -3, -4, -5, -6]) ➞ [-12, -9])
sumOddAndEven([0, 0]) ➞ [0, 0])*/
std::array<int, 2> sumOddAndEven(const std::vector<int>& numbers){
    int sumOdd{0}, sumEven{0};
    for (const auto& i : numbers){
        (i % 2 == 0) ? (sumEven+=i) : (sumOdd+=i);
    }
    return {sumEven, sumOdd};
}

/*Create a function that counts the number
 * of times a particular letter shows up in the word search.
Examples
letterCounter([
  ["D", "E", "Y", "H", "A", "D"],
  ["C", "B", "Z", "Y", "J", "K"],
  ["D", "B", "C", "A", "M", "N"],
  ["F", "G", "G", "R", "S", "R"],
  ["V", "X", "H", "A", "S", "S"]
], "D") ➞ 3
// "D" shows up 3 times: twice in the first row, once in the third row.
letterCounter([
  ["D", "E", "Y", "H", "A", "D"],
  ["C", "B", "Z", "Y", "J", "K"],
  ["D", "B", "C", "A", "M", "N"],
  ["F", "G", "G", "R", "S", "R"],
  ["V", "X", "H", "A", "S", "S"]
], "H") ➞ 2*/

int letterCounter(std::array<std::array<char, 6>, 5> arrays, char letter){
    int count(0);
    for (const auto& i : arrays){
        for (const auto& j : i){
            if (j == letter)
                count++;
        }
    }
    return count;
}

int main() {
    std::cout << "this was the 12 day" << std::endl;
}