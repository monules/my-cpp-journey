/*Write a function that takes the base and height of a triangle and return its area.
Examples:
triArea(3, 2) ➞ 3
triArea(7, 4) ➞ 14
triArea(10, 10) ➞ 50
Notes:
The area of a triangle is: (base * height) / 2

double triArea(int base, int height){
    double area;
    area = (base * height) / (double) 2;
    return area;
}
*/

/*Create a function that takes voltage and current and returns the calculated power.
Examples:
circuitPower(230, 10) ➞ 2300
circuitPower(110, 3) ➞ 330
circuitPower(480, 20) ➞ 9600

int circuitPower(int voltage, int current){
    int calculatedPower;
    calculatedPower = voltage * current;
    return calculatedPower;
}
*/

/*Create a function that finds the maximum range of a triangle's third edge, where the side lengths are all integers.
Examples
nextEdge(8, 10) ➞ 17
nextEdge(5, 7) ➞ 11
nextEdge(9, 2) ➞ 10
Notes
(side1 + side2) - 1 = maximum range of third edge.
The side lengths of the triangle are positive integers.

int nextEdge(int side1, int side2){
    int side3;
    side3 = (side1 + side2) - 1;
    return side3;
}
*/

/*There is a single operator in C++, capable of providing the remainder of a division operation. Two numbers are passed as parameters. The first parameter divided by the second parameter will have a remainder, possibly zero. Return that value.
Examples
remainder(1, 3) ➞ 1
remainder(3, 4) ➞ 3
remainder(-9, 45) ➞ -9
remainder(5, 5) ➞ 0

int remainder(int num1, int num2){
    int remainder;
    remainder = num1 % num2;
    return remainder;
}
*/

/*Create a function that takes two integers and checks if they are equal.
Examples
isEqual(5, 6) ➞ false
isEqual(1, 1) ➞ true
isEqual(36, 35) ➞ false

bool isEqual(int num1, int num2){
    if (num1 == num2 )
    {return true;}
    else
    {return false;}
}
*/

/*Create a function that takes three integer arguments (a, b, c) and returns the amount of integers which are of equal value.
Examples
equal(3, 4, 3) ➞ 2
equal(1, 1, 1) ➞ 3
equal(3, 4, 1) ➞ 0

int equal(int a, int b, int c){
    if (a == b and b == c)
    {
        return 3;
    }
    else if(a == c and a != b){
        return 2;
    }
    else if(a == b and a != c){
        return 2;
    }
    else if(b == c and b != a){
        return 2;
    }
    else return 0;
}
*/

/*Create a function that takes three arguments prob, prize, pay and returns true if prob * prize > pay;
otherwise return false.
To illustrate:
profitableGamble(0.2, 50, 9)
... should yield true, since the net profit is 1 (0.2 * 50 - 9), and 1 > 0.
Examples
profitableGamble(0.2, 50, 9) ➞ true
profitableGamble(0.9, 1, 2) ➞ false
profitableGamble(0.9, 3, 2) ➞ true

bool profitableGamble(double prob, int prize, int pay){
    return (prob * prize) > pay;
}
*/

#include <iostream>

int main()
{
    std::cout << "this was day 4" << std::endl;
}
