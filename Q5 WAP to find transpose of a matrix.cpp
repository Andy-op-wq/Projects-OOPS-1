//WAP to find transpose of a matrix 
#include <iostream>
using namespace std;

void transposeMatrix(int matrix[3][3]) {
    int transpose[3][3];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpose[i][j] = matrix[j][i];  // Swap rows and columns
        }
    }

    cout << "Transpose of the matrix is: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << transpose[i][j] << " ";  // Display transposed matrix
        }
        cout << endl;
    }
}

int main() {
    int matrix[3][3];
    cout << "Enter a 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];  // Input matrix elements
        }
    }

    transposeMatrix(matrix);
    return 0;
}

