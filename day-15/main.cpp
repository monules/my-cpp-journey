#include <iostream>
#include <vector>
#include <unordered_map>

/*Create a function that takes an array of strings and return the number of smiley
 * faces contained within it. These are the components that make up a valid smiley:
A smiley has eyes. Eyes can be : or ;.
A smiley has a nose but it doesn't have to. A nose can be - or ~.
A smiley has a mouth which can be ) or D.
No other characters are allowed except for those mentioned above.
Examples
countSmileys([":)", ";(", ";}", ":-D"]) ➞ 2
countSmileys([";D", ":-(", ":-)", ";~)"]) ➞ 3
countSmileys([";]", ":[", ";*", ":$", ";-D"]) ➞ 1*/
int countSmileys(const std::vector<std::string>& faces){
    int count(0);
    if (faces.empty()) return 0;
    for (const auto& face : faces){
        if (face.length() == 2){
            if ((face[0] == ':' or face[0] == ';') and (face[1] == ')' or face[1] == 'D'))
                count++;
        }
        else if (face.length() == 3){
            if ((face[0] == ':' or face[0] == ';') and (face[1] == '-' or face[1] == '~') and (face[2] == ')' or face[2]
            == 'D'))
                count++;
        }
    }
    return count;
}

/*Given two words, the letter distance is calculated by taking the absolute value of the difference
 * in character codes and summing up the difference.
If one word is longer than another, add the difference in lengths towards the score.
To illustrate:
letterDistance("house", "fly") = dist("h", "f") + dist("o", "l") + dist("u", "y") + dist(house.length, fly.length)
= |104 - 102| + |111 - 108| + |117 - 121| + |5 - 3|
= 2 + 3 + 4 + 2
= 11
Examples
letterDistance("sharp", "sharq") ➞ 1
letterDistance("abcde", "Abcde") ➞ 32
letterDistance("abcde", "bcdef") ➞ 5*/
int letterDistance(const std::string& word1, const std::string& word2){
    int distance(0);
    size_t min_length = std::min(word1.length(), word2.length());
    for (int i(0); i < min_length; i++){
        distance += std::abs(word1[i] - word2[i]);
    }
    distance += std::abs(static_cast<int>(word1.length()) - static_cast<int>(word2.length()));
    return distance;
}

/*This is a reverse coding challenge. Normally you're given explicit directions
 * with how to create a function. Here, you must generate your own function to
 * satisfy the relationship between the inputs and outputs.
Your task is to create a function that, when fed the inputs below, produce the sample outputs shown.
Examples
"A4B5C2" ➞ "AAAABBBBBCC"
"C2F1E5" ➞ "CCFEEEEE"
"T4S2V2" ➞ "TTTTSSVV"
"A1B2C3D4" ➞ "ABBCCCDDDD"*/
std::string reverseCode(const std::string& input){
    // create a string variable result.
    // loop over the string.
    // if the element is a digit then add the previous element that number of times.
    // return the result.
    if (input.empty())  return input;
    std::string result;
    for (size_t i = 0; i < input.size(); i++){
        if ( isdigit(input[i]) ){
            result.append((input[i] - '0'), input[i-1]);
        }
    }
    return result;
}

/*You are given three inputs: a string, one letter, and a second letter.
Write a function that returns true if every instance of the first letter occurs before every instance of the second letter.
Examples
firstBeforeSecond("a rabbit jumps joyfully", 'a', 'j') ➞ true
// every instance of "a" occurs before every instance of "j"
firstBeforeSecond("knaves knew about waterfalls", 'k', 'w') ➞  true
firstBeforeSecond("happy birthday", 'a', 'y') ➞ false
// the "a" in "birthday" occurs after the "y" in "happy"
firstBeforeSecond("precarious kangaroos", 'k', 'a') ➞ false*/
bool firstBeforeSecond(const std::string& string, const char& firstLetter, const char& secondLetter){
    bool firstFound(false), secondFound(false);
    for (const auto& letter : string){
        if (letter == firstLetter) {
            if (secondFound) return false;  // if firstLetter is found after secondLetter has been found.
            firstFound = true; // otherwise, just set the flag to true.
        }
        else if (letter == secondLetter) {
            if (!firstFound) return false;  // if secondLetter is found before firstLetter has been found.
            secondFound = true; // otherwise, set the flag to true.
        }
    }
    return true; // if we've successfully reached this point without returning false, then return true.
}

/*Create a function that determines whether elements in an array can be re-arranged
 * to form a consecutive list of numbers where each number appears exactly once.
Examples
cons([5, 1, 4, 3, 2]) ➞ true
// Can be re-arranged to form [1, 2, 3, 4, 5]
cons([5, 1, 4, 3, 2, 8]) ➞ false
cons([5, 6, 7, 8, 9, 9]) ➞ false
// 9 appears twice */
bool cons(std::vector<int> numbers){
    std::sort(numbers.begin(), numbers.end());
    for (size_t i(1); i<numbers.size(); i++){
        if ((numbers[i-1] == numbers[i]) or ((numbers[i-1]+1) != numbers[i])) return false;
    }
    return true;
}

int main(){
    std::cout << "this was day-15" << std::endl;
    return 0;
}
