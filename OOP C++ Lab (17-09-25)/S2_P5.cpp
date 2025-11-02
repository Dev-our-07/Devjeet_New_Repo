//WAP to find the transpose of a given n x n matrix
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the order of the matrix (n x n): ";
    cin >> n;
    int matrix[n][n], transpose[n][n];

    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Calculating the transpose
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j]; //rows=col; col=rows
        }
    }

    cout << "Transpose of the matrix is: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}