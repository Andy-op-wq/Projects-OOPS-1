/* Assignment 3: Switch Statement with Functions  
Create a simple calculator using a switch statement.
The program should ask the user to input two numbers and a choice of operation (+, -, *, /, %).
Implement each operation in a separate function and call the appropriate function based on the user's input.  */
  
#include <iostream>
using namespace std;

// Function for each operation
double add(double num1, double num2) { return num1 + num2; }
double subtract(double num1, double num2) { return num1 - num2; }
double multiply(double num1, double num2) { return num1 * num2; }
double divide(double num1, double num2) { return num1 / num2; }
double modulo_operation(double num1, double num2) { return (int)num1 % (int)num2; }

int main() {
    double num1, num2;
    char op;

    // Taking user input for numbers and operation
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter an operation (+, -, *, /, %): ";
    cin >> op;

    // Switch statement to choose the operation
    switch (op) {
        case '+':
            cout << "Result: " << add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << multiply(num1, num2) << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << divide(num1, num2) << endl;
            } else {
                cout << "Error: Cannot divide by zero!" << endl;
            }
            break;
        case '%':
            if (num2 != 0) {
                cout << "Result: " << modulo_operation(num1, num2) << endl;
            } else {
                cout << "Error: Cannot divide by zero for modulus!" << endl;
            }
            break;
        default:
            cout << "Invalid operation!" << endl;
            break;
    }

    return 0;
}

