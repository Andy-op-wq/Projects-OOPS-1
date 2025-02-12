//write a program in c to calculate the percentage of marks of students in 5 subjects
#include<iostream>
using namespace std;

int main() {
    int a, b, c, d, e, sum = 0;

    cout << "Enter the marks obtained by the student in DBMS (out of 100): ";
    cin >> a;
    cout << "Enter the marks obtained by the student in DS (out of 100): ";
    cin >> b;
    cout << "Enter the marks obtained by the student in OOPS (out of 100): ";
    cin >> c;
    cout << "Enter the marks obtained by the student in Discrete Mathematics (out of 100): ";
    cin >> d;
    cout << "Enter the marks obtained by the student in DLED (out of 100): ";
    cin >> e;

    // Calculate the sum of marks
    sum = a + b + c + d + e;

  
    float pe = (sum / 500.0) * 100;  

    cout << "Percentage of the student = " << pe;

    return 0;
}

