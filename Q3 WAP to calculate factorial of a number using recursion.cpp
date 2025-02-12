//WAP to calculate factorial of a number using recursion 
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;  // Base case
    }
    return n * factorial(n - 1);  // Recursive call
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Factorial: " << factorial(number) << endl;
    return 0;
}

