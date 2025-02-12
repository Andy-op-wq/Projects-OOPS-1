/* Temperature of a city in Fahrenheit degrees is entered through the keyboard. 
Write a program to convert and print the temperature in centigrade degrees. */

#include <iostream>
using namespace std;

int main() {
    float fahrenheit, celsius;

    // Ask the user to enter the temperature in Fahrenheit
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5 / 9;

    // Output the result
    cout << "Temperature in Celsius: " << celsius << "°C" << endl;

    return 0;
}

