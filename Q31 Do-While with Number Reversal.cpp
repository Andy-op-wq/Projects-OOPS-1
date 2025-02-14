/* Do-While with Number Reversal  
Write a program that repeatedly asks the user to input a positive integer 
and then reverses the digits of the number. For example, input 1234 should output 4321. 
Stop the program when the user enters 0.  */

#include <iostream>
using namespace std;

int main() {
    int number;
    
    do {
        cout << "Enter a positive integer (0 to exit): ";
        cin >> number;
        
        if (number == 0) {
            break;  // Stop the program if the user enters 0
        }
        
        int reversedNumber = 0;
        
        // Reversing the number
        while (number > 0) {
            int digit = number % 10; // Get the last digit
            reversedNumber = reversedNumber * 10 + digit; // Add it to the reversed number
            number /= 10; // Remove the last digit from the number
        }
        
        cout << "Reversed number: " << reversedNumber << endl;
        
    } while (true); // Keep repeating until user enters 0

    cout << "Program ended." << endl;
    
    return 0;
}


