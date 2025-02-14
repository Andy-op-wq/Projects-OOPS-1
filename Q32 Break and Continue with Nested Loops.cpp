/* Assignment 7: Break and Continue with Nested Loops  
Write a program to find and print all pairs (x, y) such that:  
x^2 + y^2 = n where n is an input number, and both x and y range from 0 to sqrt(n). 
Use break and continue statements to optimize the solution */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a number (n): ";
    cin >> n;

    int limit = sqrt(n);  // Maximum value for x or y

    // Loop through x and y values from 0 to sqrt(n)
    for (int x = 0; x <= limit; x++) {
        for (int y = 0; y <= limit; y++) {
            if (x * x + y * y == n) {  // Check if x^2 + y^2 equals n
                cout << "(" << x << ", " << y << ")\n";  // Print pair
                continue;  // Move to next y without doing extra work
            }
        }
    }

    return 0;
}


