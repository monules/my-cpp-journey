#include <iostream>
#include <vector>

/*Create a function that tweaks letters by one forward (+1) or backwards (-1) according to an array.
Examples
tweakLetters("apple", {0, 1, -1, 0, -1}) ➞ "aqold"
// "p" + 1 => "q"; "p" - 1 => "o"; "e" - 1 => "d"
tweakLetters("many", {0, 0, 0, -1}) ➞ "manx"
tweakLetters("rhino", {1, 1, 1, 1, 1}) ➞ "sijop"*/
std::string tweakLetters(const std::string& word, const std::vector<int>& shift){
    std::vector<char> alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                                  'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    std::string result;
    for (int i = 0; i < word.size(); i++){
        auto iter = std::find(alphabet.begin(), alphabet.end(), word[i]);
        auto pos = std::distance(alphabet.begin(), iter);
        int shifted = static_cast<int>(pos) + shift[i];
        result += alphabet[shifted];
    }
    return result;
}

int main(){
    std::cout << "this was day-13" << std::endl;
}