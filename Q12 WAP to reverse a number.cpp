// WAP TO REVERSE A NUMBER

#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;

    // Ask the user to input a number
    cout << "Enter a number: ";
    cin >> num;

    // Reverse the number
    while (num != 0) {
        int digit = num % 10;  // Get the last digit
        reversed = reversed * 10 + digit;  // Add it to the reversed number
        num = num / 10;  // Remove the last digit from the number
    }

    // Output the reversed number
    cout << "Reversed number: " << reversed << endl;

    return 0;
}

