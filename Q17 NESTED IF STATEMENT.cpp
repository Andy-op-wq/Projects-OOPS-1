/* Write a program that takes a user's age as input and uses nested if statements to determine
 and print whether the person is a child (age < 12), teenager (age between 12 and 18), 
 adult (age between 18 and 60), or senior (age > 60) */ 

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    if (age < 12)
        cout << "Child";
    else if (age >= 12 && age < 18)
        cout << "Teenager";
    else if (age >= 18 && age <= 60)
        cout << "Adult";
    else
        cout << "Senior";

    return 0;
}
