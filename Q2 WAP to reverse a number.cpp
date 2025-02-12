//WAP to reverse a number  
#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10;      // Get the last digit
        reversed = reversed * 10 + digit;  // Add the digit to reversed number
        n = n / 10;              // Remove the last digit
    }
    return reversed;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Reversed number: " << reverseNumber(number) << endl;
    return 0;
}

