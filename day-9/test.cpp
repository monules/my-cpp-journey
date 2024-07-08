#include <iostream>

/*For this challenge, you will NOT be given a string.
Your task isn't to add "Do not" before the given string.
 If there is no given string, you will not return "Do not do anything."
 Do not check the examples to know how to do this challenge.
Examples
reversePsychology("wash the dishes") ➞ "Do not wash the dishes."
reversePsychology("eat your lunch") ➞ "Do not eat your lunch."
reversePsychology("go to school") ➞ "Do not go to school."*/
std::string reversePsychology( std::string someString ) {
    if (someString.empty())
        return "Do not do anything.";
    else{
        std::string output("Do not ");
        output += someString;
        return output;
    }
}
/*Create a function that counts the number of syllables a word
 * has. Each syllable is separated with a dash -.
Examples
numberSyllables("buf-fet") ➞ 2
numberSyllables("beau-ti-ful") ➞ 3
numberSyllables("mon-u-men-tal") ➞ 4
numberSyllables("on-o-mat-o-poe-ia") ➞ 6*/
int numberSyllables(std::string someString){
    int count = 0;
    for (int i = 0; i < someString.length(); ++i) {
        if (someString[i] == '-')
            count++;
    }
    return (count += 1);
}
/*Create a function that returns the string "Burp" with the
 * amount of "r's" determined by the input parameters of the function.
Examples
longBurp(3) ➞ "Burrrp"
longBurp(5) ➞ "Burrrrrp"
longBurp(9) ➞ "Burrrrrrrrrp"*/
std::string longBurp(unsigned int times){
//    std::string output = "Bu";
//    for (int i = 0; i < times; i++) {
//        output+='r';
//    }
//    output+='p';
    return "Bu" + std::string(times,'r') + 'p';
    //return output;
}

int main() {
    std::cout<<"this was day 9"<<std::endl;

}