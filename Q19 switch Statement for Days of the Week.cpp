/* Write a program that takes a number between 1 and 7 from the user 
and uses a switch statement to print the corresponding day of the week 
(1 for Monday, 2 for Tuesday, etc.). Print "Invalid input" if the number is not between 1 and 7. */
#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter a number (1-7): ";
    cin >> day;

    switch (day) {
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday" ; break;
        case 3: cout << "Wednesday" ; break;
        case 4: cout << "Thursday" ; break;
        case 5: cout << "Friday" ; break;
        case 6: cout << "Saturday"; break;
        case 7: cout << "Sunday"; break;
        default: cout << "Invalid input";
    }

    return 0;
}
