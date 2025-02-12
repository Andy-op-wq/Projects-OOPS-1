//WAP to convert a number into words 
#include <iostream>
using namespace std;

void convertToWords(int n) {
    if (n == 1) {
        cout << "One";
    } else if (n == 2) {
        cout << "Two";
    } else if (n == 3) {
        cout << "Three";
    } else if (n == 4) {
        cout << "Four";
    } else if (n == 5) {
        cout << "Five";
    } else {
        cout << "Number out of range!";
    }
}

int main() {
    int number;
    cout << "Enter a number (1-5): ";
    cin >> number;
    
    cout << "In words: ";
    convertToWords(number);
    cout << endl;

    return 0;
}

