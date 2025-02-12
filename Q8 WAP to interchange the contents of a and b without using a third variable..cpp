/* Two variables a and b contain values 10 and 20. Write a program to interchange the contents of a and b
 without using a third variable */
 
 #include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    cout << "Before swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Swapping the values of a and b without using a third variable
    a = a + b;  // a now becomes 30 (10 + 20)
    b = a - b;  // b becomes 10 (30 - 20)
    a = a - b;  // a becomes 20 (30 - 10)

    cout << "After swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}

