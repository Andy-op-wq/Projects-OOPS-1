//arithematic op using switch
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+': cout << "Result: " << num1 + num2  ;break;
        case '-': cout << "Result: " << num1 - num2  ;break;
        case '*': cout << "Result: " << num1 * num2  ;break;
        case '/': cout << "Result: " << num1 / num2  ;break;
        default: cout << "Invalid operator";
    }

    return 0;
}
