#include <iostream>
#include <vector>

/*Create a function which validates whether a bridge is
 * safe to walk on (i.e. has no gaps in it to fall through).
Examples
isSafeBridge("####") ➞ true
isSafeBridge("## ####") ➞ false
isSafeBridge("#") ➞ true*/
bool isSafeBridge(const std::string& bridge){
    for (char i : bridge) {
        if (i == ' ')
            return false;
    }
    return true;
}

/*Create a function that takes a string and returns
 * the number (count) of vowels contained within it.
Examples
countVowels("Celebration") ➞ 5
countVowels("Palm") ➞ 1
countVowels("Prediction") ➞ 4*/
int countVowels(const std::string& word){
    int count = 0;
    for (char i : word){
        if (i == 'a' or i == 'i' or i == 'e' or i == 'o' or i == 'u')
            count++;
    }
    return count;
}

/*Create a function that takes a string and
 * returns a string with its letters in alphabetical order.
Examples
alphabetSoup("hello") ➞ "ehllo"
alphabetSoup("edabit") ➞ "abdeit"
alphabetSoup("hacker") ➞ "acehkr"
alphabetSoup("geek") ➞ "eegk"
alphabetSoup("javascript") ➞ "aacijprstv"*/
std::string alphabetSoup(const std::string& word){
    std::string sortedWord = word;
    std::sort(sortedWord.begin(), sortedWord.end());
    return sortedWord;
}

/*Create a function that takes a string as its
 * argument and returns the string in reversed order.
Examples
reverse("Hello World") ➞ "dlroW olleH"
reverse("The quick brown fox.") ➞ ".xof nworb kciuq ehT"
reverse("Edabit is really helpful!") ➞ "!lufpleh yllaer si tibadE"*/
std::string reverse(const std::string& str){
    std::string reversed = str;
    std::reverse(reversed.begin(),reversed.end());
    return reversed;
}

/*Someone has attempted to censor my strings by replacing
 * every vowel with a *, l*k* th*s. Luckily, I've been able
 * to find the vowels that were removed.
Given a censored string and a string of the censored vowels,
 return the original uncensored string.
Example
uncensor("Wh*r* d*d my v*w*ls g*?", "eeioeo") ➞ "Where did my vowels go?"
uncensor("abcd", "") ➞ "abcd"
uncensor("*PP*RC*S*", "UEAE") ➞ "UPPERCASE"*/
std::string uncensor(std::string message, std::string letters){
    int count(0);
    std::string result;
    for (char i : message) {
        if (i == '*'){
            result += letters[count];
            count++;
        }
        else
            result += i;
    }
    return result;
}

/*lPaeesh le pemu mnxit ehess rtnisg!
 * Oh, sorry, that was supposed to say:
 * Please help me unmix these strings!
Somehow my strings have all become mixed up;
 every pair of characters has been swapped.
 Help me undo this so I can understand my strings again.
Examples
unmix("123456") ➞ "214365"
unmix("hTsii  s aimex dpus rtni.g") ➞ "This is a mixed up string."
unmix("badce") ➞ "abcde"*/
std::string unmix(std::string message){
    for (size_t i = 0; i < message.size() - 1; i += 2) {
        std::swap(message[i], message[i + 1]);
    }
    return message;
}

/*A word is on the loose and now has tried
 * to hide amongst a crowd of tall letters!
 * Help write a function to detect what the
 * word is, knowing the following rules:
The wanted word is in lowercase.
The crowd of letters is all in uppercase.
Note that the word will be spread out amongst
 the random letters, but their letters remain
 in the same order.
Examples
detectWord("UcUNFYGaFYFYGtNUH") ➞ "cat"
detectWord("bEEFGBuFBRrHgUHlNFYaYr") ➞ "burglar"
detectWord("YFemHUFBbezFBYzFBYLleGBYEFGBMENTment") ➞ "embezzlement"*/
std::string detectWord(std::string message){
    std::string result;
    for (char i : message){
        if (islower(i))
            result.push_back(i);
    }
    return result;
}

/*Check if a string title is a title string
 * or not. A title string is one which has
 * all the words in the string start with a
 * upper case letter.
Examples
checkTitle("A Mind Boggling Achievement") ➞ true
checkTitle("A Simple C++ Program!") ➞ true
checkTitle("Water is transparent") ➞ false*/
bool checkTitle(std::string title){
    for (size_t i = 0; i < title.size(); i++) {
        if (title[i-1] == ' ' or i == 0){
            if (islower(title[i]))
                return false;
        }
    }
    return true;
}

int main(){
    return 0;
}