//to check if the number is palindrome or not
#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    // Check if the string is equal to its reverse
    if (str == string(str.rbegin(), str.rend())) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}

