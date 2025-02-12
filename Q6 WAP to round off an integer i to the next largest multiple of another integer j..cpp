/* Write a program to round off an integer i to the next largest multiple of another integer j. 
For example, 256 days when rounded off to the next largest multiple divisible by a week result into 259. */
#include <iostream>
using namespace std;

int roundUpToNextMultiple(int i, int j) {
    // If i is already a multiple of j, return i
    if (i % j == 0) {
        return i;
    }
    
    // Otherwise, round i up to the next multiple of j
    return ((i / j) + 1) * j;
}

int main() {
    int i, j;
    
    // Get user input for i and j
    cout << "Enter the number (i): ";
    cin >> i;
    cout << "Enter the divisor (j): ";
    cin >> j;
    
    // Calculate and display the result
    int result = roundUpToNextMultiple(i, j);
    cout << "The next largest multiple of " << j << " after " << i << " is: " << result << endl;

    return 0;
}

