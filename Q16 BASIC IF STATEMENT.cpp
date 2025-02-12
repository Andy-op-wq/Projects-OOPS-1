/* Write a program that takes an integer input from the user and checks if it is positive, 
negative, or zero using if, else if, and else statements. Print the result accordingly */

#include <iostream>
using namespace std;

int main() {
    
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (number > 0) {
        cout << "The number is positive." ;
    } else if (number < 0) {
        cout << "The number is negative.";
    } else {
        cout << "The number is zero.";
    }

    return 0;
}

