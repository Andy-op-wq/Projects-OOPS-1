/* WAP to check if a letter is a vowel or not   */


#include <iostream>
using namespace std;

int main() {
    char letter;

    // Ask the user to input a letter
    cout << "Enter a letter: ";
    cin >> letter;

    // Convert the letter to lowercase to handle both uppercase and lowercase
    letter = tolower(letter);

    // Check if the letter is a vowel
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
        cout << letter << " is a vowel." << endl;
    } else {
        cout << letter << " is not a vowel." << endl;
    }

    return 0;
}

