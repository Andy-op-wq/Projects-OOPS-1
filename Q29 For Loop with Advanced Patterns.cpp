//for loop pattern
/* Assignment 4: For Loop with Advanced Patterns  
Write a program that generates the following pyramid pattern for a given number of rows n:  
markdown  
Copy code  
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
Use nested loops and appropriate spacing for alignment. 
 */

#include <iostream>
using namespace std;

int main() {
    int n, j, i;
    cout << "Enter the number of rows: ";
    cin >> n;

    // rows
    for (i = 0; i < n; i++) {
        // columns
        for (j = 0; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

