//WAP to calculate the sum of digits of a number 
#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;  // Get the last digit
        sum = sum + digit;  // Add the digit to sum
        n = n / 10;         
    }
    return sum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Sum of digits: " << sumOfDigits(number) << endl;
    return 0;
}

