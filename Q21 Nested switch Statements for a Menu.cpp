/* Create a menu-based program where the user can choose between "Vegetarian" and "NonVegetarian" options,
 then display a sub-menu with specific dishes based on the selection.
 Use nested switch statements to handle each menu and sub-menu option.  */
#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Choose an option:\n1. Vegetarian\n2. Non-Vegetarian\n";
    cin >> choice;

    switch (choice) {
        case 1: {
            int vegChoice;
            cout << "Vegetarian Menu:\n1. fries\n2. popcorn\n";
            cin >> vegChoice;

            switch (vegChoice) {
                case 1: cout << "You chose fries."; break;
                case 2: cout << "You chose popcorn." ;break;
                default: cout << "Invalid choice." ;
            }
            break;
        }
        case 2: {
            int nonVegChoice;
            cout << "Non-Vegetarian Menu:\n1. bbq\n2. steak\n";
            cin >> nonVegChoice;

            switch (nonVegChoice) {
                case 1: cout << "You chose bbq." ; break;
                case 2: cout << "You chose steak."  ;break;
                default: cout << "Invalid choice." ;
            }
            break;
        }
        default: cout << "Invalid choice." << endl;
    }

    return 0;
}
