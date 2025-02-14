/* Assignment 2: Nested If-Else with Range Checking  

Write a program that calculates income tax based on the following slab: 
Income <= 2,50,000: No tax  
2,50,001 - 5,00,000: 5%  
5,00,001 - 10,00,000: 20%  
Above 10,00,000: 30%  
The program should accept an annual income as input and output the tax amount */

#include <iostream>
using namespace std;

int main() {
    double income, taxAmount = 0.0;

    // Input annual income
    cout << "Enter your annual income (?): ";
    cin >> income;

    // Calculate tax based on income slabs
    if (income <= 250000) {
        taxAmount = 0;
    } else if (income <= 500000) {
        taxAmount = (income - 250000) * 0.05;
    } else if (income <= 1000000) {
        taxAmount = (income - 500000) * 0.20 + 250000 * 0.05;
    } else {
        taxAmount = (income - 1000000) * 0.30 + 500000 * 0.20 + 250000 * 0.05;
    }

    // Output the calculated tax
    cout << "Your income tax is: ?" << taxAmount << endl;

    return 0;
}


